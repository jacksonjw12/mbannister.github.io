---
layout: default
---
Project 0: Adapting to your environment (Due Jun 30 at 11:50pm)
===============================================================
---------------------------------------------------------------

Overview and goals
------------------
The goals of this project are for you to install and familiarize yourself with the development environment we will be using in this course. To demonstrate that you have accomplished these you will write and submit a short C++ program.

After completing this project you will have:

- Installed VirtualBox
- Imported the course virtual machine into VirtualBox
- Explored the development environment 
- Downloaded your first project
- Submitted your first project

The deliverable for this project is a very short C++ program (described below). The primary purpose of this submission is to prepare for the submission of future projects. If you submit a correct project exactly as described below you will receive 2% toward your overall grade in the course. You may prefer other development environments, operating systems, programming languages, etc., but be aware that in this course we are not offering you that choice.

Virtualization
--------------
Our target platform is Xubuntu 14.04, a Linux distribution based on Ubuntu and using the XFCE desktop environment. Installing and configuring Linux can be difficult depending on the hardware it is being installed on. To remove this complication we will be running Xubuntu within VirtualBox. VirtualBox is a free application distributed by Oracle that acts like a virtual computer, allowing us to install a second operating system without risk or complication. To further reduce the difficulty you will not even need to install Xubuntu. I have already installed Xubuntu in VirtualBox and you will use a clone of this installation. Even if you already use Linux as your primary operating system, I ask that you still use this virtual machine.


Installing and setting up VirtualBox
------------------------------------
Before we get started you will need to install VirtualBox. You can download virtual box at [www.virtualbox.org](http://www.virtualbox.org). VirtualBox is available for Windows, Mac OS X, and most popular distributions of Unix and Linux.In addition, virtual box is installed on the ICS Lab machines. So if you will be using the lab machines you can skip the installation step.

I have been using version 4.3.12 of VirtualBox. This is the only version I have tested our virtual machine with, but I would imagine it should with with any 4.3.XX version. Unless you have a good reason to use a different virtualizer, I would suggest you use VirtualBox 4.3.12.


What is our virtual machine?
----------------------------
The virtual machine we are using is based on the 32-bit version of Xubuntu 14.04. Although, we will mostly be working at the command line, the operating system does have a simple graphical desktop environment, called XFCE.

In addition to the base operating system we have the following software:

- C++ Compilers: __Clang 3.4__ (which we will be using) and __GCC 4.8.1__ (the standard linux compiler)
- General debuggers: __LLDB 3.4__ and __GDB 7.7__
- Memory debugger: __Valgrind 3.10.0__
- Build utilities: __CMake 2.8.12.2__ and __Make 3.81__
- Version control: __Git__ and __Subversion__
- Five text editors: __vim__, __emacs__, __nano__, __gedit__, __geany__
- GUI Library: __SDL 2.0__
- Browsers: __Firefox__ and __Chrome__

Throughout the course you may need to install additional software and libraries for some of the projects. If this is necessary, you will be given detailed instructions on how to perform the installation.

You can download our virtual machine from the download link below. This is a large download, a little over two gigabytes. For this reason downloading the file is restricted to computer connected to the campus network. The download is pretty fast if you are connected to the wired network in one of the ICS Labs. So that is my recommendation.

[Download link](../vm/Xubuntu-ICS-2014-Summer.ova) ( MD5 Checksum:6ed6e914e61b64f97547c8e324573e42)


Importing our virtual machine into VirtualBox
---------------------------------------------
Once you have installed VirtualBox and downloaded the virtual machine image you are ready to import the image into VirtualBox.

- From the __File__ menu, select __Import Appliance...__
- Select the downloaded OVA file and click next
- At the next dialog click import
- This step can take some time, but when it complete you should now have a virtual machine titles __Xubuntu-ICS-2014-Summer__.

After completing this process the virtual machine files will be installed on your hard drive (e.g., in __`/home/<username>/VirtualBox VMs/Xubuntu-ICS-2014-Summer`__ on my laptop running Linux). This probably what you want if you are installing the virtual machine on your personal computer, but if you are using the lab computer you probably will want to move the files to a USB drive.

To move the files to a USB drive (should have at least 16GB free):

- Import the virtual machine
- Find the directory containing the virtual machine, and move it to your USB drive
- Right click on the virtual machine you installed and click remove
- Select remove all files
- Now select the __Machine__ menu and click __Add__, the select the directory on your USB drive


Starting and logging in for the first time
------------------------------------------
With everything setup its time to run the virtual machine. To do this select the __Xubuntu-ICS-2014-Summer__ virtual machine and click the __Start__ button. A second window will pop up and you will see the machine boot up and eventually a login screen. The machine has one user named __user__ whose password is __password__.

Your first task is to change your password. Click on the mouse in the upper left corner and open the terminal application. This will place you at a bash prompt:

~~~

user@VirtualBox:~$
~~~


This will become a familiar site, as we will be using mostly command line tools in this course.

To change your password, type the command __passwd__, press Enter and follow the prompts. General recommendation, do not use a password you use for other purposes and make it memorable enough so you will not forget it. Writing it down would be a good idea.


Getting around in Linux
-----------------------
You should spend a few minutes exploring the operating system. Both a GUI based applications and the command line. On the command line you will find the following commands useful:

- __ls__  -  get a listing of all files in the current working directory
- __cd__ _`<directory>`_  -  change working directory to _<directory>_
- __pwd__  -  print the current working directory
- __cp__ _`<source>`_ _`<target>`_  -  copy file _`<source>`_ to file _`<target>`_
- __mv__ _`<source>`_ _`<target>`_  -  move file _`<source>`_ to file _`<target>`_

Be careful with these commands, as most will overwrite the _`<target>`_ without prompting or warning you. You will probably have many questions if you have never used Linux before. Please come by our lab sessions and office hours to get your questions answered. Also, many answer can be found by a quick web search.


Shutting down the virtual machine
---------------------------------
When you are done using the virtual machine you can shut it down my clicking on the mouse in the upper left corner and then selecting __logout__. You will be prompted with an option to __shutdown__. This will turn off your virtual computer.


What am I turning in?
---------------------
For the deliverable part of the this project you are going to write a short
program, as a warm up for the course. The program will prompt the user for their name with

~~~

Please enter your name: 
~~~

then prompt the use for a number with

~~~

Please enter a non-negative integer: 
~~~

and finally it will print

~~~

Hello <name>!!
~~~

__N__ times, where __`<name>`__ is the name the user entered and __N__ is the number they entered. So a sample interaction would be

~~~

Please enter your name: Michael Bannister
Please enter a non-negative number: 5
Hello Michael Bannister!!
Hello Michael Bannister!!
Hello Michael Bannister!!
Hello Michael Bannister!!
Hello Michael Bannister!!
~~~

You may use any features of C++ that you like for this project. Future project will restrict you to a subset of the C++ language.

The purpose of this project is to familiarize yourself with the process we will use in every project in this course. First, you need to download the template for the project.

- Change your working directory to Documents: __cd ~/Documents__
- Download the template: __wget "http://www.ics.uci.edu/~mbannist/teaching/ics45c/project0/project0.tar.gz"__
- Extract the template: __tar xvf project0.tar.gz__
- Rename the project directory: __mv project0 project0v1__

The reason we renamed the project is to prevent overwriting your work if you extract the template again in the future.

In the directory __project0v1__ you will find one file and four directories:

- __makefile__  -  a file containing the script we will use to compile this project
- __data/__  -  a directory for non-code data (not used in project0)
- __obj/__   -  a scratch directory for files generated in the build process
- __src/__   -  a directory in which you will place your source files
- __test/__  -  a directory for unit testing code (not used in project0) 

Currently there is only one file, __main.cpp__, in the __src/__ directory. Your task is to modify __main.cpp__ to implement the desired behavior. 


After, you have edited the main file to your satisfaction you can compile your code with the command __make__. If this process succeeded, then the program can be run with the command __make run__. Once you are ready to turn in the file you can created a deliverable archive with the command __make gather__. This command will create a file named __project0-submission.tar.gz__, and this is the file you will submit to the eee dropbox. The command __make gather__ will only succeed if you project compiles without error. If for some reason you would like to submit code that does not compile, use the command __make gather-force__, but be warned that you will loose points for code that does not compile. _Note: all of these commands must be run from the project's root directory._

To help you submit your program to eee we have include two browsers __Firefox__ and __Chrome__, either should work. On occasion, especially after resuming a laptop from a suspended state, your virtual machine may not be able to connect to the internet. If this happens type the following commands in the terminal

~~~

sudo ifdown eth0
sudo ifup eth0
~~~

This is basically turning the network adapter off and back on. You will be prompted for your password during this process.


