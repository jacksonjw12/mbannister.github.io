---
layout: default
title: "Experiment 1"
---

# Experiment 1: Color to black and white

## Due: 9/9/15 @ 11:59pm

In this experiment you will be converting some color images to gray scale
images. The purpose of this experiment is to gain some familiarity with working
with images in MATLAB. Additionally, you will learn how we will be distributing
data sets, and turning in assignments in this course.

[Starter code](experiment_01.m)

## The task
You will implement the following three gray scale conversions method described below. There are TODOs in the started code to mark where you should add code. For this experiment you can simply add the code straight into to the file, it is not necesary to create separate functions for each method.

### Mean value

For each pixel in the image

~~~~
GrayScalePixel = (ColorPixel.Red + ColorPixel.Green + ColorPixel.Blue) / 3
~~~~

i.e., each gray scale pixes is the *mean* of its corresponding color pixels color values.

### Weighted mean value
For each pixel in the image

~~~~
GrayScalePixel = 0.3 * ColorPixel.Red + 0.59 * ColorPixel.Green + 0.11 * ColorPixel.Blue
~~~~

i.e., each gray scale pixel is a *weighted average* of its corresponding colors pixels color values. The weights here are chosen based on peoples perception of color. _This is a method used by many photo editing programs._

### Desaturate
For each pixel in the image

~~~~
GrayScalePixel = 0.5*max(ColorPixel.Red, ColorPixel.Green, ColorPixel.Blue) + 0.5*min(ColorPixel.Red, ColorPixel.Green, ColorPixel.Blue)
~~~~

This formula is a little strange, and it will be explained why this corresponds to desaturating the image.

## New MATLAB feature
For this experiment you will be using the following functions:
`dir`, `imread1`, `im2double`, `imshow`, `imwrite`, `figure`, `subplot`,
`title`, `max`, `min`. Recall that you can find a detailed explanation of what these functions
do by typing `help <function name>` in MATLAB. You can also look the functions
up in the MATLAB documentation. Additionally, you will be using basic matrix and string manipulations in MATLAB. If you are unsure how to perform a needed 
manipulation, please ask on the Piazza forum or in office hours.

## Data set
We will use the computer science department's Linux server `project2.cs.pomona.edu` to distribute data sets. You should  have been given an account to this system. If you do not have an account, please come talk to me and we will get you set up. You can find the data sets in the directory: `/common/cs/cs181m/data/`. All of the lab computer will also have the this directory available with the data sets. Please feel free to copy the data sets to your home computer, but do not copy them to you home directory on the lab computers, as some of them are quite large and we do not need to store duplicates. I am under the impression that most of you are familiar with working in this environment, but do not hesitate to ask for help if you have any trouble. For this project we will be using the `eppstein` data set which contains six picture of colorful street art.

## Submitting your solution
You will be submitting your solutions via the following web form: [submission page](//www.dci.pomona.edu/tools-bin/cs181mupload.php). When you are happy with your solution please `tar` or `zip` your MATLAB file(s) together and submit the archive with the name `Experiment01.tar` or `Experiment01.zip`, as appropriate. Please do not include the images from the data set in your archive. Please do include your name in a comment at the top of all submitted matlab files.

## Academic honest policy
You may freely collaborate on this assignment, but all code you turn in (with
the excepting of starter code) must have been written by you, i.e., you may not
copy-and-paste another student's solution.
