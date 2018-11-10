clc;
clear;
image = imread('moon.jpg');
c = 2;

% For Unsharp masking : set c = 1
% For High-boost filtering : set c > 1

% averaging_mask = 1/9 * ones(3,3);
% 5x5 Gaussian averaging filter :
averaging_mask = 1/273 * [1,4,7,4,1;4,16,26,16,4;7,26,41,26,7;4,16,26,16,4;1,4,7,4,1];
averaged_image = uint8(filter2(averaging_mask,image, 'same'));

high_boost_mask = imsubtract(image, averaged_image);
final_image = imadd(image, c*high_boost_mask);
imshowpair(image, final_image, 'montage')