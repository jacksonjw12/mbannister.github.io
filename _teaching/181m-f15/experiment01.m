%% Clean up
% These functions calls clean up the MATLAB environment and close all windows
% open "extra" windows.
clear all
close all


%% Variables
% The next few lines define variables for the locations and types of image files
% we will be reading and writing. You  will likely want to change the input and
% output directories to match you personal environment.
input_dir = '/common/cs/cs181m/data/eppstein';
output_dir = '~/Downloads/';
file_ext = 'jpg';
% Get a list of the jpg files in the input directory
file_names = dir([input_dir '*.' file_ext]); 
% Get the name of the 6th file in list. You should feel change this value.
file_name = file_names(6).name; 


%% Read image file
% Here we read the input jpg file into a 3D array of 8-bit integers. Before we
% start to manipulate this image it is very important that we first convert the
% integer values into doubles.
I = imread([input_dir file_name]);
I = im2double(I);


%% Display image
% We create a new figure window and in this window display the original image.
figure
imshow(I)


%% Separate into color channels
% Here we separate the 3D array into three matrices, one for each color channel.
R = I(:,:,1);
G = I(:,:,2);
B = I(:,:,3);


%% Display color channels
% Now we display each of the color channels separately in a new window.
figure
subplot(1,3,1)
imshow(R)
title('Red channel')
subplot(1,3,2)
imshow(G)
title('Green channel')
subplot(1,3,3)
imshow(B)
title('Blue channel')


%% Write the color channels to files
% Write each of the color channels to files. We are using some fancy string
% manipulations to set the file names.
imwrite(R, [output_dir file_name(1:end - length(file_ext) - 1) '_red.' file_ext])
imwrite(G, [output_dir file_name(1:end - length(file_ext) - 1) '_green.' file_ext])
imwrite(B, [output_dir file_name(1:end - length(file_ext) - 1) '_blue.' file_ext])


%% Compute gray scale images
% TODO: Store mean value result in I_M
% TODO: Store weighted mean value in I_WM
% TODO: Store desaturation in I_D


%% Display gray scale conversions
% TODO: Display all three gray scale conversions in single figure window
%       using subplots, as we did with the color channels above.


%% Write gray scale conversions
% TODO: Write the three gray scale conversions to files, as we did with the
%       color channels.


