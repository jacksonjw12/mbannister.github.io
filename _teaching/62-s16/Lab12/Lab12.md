---
layout: default
title: "CS 62: Lab 12"
mathjax: true
---

# CS 62: Lab 12

# Wednesday April 20, 2016

---

In this lab, you will be writing part of a [markdown](https://en.wikipedia.org/wiki/Markdown) to [html](https://en.wikipedia.org/wiki/HTML) converter. A popular markdown to html converter is [kramdown](http://kramdown.gettalong.org/) and much of this write up is based on their documentation. Unlike the last lab, this lab is conceptually easy, but the cumbersome nature of working with strings in C will add quite a bit of extra difficulty. The goals of this lab are to gain more experience with reading runtime error messages, using `memcheck` and with the C string library. All of these skills will be needed in the current assignment. While working on this lab you should make use of the POSIX standard functions [`getline`](http://man7.org/linux/man-pages/man3/getline.3.html) and [`asprintf`](http://man7.org/linux/man-pages/man3/asprintf.3.html). Also, make sure you look at the example code from class today.

## Reading a file line-by-line

Before get started on the lab let's make sure we can read a file line-by-line. For this lab we are going to write a program which takes two files as command line arguments. The command `make run` ignores command line arguments so we will need to specify the arguments in the `makefile`, much like we did with eclipse. The arguments are already set, but take a look and make sure you understand how to change them.

The canonical loop to read a file line-by-line when using the POSIX library is:

```c
char *line = NULL;
size_t a = 0;
ssize_t n = 0;
while ((n = getline(&line, &a, input)) != -1) {
    // Do something!
}
free(line);
```

The variables `a` and `n` store the amount of space allocated by `getline` and the amount of space actually used by `getline`, respectively. Typically, we will only care about `n`. Also, we are responsible for freeing the memory that `getline` allocates while reading in a line, but we only need to do this once at the end, as `getline` will reuse the memory from the last iteration of the loop.

Make sure you can open both an input file `data/input.txt` and an output file `data/output.html` and copy the contents from one to the other. You may freely use the code from the class example, but make sure you understand what it is doing!

### Removing the ending newline

The line you read in with `getline` will have an ending newline character. We will often want to remove this character. On Linux and OSX this is easily done with

```c
line[n - 1] = '\0';
```

To get this to work quickly on all platforms is a little trickier, but if you are not worried about speed the following will work on Linux, OS X and Windows, and is probably the right thing to do.

```c
line[strcspn(buffer, "\r\n")] = '\0'
```

## Headings

In html, headings come in six different levels:

```html
<h1>Heading level 1</h1>
<h2>Heading level 2</h2>
<h3>Heading level 3</h3>
<h4>Heading level 4</h4>
<h5>Heading level 5</h5>
<h6>Heading level 6</h6>
```

Typically, headings with lower levels are considered more important and are therefore rendered with a larger font.

In markdown (atx style), headings also come in six different levels:

```text
# Heading level 1
## Heading level 2
### Heading level 3
#### Heading level 4
##### Heading level 5
###### Heading level 6
```

Your converter will convert a markdown level `k` heading to an html level `k` heading. More formally, a markdown header must be on its own line and the line must start with between one and six `#`s, leading spaces are not allowed and spaces between the `#` are not allowed. The following headings are invalid:

```text
   # My awesome webpage!
# ## Is this a level three heading?
```

However, all space after the `#`-block and before the first non-space character is ignored. So the markdown heading

```text
##      Hello World!
```

would be converted to html as

```html
<h2>Hello World!</h2>
```

White space at the end of a line should also be dropped, but this is more difficult and therefore optional in this lab.

### Your task

For this part of the lab your task is to implement a function `char *convert_header(char *md)`, which performs this conversion. The file `markdown.h` contains a declaration of this function with documentation about its behavior. Read these comments carefully and ask if you have any questions.

## Valid id's

It is common to given a heading an "id". This id can be used to create links that scroll to the heading and to style specific headings in specific ways. The html syntax for a heading with an id looks like:

```html
<h2 id="hello-world">Hello World!</h2>
```

It would be nice to use the content of the heading as its id, but unfortunately there are rules on what strings are allowed to be used as ids. So kramdown converts the content of a heading into an id using the something like the following rules:

- All characters except letters, numbers, spaces and dashes are removed from the string.
- All characters from the start of the line until the first letter are removed.
- Everything except letters and numbers (spaces and dashes) are converted to dashes.
- Everything is lowercased.
- If nothing is left, the identifier `-` is used.

Technically, we should have rules to avoid duplicate ids, but that is more work... For some examples on how the conversion should work see, [Automatic Generation of Heading IDs](http://kramdown.gettalong.org/converter/html.html#auto-ids).

### Your task

Now you will implement a function `char *auto_id(char *str);` which converts a string into a valid id using the rules above. The file `markdown.h` contains a declaration of this function with documentation about its behavior. Read these comments carefully and ask if you have any questions.

When you are ready to test this function modify your `char *convert_header(char *md)` function to use your automatically generated ids.

## Finishing up

We allocated a lot of memory in this lab! Remember, each call to `malloc`, `getline` and `asprintf` allocated some memory on the heap. Unless, you were very careful you probably have some memory leaks!

Run `make memcheck` to see if you have any definitely lost memory. I have tried to hind all of the memory leaks from OS X, but some may have snuck by me. Please let me know if anything look weirder than usual.

Once you have fixed up all of your memory leaks submit the lab as usual.
