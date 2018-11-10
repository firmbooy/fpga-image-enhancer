clc;
clear;

% Read image into a matrix
image = imread('moon.jpg');

%Laplacian filtering of image :
laplacian_mask = [1 1 1; 1 -8 1; 1 1 1];
laplacian_gradient = uint8(filter2(laplacian_mask, image, 'same'));
sharpened_image = imsubtract(image, laplacian_gradient); % sharpened image after laplacian filtering
  
% Sobel operation on image :
sobel_mask = [-1,-2,-1;0,0,0;1,2,1];
sobel_gradient = uint8(filter2(laplacian_mask, image, 'same'));
sobel_filtered_image = imsubtract(image, sobel_gradient);

% Averaging the sobel filtered image to remove 'salt & pepper' noise
averaging_mask = 1/9 * ones(3,3);
averaged_sobel_image = uint8(filter2(averaging_mask, sobel_filtered_image, 'same'));

% If any probelms with sobel, use the inbuilt function given below :
%sobel_gradient = edge(image, 'sobel');

% forming the product of averaged_sobel_image and sobel_filtered_image:
image_formed = immultiply(-1*sharpened_image, averaged_sobel_image);
final_image = imsubtract(image, image_formed);
imshowpair(image, final_image, 'montage') 
