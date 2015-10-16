---
layout: default
title: "Project 3"
---

# Project 3: Homographies

## Project due: 10/29 11:59 @ 11:59pm

## Teams: You may work in teams of two for this project.

---

In this assignment, you will extend the field of view of a camera by forming a mosaic from multiple photographs. When images are taken with same optical center, they can be aligned with a homography transformation. To estimate the homography, you'll need 4 pairs of corresponding points in the overlap region. You'll mark these points manually. We discussed in class some methods for finding them automatically. I have included some sample images on `project2` under the directories `atrium` and `window`.

A large portion of this project is already implemented in MATLAB functions. However, we want you to write your own code.  Therefore, you are not allowed to use the following functions in your solution: `cp2tform`, `imtransform`, `tformarray`, `tformfwd`, `tforminv`,  `fitgeotrans`, `imwarp` and `maketform`. On the other hand, MATLAB has a number of very helpful functions (e.g. for solving linear systems, inverting matrices, linear interpolation, etc) that you are welcome to use. If there is a question whether a particular function is allowed, ask us. 

## Homography (30 points)
The first image in each example provided is the central image. It's simplest to construct a mosaic from a central image and a set of peripheral images, since we then need to find just one homography for each peripheral image. Use the `cpselect` and `cpcorr` functions to manually select and refine at least 4 pairs of corresponding points in each overlap region between the central and peripheral images. These points should be located on high contrast corners.

Next, compute the homography using linear least squares (see lecture slides) for each set of correspondences to provide the mapping from points in the central images and points in the peripheral images. You'll probably want to write two functions such as:

    function [H] = computeHomography(x1,y1,x2,y2)
    function [x2,y2] = applyHomography(H,x1,y1)

Note that the inverse mapping is given simply by `inv(H)`.

## Warping (20 points)

Use the central image's coordinate system for the final mosaic. You need to figure out the min and max pixel coordinates when the peripheral images are mapped into the central image's coordinate system. Simply apply your homographies to the peripheral images' corner points to find the extent of the final mosaic.

Now generate a `meshgrid` of points to cover the extent of the final mosaic, and apply the inverse of each homography in turn to map them back to the source images, using `interp2` to extract pixel values from the source images. For each input image, this produces an image the size of the final mosaic; pixels that are outside the source image are set to `NaN`. 

## Simple assembly (10 points)
Finally, assemble the mosaic from the remapped source images. Use `isnan(I)` to get a mask for each one that tells you which pixels are valid and which are invalid.

The simplest approach is to paste down the pixels from each image in turn. However, as we discussed in class this can lead to bad artifacts. Try this approach first.

## Blended assembly (20 points)
Now you should create a smooth blend between the images in the regions where they overlap. To receive full credit, you must implement some type of weighted blending, as described in class.

To create a blend, first compute a alpha mask for each image which is the same size as the target output with 1s where you have values from that image (i.e. using the `isnan(I)` trick). In order to feather the edges of the mask, you can blur them with a Gaussian filter. I suggest using `imfilter` and `fspecial`. Since more than one image can overlap at a given location, you will need to normalize these alpha maps by the sum of the alphas across all images at that location.

To create the Gaussian filter, `fspecial` takes two arguments, the size of the returned filter, and sigma, the width of the Gaussian. You will need to experiment with the parameter sigma in order to get good feathering of the edges. As you make sigma larger, you will also need to increase the size of the filter itself to match so that the Gaussian doesn't get cut off.

_If you simply blur the binary alpha mask for an image, you will will end up with non-zero values outside of the support of a warped image which will cause problems when you composite them (e.g. black bands around the edge of the image). To get a good result, you will need to find a way to fix this so that the alpha is non-zero only where you actually have color values for a given warped image._

## Two-band blending (20 points)
Finally, implement 2-band blending. As we described in class, this involves splitting the image into two frequency bands, low frequencies (given by blurring the image with a large Gaussian) and the remaining higher frequencies (subtract the blurred from the original). The low frequency images are blended using a feathered alpha mask. The high frequency images can be blended using a thresholded (binary) alpha mask. Finally the results are added back together. You are encouraged to us code from Project 2 for this part of the project.

## Writeup

Submit a PDF file (or web page) which contains example images output by your code.

Show the resulting mosaic for one of the provided examples. Also show the individual remapped source images after they are warped but before they are blended together into the final mosaic. If you have limited memory, you should downsample the images when you load them in (use `imresize`).

Show two mosaics of your own creation, each with at least 3 source images. You should use your own camera to take images. Remember that you want to keep the camera center in the same location and simply rotate the camera. For your writeup, show also the remapped source images before they are blended into each final mosaic.

Make sure you show all three of the blending techniques for your examples. 

### Bells and whistles

The implementation of bells and whistles is not required for this project, but you may if you wish implement the following for extra credit. The total score for the project will be capped at 120 points. You may also propose additional bells and whistles.

#### Spherical/Cylindrical/polar mapping (up to 10 points)

Instead of projecting your mosaic onto a plane, try using another surface, such as a sphere or a cylinder.  This is often a better way to represent really wide mosaics.  Be clever: do the inverse sampling from the original pre-warped images to make your mosaic the best possible resolution.  Pick the focal length (radius) that looks good.

#### Feature Matching (up to 20 points)

Implement the feature matching, as described in class. For full points you will need to implement all of the optimizations described in lecture. However, partial points will be awarded for partial implementations. Ask me if you have any questions on which MATLAB functions you are permitted to use.

### MATLAB tips

Don't forget the `hold on` command if you want to plot one thing on top of another.

Running `cpselect` is a pain. Don't do it more than once for any pair of images! You can use the `save` and `load` functions to save and restore variables from your MATLAB workspace.

Do no use the full size images. Resize them down so that your debugging goes faster. For your final results, use full size images if you have enough RAM.

You can treat the central image as just another source image by using a 3x3 identity matrix as the homography. 

### Camera tips
Shoot two or more photographs so that the transforms between them are projective (a.k.a. perspective). One way to do this is to shoot from the same point of view but with different view directions, and with overlapping fields of view. Another way to do this is to shoot pictures of a planar surface (e.g. a wall) or a very far away scene (i.e. plane at infinity) from different points of view.

I recommend that you:
 
- Avoid fisheye lenses or lenses with significant barrel distortion (do straight lines come out straight?). Any focal length is ok in principle, but wide angle lenses often make more interesting mosaics.
-Shoot as close together in time as possible, so your subjects don't move on you, and lighting doesn't change too much (unless you want this effect for artistic reasons). 
- Use identical aperture & exposure settings, if possible. On most "idiot cameras" you don't have control of this, unfortunately. It's nice to use identical exposures so that the images will have identical brightness in the overlap region.
- Overlap the fields of view significantly. 40% to 70% overlap is recommended. Too little overlap makes registration harder.
- If you're shooting a non-planar scene, then shoot pictures from the same position (turn camera, but don't translate it). A tripod can help in this, particularly if objects are close.

