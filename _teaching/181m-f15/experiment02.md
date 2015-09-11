---
layout: default
title: "Experiment 2"
---

# Experiment 2: Demosaicing with bilinear interpolation

## Due: 9/16/15 @ 11:59pm

In this experiment you will be [demosaicing](//en.wikipedia.org/wiki/Demosaicing) the raw sensor data from my camera ([Canon PowerShot S95](//en.wikipedia.org/wiki/Canon_PowerShot_S95)), using the bilinear interpolation method. The purpose of this experiment is to gain more familiarity with image processing in MATLAB, especially advanced array manipulation. I have provided starter code which uses the inferior nearest neighbor interpolation algorithm.

[Starter code](experiment02.m)

## The task
The __neighborhood__ of a interior pixel in an image is comprised of the pixel itself and its eight closest neighbors. To demosaicing using bilinear interpolation, in each color channel, we replace each unknown value with the mean value of the known values in its neighborhood. Your task is to implement the demosaicing with bilinear interpolation. You do not need to implement this algorithm in a separate function, but I would encourage you to. Also, For an added challenge try to perform the interpolation with a single filter application per channel.

## Data set
We will use the computer science department's Linux server `project2.cs.pomona.edu` to distribute data sets. You should  have been given an account to this system. If you do not have an account, please come talk to me and we will get you set up. You can find the data sets in the directory: `/common/cs/cs181m/data/`. All of the lab computer will also have the this directory available with the data sets. Please feel free to copy the data sets to your home computer, but do not copy them to your home directory on the lab computers, as some of them are quite large and we do not need to store duplicates. For this project we will be using the `office` data set which contains four picture of items in my office.

## Submitting your solution
You will be submitting your solutions via the following web form: [submission page](//www.dci.pomona.edu/tools-bin/cs181mupload.php). When you are happy with your solution please `tar` or `zip` your MATLAB file(s) together and submit the archive with the name `Experiment01.tar` or `Experiment01.zip`, as appropriate. Please do not include the images from the data set in your archive. Please do include your name in a comment at the top of all submitted matlab files.

## Academic honest policy
You may freely collaborate on this assignment, but all code you turn in (with
the excepting of starter code) must have been written by you, i.e., you may not
copy-and-paste another student's solution.
