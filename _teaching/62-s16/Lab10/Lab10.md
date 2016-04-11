---
layout: default
title: "CS 62: Lab 10"
mathjax: true
---

# CS 62: Lab 09

# <del>Wednesday April 6, 2016</del> <ins>ASAP</ins>

---

<div class="warning" markdown="1">
### Second attempt

Our first attempt at completing this lab failed, as the systems were not properly configured. These instruction have been modified to work around these configuration problems and should now work. If you were in the first lab, your account may be partially configured and you will find that some steps are already completed. Warning are placed in the instructions for what to do in this case.
</div>

## Introduction

Our goal today is to get you started with C, particularly its input and output functions. However, before we can start coding in C we need to set up a comfortable environment in which we will be working. First, we will set up the text editor Atom (please use atom for this lab, but you may use any editor you like for future C projects). Then we will set up the Clang C compilers. Finally, you will write four functions to try out the various I/O functions provided by C. The stubs of four methods are provided for you in the starter code, as well as commented out function calls from the main method.

Before lab, take a look at [Essential C](http://cslibrary.stanford.edu/101/) and [http://en.cppreference.com/w/c](cppreference.com). Spend some time skimming these resources to familiarizing yourself with the different C language features. You may not understand everything but that’s okay.

<div class="warning" markdown="1">
### Alternative shells

The instructions in this lab assume that you are using the default shell that comes with OS X, `bash`. If you have changed your shell to an alternative shell, then some of the steps in this lab will not work. If you run into problems, please ask on Piazza or in office hours. To find out what shell you are using you can type the following command

```
echo $0
```

which will print the name of the currently running shell.
</div>

---

## Step 1: Setting up Atom

<div class="warning" markdown="1">
### File system problems with this step.

The way the shared file system is setup for the lab computers causes severe slowdowns when multiple students are downloading and decompressing files at the same time. For this reason we will officially skip this step. The version of Atom on the lab computers is sufficient for out uses. I am leaving this section intact incase you would like to use this setup on your home computer or you would like to setup your lab computer on your own time.

If you were in the first Lab section, you may have already "pointed" you terminal to the version of Atom that you downloaded from GitHub. If this is working, you can continue to use this configuration, but if you are having any problems please perform the following steps.

Open your `.bash_profile` in `nano` by entering the command

```
nano ~/.bash_profile
```

and remove the following line

```shell
export ATOM_PATH=~/Applications
```
Now save the file by holding `CONTROL` and pressing `O` (for output). You will get a prompt to confirm you want to output the contents of the editor (called a buffer) to the file `.bash_profile`; press `ENTER` to save the file. Now exit `nano` by holding `CONTROL` and pressing `X`.

Type the following command to update your shell:

```
source ~/.bash_profile
```

If you get any error, ask for help from me or a mentor.

You should now skip forward to Step 2.

</div>

The lab computers have a copy of Atom already installed, but Atom is an actively developed open source text editor and the installed version is lacking many nice features that are currently available. So we are going to install a newer copy and the way we will install it will allow you to upgrade it whenever you like. To gain some more practice with terminal commands we will be doing most of the install in the terminal.

### Downloading Atom from GitHub
First we will download Atom from GitHub's webpage (into your `Downloads` folder) using the terminal command `curl`. The download from GitHub is a compressed archive file. We can decompress this file using the `tar` command. Enter the following commands to complete this step:

```
cd ~/Downloads
curl -LO https://github.com/atom/atom/releases/download/v1.6.2/atom-mac.zip
unzip atom-mac.zip
```

### Moving the Atom application to its new home

Leaving the Atom application in the Downloads folder is just unprofessional, so we will move it to a more appropriate location. On OS X user installed (as opposed to Administrator installed) applications go in the folder `~/Applications`. This folder may not already exist on your computer, but the following commands will create the folder and copy Atom over to its new home. The first line will give you an error if the directory already exists.

```
mkdir ~/Applications
mv ~/Downloads/Atom.app ~/Applications/
```

### Letting the terminal know which Atom we want

We will want to be able to open atom by typing `atom` at the command line, but if you try that now, you will find that you open the wrong atom! To fix this we need to edit a "shell" configuration file. To do this we will use the command line editor `nano`. Type the command

```
nano ~/.bash_profile
```

to open your `.bash_profile` configuration file (if it does not exist, this will create one). Depending on the classes you have already taken it is possible that you already have some content in this file. In any event, add the following line to the end of the file

```shell
export ATOM_PATH=~/Applications
```

Now save the file by holding `CONTROL` and pressing `O` (for output). You will get a prompt to confirm you want to output the contents of the editor (called a buffer) to the file `.bash_profile`; press `ENTER` to save the file. Now exit `nano` by holding `CONTROL` and pressing `X`. You will now need to exit the terminal and reopen for the changes to be applied.

Side note: When a file is prefixed with a "`.`" the file is considered hidden and cannot be seen with the `ls` commands, but it can be seen with `ls -a`.

### Checking that it all worked.
To test that everything is working type the command `atom` and click on the __Atom__ menu bar item. If it says "Version 1.6.2", you are good to go!

### Install some awesome

The Atom text editor is extensible via packages written by users like you! Some of the packages you may want to consider installing are: __autocomplete-clang__, __clang-format__, __linter__ & __linter_clang__ and __docblockr__. For extra nerd powers you may also want: __highlight-selected__ and __minimap__. These are the main packages you will note me using in class. Please let me know if you have any trouble installing packages.

---

## Step 2: Setting up Clang

<div class="warning" markdown="1">
## Fixing problems that should not exist

This is the step when most people in the first lab sections started to encounter problems, but there was actually nothing wrong with this particular section. However, as I frantically start proposing fixes, it is likely you ended up in a broken state with respect to this step.

Before starting this section please enter the following command:

```
mv ~/Library/Clang mv ~/Library/OldClang
```

This will allow you to start this section fresh, by moving your current `clang` directory out of the way. If you did not get to this part of the lab before, then the command above will give you an error message that can be safely ignored.

Additionally, we need to make sure that lab computer you are on has the XCode command line utilities installed. To install the command line utilities enter the command

```
xcode-select --install
```

You will get the following error

```
xcode-select: error: command line tools are already installed, use "Software Update" to install updates
```

if the command line tools were already installed. This step needs to be performed once per computer. So if you switch computers, you may need to enter the command again.
</div>

A version of of the `clang` compiler is already install on OS X with XCode, but it is pretty outdated and lacks the newer safety features that will make our lives much easier.

For your convenience, I have already installed a copy of `clang` version 3.8 under `/common/cs/cs062/` we just need to make your terminal aware of its existence. First we create a symbolic link to the directory in a more convenient locations with the command:

```
ln -s /common/cs/cs062/Clang ~/Library/Clang
```

Now that it is linked into a nice location we need to modify your `.bash_profile` again, so type

```
nano ~/.bash_profile
```

and add the line

```
export PATH=~/Library/Clang/bin:$PATH
```

to the end of the file. The line above needs to be entered exactly how it is written, in particular you cannot put spaces around the `=`. This says we want the terminal to prefer our version of `clang` to the systems version. If you forgot how to save and exit from `nano`, look back to the previous section. As before we need to exit and reopen the terminal to apply the changes. To check that everything worked type

```
which clang
```

you should get

```
/Users/USERNAME/Library/Clang/bin/clang
```

where `USERNAME` is replaced by your actual username. If instead you get

```
/usr/bin/clang
```

then something is wrong and you should ask me or one of the mentors for help. Once you have this all worked out it is time to do some actual coding.

---

## Step 3: Getting started with the actual lab

Begin by creating a working directory for your C programs, inside your `cs062` directory, I would suggest the name it `dangerzone`, but anything is fine. If you forgot how to create a directory, ask me or one of the mentors. Do not use your eclipse workspace directory for C programs. Now grab the starter code from the usual place and copy it into the `dangerzone`. From the terminal change your director to the starter code directory and type

```
atom .
```

to open atom in this working directory.

Open the `makefile` in Atom (it should be listed in the left sidebar) and read the comments at the top of `makefile` and fill out your information. Take a look at the rest of the `makefile`, most of it won’t make any sense to you---yet. This `makefile` will automatically run the commands to compile our C programs (using the `clang` compiler), like a mini eclipse for C. While programming in C you will leave your terminal in the directory with the `makefile` and type in commands to compile and run your program.

### Function 1: Printing to the terminal

The first part of our exercise is to familiarize you with terminal output using the C I/O model. To print a string text to the terminal we will be using the `stdout` “output stream”, which is analogous to Java’s `System.out`. To C `stdout` looks like an ordinary file, but when we write to this "file" what we write prints to the screen.

To write a string to `stdout` we can use the `fprintf` command ([fprintf @ cppreference](http://en.cppreference.com/w/c/io/fprintf)) like so:

```
fprintf(stdout, "Hello world!\n");
```

Now technically speaking, `fprintf` returns a code (an `int`) letting us know if there was an error while writing to `stdout`, which we should be checking. Remember there are no exceptions in C! What does the `\n` do?

Fill in the body of the function `part_one()` so that when called it prints out at least two lines. Then uncomment the call to the function in `main` and try running the program.

To compile the program we type the following commands in the terminal window (make sure you are still in the directory with the `makefile`):

```
make
```

Thats it! If you did not get any errors or warnings, then you are ready to run the program with

```
make run
```

If the program ran without error, then it is time to move on to the next function.

In this function we used `fprintf` and in class you have seen me use `printf`---what is the difference? The function `printf` is a convenience function for `fprintf`, which only prints to `stdout`. Later we will use `fprintf` to print to files.

### Function 2: Reading from the terminal

Before you start this function comment out the call to `part_one` and uncomment the call to `part_two`.

For this function we will use the "input stream" `stdin`, which is analogous to `System.in`. Again, to C `stdin` looks like an ordinary file, but when we read the "file" it sees what you have typed in to the terminal. We can use the `fgets` command ([fgets @ cppreference](http://en.cppreference.com/w/c/io/fgets)) to read a line from `stdin` into a `buffer` with:

```
size_t buffer_size = 1000;
char buffer[buffer_size];
fgets(buffer, buffer_size, stdin)
```

The C language does not have a "true" string object like Java so we need to use character arrays for our strings. Further more since the size of an array is fixed we need to set some reasonable upper bound on the length of a line, such as 1000 characters. What happens if the line is longer than 1000? Can we check for this?

Fill in the body of `part_two` with code that echoes lines typed on the keyboard.

Your program will contain a `while` loop that reads in what is typed on the keyboard and then prints it back out for the user to see. You can let the program know you are done by sending an end-of-file signal by pressing `CONTROL+D`. You can test for end-of-input in your program by testing the value of `feof(stdin)` ([feof @ cppreference](http://en.cppreference.com/w/c/io/feof)), which is true when you are at the end of a file.

### Function 3: Reading from and writing to files

Before you start comment out the call to `part_two` and uncomment the call to `part_three`.

The next step is to learn how to work with files on the disk. In this part of the lab, we will copy the contents of one file to another file. This will take only a minor modification to your solution in Part 2. Before you begin create a text file named `input.txt` in the `data` directory and fill it with some text.

In C you open a file for reading with

```
FILE* input_file = fopen("data/input.txt", "r");
```

and you open a file for writing with

```
FILE* output_file = fopen("data/output.txt", "w");
```

Once the files are opened you can work with `input_file` and `output_file` just like you did with `stdin` and `stdout`. In the body of part three, modify your code from Part 2 to copy the contents of `data/input.txt` to `data/output.txt`.

When you are done working with the files you need to close the files:

```
fclose(inputf);
fclose(outputf);
```

Be sure that the output file is identical to the input file. Use the `diff` command to detect any differences. You can also use the `less` command to open up and look at a file. To exit from `less`, simply type `q`.

### Function 4: An adding machine

So far we have only been reading and writing strings. In this last part we will use C to read and write ints from stdin and to stdout. To print ints we use `fprintf`, which is analogous to Java’s System.out.format. The following will print the number 10 followed by a new line:

```
fprintf(stdout, "%d\n", 10);
```

Make sure you look up how to work with `fprintf` before lab. Conversely, we can read an integer
from stdin with `fscanf` ([fscanf @ cppreference.com](http://en.cppreference.com/w/c/io/fscanf)) like so:

```
int n;
fscanf(stdin, "%d", &n);
```

The third argument above, `&n`, is the address of `n`. We need to pass the address of the variable into the function so that we can overwrite its value. Here we are ignoring the return code of `fscanf` which tells us if the user did in fact enter an integer.

With this information in hand fill out the body of `function_4` so that when run it will allow the user to keep entering integers until the end-of-file is reached at which point it prints the sum of the integers the user entered. What happens to your program if you enter a letter? How can you fix this?

## Step 4: Play with some of the course examples

Now is a good time to checkout the course examples. They are under `/common/cs/cs062/CExamples` and can be dragged over to your C workspace. Let me know if you have any trouble running the examples.
