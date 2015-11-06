---
layout: default
title: "Project 4"
---
# Project 4: Camera calibration and 3D reconstruction

## Project due: 11/19 @ 11:59pm

## Teams: You may (and you should) work in teams of two for this project.

---

The goal for this project is to use the projective geometry and linear algebra that we have been learning in class to calibrate a camera using some known geometry in a 3D scene, and then to use the calibrated camera to extract the unknown 3D scene geometry using images from multiple viewing angles.

## The data
For this assignment we will be using the `horse` data set which contains several images, taken from multiple view points, of a single 3D scene containing a spotted horse with unknown geometry and calibration objects (the checkerboard and blocks) with known geometry. The exact 3D location of the calibration objects is included with the data set. You will choose two disjoint subsets of the images with four to six images, such that within each subset every part of the horse is captured in at least two of the images. You may at your discretion include more images in each subset, as this should only improve your results.

## Camera calibration (35 points)
For each of your images use the calibration objects to recover the camera matrix. For details on the algorithm see the courses slides or Hartley and Zisserman page 181 for the gold standard algorithm (you do not need to implement geometric error correction). You may want to parallelize this step with your partner, you can each take ownership of a subset and calibrate the cameras in that subset. In your write up show the camera matrix for each of the images you use.

### Extra credit
For up to 5 points extra credit you can implement geometric error minimization, using the [Levenberg–Marquardt algorithm](https://en.wikipedia.org/wiki/Levenberg-Marquardt_algorithm).

## Epipolar line tool (20 points)
Use the camera matrices you found above to compute the fundamental matrices for pairs of images viewing overlapping regions of the horse. Create a simple "tool" which displays the images in a subset such that selecting a point in one images display the corresponding epipolar line in the other images. For the steps to compute epipolar lines see the course slides or Hartley and Zisserman 9.1--9.2.

## 3D reconstruction (35 points)
Now, hand-pick corresponding points across the different images (within the same subset) using the epipolar line tool you created,  and recover the 3D location of these corresponding points by triangulation. For each of your subsets select approximately 200 correspondence well distributed over the horse. Make sure you save your points often.
### For up to 10 points extra credit you can implement automatic point correspondence selection.

## Display the 3D points cloud (10 points)
Display points from your first subset using blue points and points from your second subset using red points. If you have done everything correctly and accurately, you should see only one horse even after merging the data from both subsets.

### Extra credit
For up to 3 points extra credit you can create a mesh from the "point cloud" of 3D points and display a 3D model of the horse.

## The write up
Your write up needs to display (1) all the images in your two subsets with their camera matrix; (2) at least three example screen shots of your epipolar line tool in use; (3) at least three images from different angles of the 3D points from the first subset, the second subset and the combined set (a total of nine images).

## Acknowledgments
This project is based on a project designed by [Aditi Majumder](//www.ics.uci.edu/~majumder/).
