Submitting Assignments
======================

In an effort to help course assistants manage your submissions and get you
feedback as efficiently as possible, we will begin requiring each
of your submissions for lab and assignments to have a manifest file in them.

In your top-level directory, create a file named `assign##.json` or `lab##.json`
with the following contents:

> Replace `##` with the two digit assignment/lab number. If this number is < `10`,
> pad the single digit with a `0`.

```json
{
  "version": "0.0.1",
  "class": "CSCI062",
  "collaborators": [
    "rwollman"
  ],
  "notes": "No notes.",
  "ec": false
}
```

- Replace `rwollman` under the list of collaborators with your DCI
  username. (The username you use to log in to the lab computers.)

- If you have some information you need to communicate with the grader
  simply change the text where it says *No notes.*; however, be sure
  to leave the quotes!

- If you've completed extra credit, change `"ec": false` to be `"ec": true`

## Creating the File Within Eclipse

Although you can use any plaintext editor to create this file, since most
of your assignments will be in the Eclipse IDE, you can easily add this file
from within Eclipse.

For the project you are working on, in the *Package Explorer*, simply right
click on your project folder > new > File. Name the file and edit its contents. 

![Eclipse Screenshot](http://www.cs.pomona.edu/~rwollman/images/eclipse.png)

