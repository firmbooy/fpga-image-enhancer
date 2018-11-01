clc;
clear;

laplacian_mask = [1 1 1; 1 -8 1; 1 1 1];
image = imread('moon.jpg');

laplacian_gradient = uint8(filter2(laplacian_mask, image, 'same'));

sharpened_image = imsubtract(image, laplacian_gradient);

imshowpair(image, sharpened_image, 'montage')