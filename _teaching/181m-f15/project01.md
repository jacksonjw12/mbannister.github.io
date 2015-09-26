---
layout: default
title: "Project 1"
---

# Project 1: Images of the Russian empire

## Team email due: 9/10 @ 11:59pm

## Project due: <s>&nbsp;9/24&nbsp;</s> 9/27 @ 11:59pm

---

## Background
[Sergei Mikhailovich Prokudin-Gorsky](http://en.wikipedia.org/wiki/Prokudin-Gorsky) (1863-1944) was a man well ahead of his time. Convinced, as early as 1907, that color photography was the wave of the future, he won the Tzar's special permission to travel across the vast Russian Empire and take color photographs of everything he saw including the only color portrait of [Leo Tolstoy](http://en.wikipedia.org/wiki/Leo_Tolstoy). And he really photographed everything: people, buildings, landscapes, railroads, bridges, etc. He literally took thousands of color pictures! His idea was simple: record three exposures of every scene onto a glass plate using a red, a green, and a blue filter. Never mind that there was no way to print color photographs until much later---he envisioned special projectors to be installed in "multimedia" classrooms all across Russia where the children would be able to learn about their vast country. Alas, his plans never materialized: he left Russia in 1918, right after the revolution, never to return again. Luckily, his RGB glass plate negatives, capturing the last years of the Russian Empire, survived and were purchased in 1948 by the Library of Congress. The LoC has recently digitized the negatives and made them available [on-line](http://www.loc.gov/exhibits/empire/). A cool explanation on how the Library of Congress created the color images from some of these negatives is on their site [here](http://www.loc.gov/exhibits/empire/making.html).

## Your task
The goal of this assignment is to take the digitized Prokudin-Gorsky glass plate images and, using image processing techniques, automatically produce a color image with as few visual artifacts as possible. In order to do this, you will need to extract the three color channel images, place them on top of each other, and align them so that they form a single RGB color image.

For this project, we will assume that a simple translation model is sufficient for proper alignment, i.e., we assume that the images may be aligned via a shifting in the x- and y-directions. However, the full-size glass plate images are very large, so your alignment procedure will need to be relatively efficient. 

Twenty-four of the digitized glass plate images (hi-res, med-res and low-res versions) will be placed on the `project2` sever under `/common/cs/cs181m/data/prokudin-gorsky`. Image were selected for this set because I found them interesting, either artistically or algorithmically. __Important: The filter order of glass plates is BGR (from top to bottom), not RGB!__

Your program will take a glass plate image as input and produce a single color image as output. The program should divide the image into three equal parts and align the second and the third parts (G and R) to the first (B). For each image, you will need to print the x and y components of the displacement vectors that were used to align the G and R parts to the B part.

The easiest way to align the parts is to exhaustively search over a window of possible displacements (say [-20,20] pixels), score each one using some image matching metric, and take the displacement with the best score. There is a number of possible metrics that one could use to score how well the images match. The simplest one is just the Sum of Squared Differences (SSD) distance which is simply `sum(sum((image1-image2).^2))` where the sum is taken over the pixel values. The images to be matched do not actually have the same brightness values (they are different color channels), so you might have to use a more clever metric, or different features than the raw pixels to get optimal results.

Exhaustive search will become prohibitively expensive if the pixel displacement is too large (which will be the case for high-resolution glass plate scans). In this case, you will need to implement a faster search procedure such as an image pyramid. An image pyramid represents the image at multiple scales (usually scaled by a factor of 2) and the processing is done sequentially starting from the coarsest scale (smallest image) and going down the pyramid, updating your estimate as you go. It is very easy to implement by adding recursive calls to your original single-scale implementation.
You may not use MATLAB's built in `impyramid` function, but you may use the built in `imresize` to resize images.

Your job will be to implement an algorithm that, given a 3-channel image, produces a color image as output. First, implement a simple single-scale version, using `for` loops, searching over a specified window of displacements. This implementation should produce reasonable results when run on the low resolution images with the `tiny` prefix. Second, implement a coarse-to-fine image pyramid speedup to handle the full resolution images. You may wish to use the images with the `small` prefix when testing your image pyramid. Finally, you should attempt to implement some of the _bells and whistles_ described in the next section.

Some starter code which combines the three channels without alignment is available [here](project01.m); do not feel compelled to use any of it. 


## Bells and whistles

Although the color images resulting from this automatic procedure will often look strikingly real, they are still a far cry from the manually restored versions available on the LoC website and from other professional photographers. Of course, each such photograph takes days of painstaking Photoshop work, adjusting the color levels, removing the blemishes, adding contrast, etc. Can you make some of these adjustments automatically, without the human in the loop? Feel free to come up with your own approaches or talk to me about your ideas. There is no right answer here---just try out things and see what works. For all bells and whistles, be sure to demonstrate in your write up cases where your added feature has improved the image quality of the result.

Here are some ideas (with maximum point value), but I will give credit for other clever ideas (must be pre-approved):

### Automatic border cropping (4 points)
Remove the ugly white, black or other color borders. Don't just crop a predefined margin off of each side---actually try to detect the borders or the edge between the border and the image. 

### Automatic contrasting (3 points)
Improve the overall contrast of the image. It is usually safe to rescale image intensities such that the darkest pixel is zero (on its darkest color channel) and the brightest pixel is 1 (on its brightest color channel). More drastic or non-linear mappings may further improve perceived image quality.

### Automatic white balance (5 points)
This involves two problems: (1) estimating the illuminant and (2) manipulating the colors to counteract the illuminant and simulate a neutral illuminant. Step (1) is difficult in general, while step (2) is simple (see [Wikipedia:Color Balance](https://en.wikipedia.org/wiki/Color_balance) and section 2.3.2 in the Szeliski book).

### Better color mapping (3 points)
There is no reason to assume (as we have) that the red, green, and blue lenses used by Produkin-Gorsky correspond directly to the R, G, and B channels in RGB color space. Try to find a mapping that produces more realistic colors (and perhaps makes the automatic white balancing less necessary).

### Better alignment (5 points)
Try to improve the alignment of the images by using better metrics or preprocessing the images to be aligned. For instance you may want to try the normalized cross-correlation as your metric, or match the gradient of the images instead of the original images.

### Better transformation model (5 point)
Instead of searching for the best translation, additionally search over small scale changes and rotations. Adding two more dimensions to your search will slow things down, but the same course to fine progression should help alleviate this.

### The human touch (2 points)
Allow a user pick corresponding points in each image to help with initial alignment.

### Implement parallelism (3 points)
Since the scoring of each alignment can be done independently of each other, we can can a speed improvement by performing the scorings in parallel. Implement this improvement, using parallelism library provided by MATLAB.


## Deliverables
For this project, you must turn in both your code and a short report. The report should contain a brief overview of the project, and a description of your approach. You should discuss some of the images that gave you problems, and how you tried to solve those problems. In your report include your results (with x- and y-offsets) on at least twelve of 24 full resolution images I have included in the data set.  _Please save your results as jpg file not tiff files to reduce the size of your report._ You may additionally, download a few examples of your own choosing from the Prokudin-Gorsky collection. If you algorithm failed to align an image, provide a brief explanation as to why you think this is the case. Describe the bells and whistles you implemented, with before and after images.


Please submit all the code you used to create the results in your write up, along with a `main.m` script that can be used to run your code and a README describing the contents of each code file. Do not include any images with your submission. Do write you code in such a way that I can easily point it to the data set, e.g., as I did in the Experiment 01 starter code. The code and write up should be submitted to the [CS181m Submission Page](//www.dci.pomona.edu/tools-bin/cs181mupload.php), as a tar or zip archive. The directory and file structure of your archive should be (with NAME replaced by your group's name):

~~~~
NAME_proj_01/
    report.pdf
    code/
        README
        main.m
        ... additional MATLAB files ...
~~~~

## Grading rubric
This assignment will be graded out of __100 points__, as follows:

- __50 points__ for a single-scale implementation working successfully on the tiny images.
- __40 points__ for a working coarse-to-fine pyramid implementation that works efficiently on the full resolution images.
- __10 points__ for bells & whistles explicitly mentioned above.
- __5 points__ for bells & whistles you come up with on your own (and OK with me).

The total score with extra credit is capped at 105 points.

## Teams
This is considered a pair project. You should form a team with another student in the class, and pick a team name. Once you have formed the team and named yourself, each member the of the team must email me with the team name and the list of team member. If you have a strong desire (or legitimate reason) to work in a team of one or three, please discuss this with be vis email or office hours. For teams of one or three the project specifications and grading rubric may be adjusted to keep things fair to all students.

## Parting words of advise
- Make sure you understand [MATLAB's matrix indexing](http://www.mathworks.com/help/matlab/math/matrix-indexing.html).
- Make sure you understand [MATLAB's functions](http://www.mathworks.com/help/matlab/functions.html) and use them to organize your code.
- Look up any functions in the starter code you don't know/understand.
- Remember to convert your input images to doubles, using `im2double`.
- "Translating" an image is easy to do in MATLAB by using `circshift`.
- The borders of the images will hurt the accuracy your scoring, try computing your metric on a set of internal pixels.
- Output all of your images to jpg, it'll save you a lot of disk space.
- __START EARLY!!!__ You should have complete a basic coarse-to-fine pyramid by 9/15.

## Acknowledgments
This assignment was originally designed by [Alexei (Alyosha) Efros](//www.eecs.berkeley.edu/~efros/).
