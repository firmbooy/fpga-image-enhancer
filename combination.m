clc;
clear;

% Read image into a matrix
image = imread('radiograph.jpg');

%Laplacian filtering of image :
laplacian_mask = [-1,-1,-1;-1,8,-1;-1,-1,-1];
laplacian_gradient = uint8(filter2(laplacian_mask, image, 'same'));
sharpened_image = imsubtract(image, laplacian_gradient); % sharpened image after laplacian filtering
  
% Sobel operation on image :
sobel_mask = [-1,-2,-1;0,0,0;1,2,1];
sobel_gradient = uint8(filter2(laplacian_mask, image, 'same'));
sobel_filtered_image = imsubtract(image, sobel_gradient);
averaging_mask = 1/25 * ones(5,5);
averaged_sobel_image = uint8(filter2(averaging_mask, sobel_filtered_image, 'same'));

% forming the product of averaged_sobel_image and sobel_filtered_image:
image_formed = immultiply(sharpened_image, averaged_sobel_image);
final_image = imsubtract(image, image_formed);
imshow(final_image) 
