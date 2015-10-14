---
layout: default
title: "Project 2"
---

# Project 2: Fun with frequencies!

## Project due: 10/15 @ 11:59pm

---

This project consists of five parts where you will explore working in frequency domain. There is a fair amount of code to be written for this project, so start early!

## Part 0 (5 points): Unsharp masking
For this part of the project, you will sharpen a gray scale images using the unsharp masking technique we covered in class, see Section 3.2.2 in Szeliski. Experiment with the values of gamma and sigma. You will want to use the methods `fspecial` and `imfilter`.

### Write up
Show at least one sharpened image next to the original image, and specify what parameters you used.


## Part 1 (20 points): Magnitude vs phase angle
In class we learned that, the Fourier transform of an image encodes the frequency information contained in an image using complex numbers. We also discussed how a complex number was composed of two pieces of information---the magnitude and the phase angle. For this part of the project you will investigate the relative importance of magnitude and phase in the Fourier transform.

### Details
Take two gray scale images `I1` and `I2` of the same size and apply the Fourier transform to produce `F1` and `F2`. The matrices `F1` and `F2` have complex entries, so we can create matrices of magnitudes `M1` and `M2` <ins>(use the `abs` function)</ins> and a matrices of phases `P1` and `P2` <ins>(use the `angle` function)</ins>. <del>We now have `I1 = M1 .* exp(i * P1)` and `I2 = M2 .* exp(i P2)`, as alternative ways of representing `I1` and `I2`.</del> <ins>We now have `F1 = M1 .* exp(i * P1)` and `F2 = M2 .* exp(i P2)`, as alternative ways of representing `F1` and `F2`.</ins> You will generate the images <ins>from</ins> `M1 .* exp(i * P2)` and `M2 .* exp(i * P1)` with the goal of comparing the importance of magnitude vs phase. Which is more important or are they both important? You can get the phase angle with the `angle` function. See Example 1 for an example of how to work with the FFT in MATLAB.

### Bells and whistles

__Color (up to 1 points):__ Repeat this portion of the project using color, i.e., perform the magnitude-phase swap for each of the three color channels.

### Write up
For each pair of images show both original images, the magnitude of both Fourier transforms, the phase angles of both Fourier transforms, and both swapped recombinations. So for each pair you will show a total of eight images. Do this for at least two pairs of images.


## Part 2 (20 points): Hybrid frequency images
The goal of this part of the assignment is to create hybrid images using the approach described in the paper [Hybrid Images](//cvcl.mit.edu/publications/OlivaTorralb_Hybrid_Siggraph06.pdf) by Oliva, Torralba, and Schyns, see also the paper [The Art of Hybrid Images: Two for the View of One](//cvcl.mit.edu/papers/Oliva-HybridImages-ArtPerception2013.pdf). Hybrid images are static images that change in interpretation as a function of the viewing distance. The basic idea is that high frequency tends to dominate perception when it is available, but, at a distance, only the low frequency (smooth) part of the signal can be seen. By blending the high frequency portion of one image with the low-frequency portion of another, you get a hybrid image that leads to different interpretations at different distances. 

### Details
First, you'll need to get a few pairs of gray scale images that you want to make into hybrid images. Then, you will need to write code to low-pass filter one image, high-pass filter the second image, and add (or average) the two images. For a low-pass filter, Oliva et al. suggest using a standard 2D Gaussian filter. For a high-pass filter, they suggest using the impulse filter minus the Gaussian filter (which can be computed by subtracting the Gaussian-filtered image from the original image). The sigma value of each filter should be chosen with some experimentation.

### Bells and whistles

__Color (up to 5 points):__ Try using color to enhance the effect. Does it work better to use color for the high-frequency component, the low-frequency component, or both? Does it help to covert to another color space and handle the channels differently?

__Alignment (up to 2 points):__ Combine two face after aligning the centers of their eyes. This should help enhance the effect. For this part of the project you may use the functions `imtransform` and `ginput`.

### Write up
For your favorite result show us: 1) the original and filtered images, 2) the hybrid image, 3) FFT magnitude images for all images from 1) and 2). Briefly explain how he method works, any clever ideas that you've incorporated, and how you set your parameters. 

Next, show us at least two more results, including one that doesn't work so well (failure example). Briefly explain how you got the good results (e.g., chosen cut-off frequencies (Gaussian sigma value), alignment tricks, other techniques), as well as any difficulties and the possible reasons for the bad results. If you are so fortunate that everything that you try works well, try to figure out what shouldn't work. Finally, describe any bells and whistles you implemented.


## Part 3 (20 points): Gaussian and Laplacian Pyramids
In this part of the project you will implement Gaussian and Laplacian stacks as described in class. You will use your stacks to analyze some images, including the images you produced in Part 1 of this project. If you wish, you may implement pyramids instead of stacks.

### Details
Implement a Gaussian and a Laplacian stack (or pyramid). The different between a stack and a pyramid is that in each level of the pyramid the image is downsampled, so that the result gets smaller and smaller. In a stack the images are never downsampled so the results are all the same dimension as the original image, and can all be saved in one 3D matrix (if the original image was a grayscale image). Note that there is one subtlety here: since we are not downsampling the image, we must use a larger and larger sigma for the Gaussian filtering at each level. A good rule of thumb is to double the sigma at each level of the pyramid (e.g. sigma = 2,4,8,16...), and to __always use the resulting Gaussian filter on the original image__. In this way we will get a stack that behaves similarly to a pyramid that was downsampled to half its size at each level. If you would rather work with pyramids, you may implement pyramids rather than stacks.

Apply your Gaussian and Laplacian stacks to interesting images that contain structure in multiple resolution such as paintings like the Salvador Dali painting of Lincoln and Gala we saw in class, or the Mona Lisa. Display your stacks computed from these images to discover the structure at each resolution.

Illustrate the process you took to create your hybrid images in part 1 by applying your Gaussian and Laplacian stacks and displaying them for your favorite result. This should look similar to Figure 7 in the Oliva et al. paper.

You may use the MATLAB function `impyramid` which blurs and down-samples an image in one step if you wish.

### Bells and whistles

__Color (up to 1 points):__ Extend your pyramid implementation so that it can properly handle color images, i.e., each stage of the pyramid will be a color image.

### Write up
Display the multiple resolutions of image structure you found using your Laplacian stacks on at least one cool image. Also, display your multiresolution analysis of your favorite hybrid image result from Part 2. In each of these cases show at least five levels of the stack.


## Part 4 (30 points): Multi-resolution Blending
The goal of this part of the assignment is to blend two images seamlessly using a multi resolution blending as described in the 1983 [paper](//persci.mit.edu/pub_pdfs/spline83.pdf) by Burt and Adelson. An image spline is a smooth seam joining two image together by gently distorting them. Multiresolution blending computes a gentle seam between the two images seperately at each band of image frequencies, resulting in a much smoother seam.

### Details
First, you'll need to get a few pairs of images that you want blend together with a vertical or horizontal seam. Then you will need to write some code in order to use your Gaussian and Laplacian stacks from Part 2 in order to blend the images together. Since we are using stacks instead of pyramids like in the paper, the algorithm described on page 226 will not work as-is. If you try it out, you will find that you end up with a very clear seam between the apple and the orange since in the pyramid case the downsampling/blurring/upsampling hoopla ends up blurring the abrupt seam proposed in this algorithm. Instead, you should always use a mask as is proposed in the algorithm on page 230, and remember to create a Gaussian pyramid for your mask image as well as for the two input images. The Gaussian blurring of the mask in the pyramid will smooth out the transition between the two images. For the vertical or horizontal seam, your mask will simply be a step function of the same size as the original images.

Now that you have successfully blended a vertical (or horizontal seam), pick a couple of images to blend together with an irregular mask, as is demonstrated in figure 8 in the paper. To create the irregular mask you can use the method I showed in class using GIMP or PhotoShop. If you want to get really fancy, you can try the method in the video [here](https://www.youtube.com/watch?v=AnbxtMCHKV0).

Blend together some crazy ideas of your own!

Illustrate the process by applying your Laplacian stack and displaying it for your favorite result and the masked input images that created it. This should look similar to Figure 10 in the paper.

### Bells and whistles

__Color (up to 5 points):__ Try using color to enhance the effect. Does it work better to use color for the high-frequency component, the low-frequency component, or both? Does it help to covert to another color space and handle the channels differently?

### Write up
Show us your favorite result. Include: 1) the original images; 2) the blended images; and 3) the stack analysis. Briefly (a few sentences) explain how it works, using the included images as illustrations. Explain any clever ideas that you've incorporated and any parameters. Next, show us at least two more results, including one with a non-trivial mask and one that doesn't work so well (failure example). Briefly explain how you got the good results, as well as any difficulties and the possible reasons for the bad results. If you are so fortunate that everything that you try works well, try to figure out what shouldn't work. Finally, describe any bells and whistles you implemented.


## Deliverables
In addition to all of the code you wrote during this project, you will be submitting a write up (as a PDF file or web page) which uses both words and images to illustrate what you have done. You should describe in some detail which parameter you used for each of your results. Make sure that each part of your project has its own `.m` file that executes that part of the assignment in full and inlude a `README` file with a brief description of all files. See the sections above for individual part requirements. End your write up with a conclusion which briefly discusses the coolest/interesting/painful thing you learned from this assignment.

## Grading
The grading for this project will be broken down as labeled, above. To receive full credit for this assignment (100 points) you will need to do at least 5 points of bells and whistles. Your total score will be capped at 105 points.

## Teams
This is considered a pair project. You should form a team with another student in the class, and pick a team name. Once you have formed the team and named yourself, each member the of the team must email me with the team name and the list of team member. If you have a strong desire (or legitimate reason) to work in a team of one or three, please discuss this with be via email or office hours. For teams of one or three the project specifications and grading rubric may be adjusted to keep things fair to all students.

## Acknowledgments
Parts of this assignment were originally designed by [Alexei (Alyosha) Efros](//www.eecs.berkeley.edu/~efros/) and [Derek Hoiem](//web.engr.illinois.edu/~dhoiem/).
