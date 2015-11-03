---
layout: default
title: "Project 4"
---
# DRAFT VERSION

# Project 4: Camera calibration and 3D reconstruction

## Project due: TBA in class on Thursday

## Teams: You may (and you should) work in teams of two for this project.

---

The goal for this project is to use the geometry and linear algebra that we have been learning in class to calibrate a camera using some known geometry in a 3D scene, and then to use the calibrated camera to extract the unknown 3D scene geometry using images from multiple viewing angles.

## The data
For this assignment we will be using the `horse` data set which contains several images, taken from multiple view points, of a single 3D scene containing a spotted horse with unknown geometry and calibration objects with known geometry. The exact 3D location of the calibration objects is included with the data set. Choose two disjoint subsets of the images with four to six images, such within each subset every part of the horse is captured in at least 2 images. You may at your discretion include more images, as this should only improve your results.

## Camera calibration
For each of your images use the calibration objects to recover the camera matrix. For details on the algorithm see the courses slides or see Hartley and Zisserman page 181, implementing geometric error minimization is considered extra credit. You may want to parallelize this step with your partner. In your write up show the calibration matrix for each of the images you use.

## Epipolar line tool
Use the camera matrices you found above to compute the fundamental matrices for pairs of images viewing overlapping regions of the horse. Create a simple ``tool'' which displays two such images where selecting a point in one images display the corresponding epipolar line in the other image. For this step see the course slides or Hartley and Zisserman 9.1,9.2.

## 3D reconstruction
Now, hand-pick corresponding points across the different images (within the same subset) using the epipolar line tool you created,  and recover the 3D location of these corresponding points by triangulation. For each of your subsets select approximately 200 correspondence well distributed over the horse.

## Display the 3D points cloud
Finaly, you will write a short clip to display your 3D data. Display points from your first subset using blue points and points from your second subset using redpoints. If you have done everything correctly and accurately, you should see only one horse even after merging the data from both subsets. You will be award extra credit for creating a mesh from the ``point cloud'' of 3D points.

## The write up
You write up needs to display (1) all the images in your two subsets with their camera matrix; (2) at least three example screen shots of your epipolar line tool in use; (3) at least three images from different angles of the 3D points.
