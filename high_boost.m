clc;
clear;

w_hp = [-1 -1 -1; -1 8 -1;-1 -1 -1];
% w_hp = [0 -1 0; -1 -4 -1; 0 -1 0];

c = 50;
w_ap = eye(3, 3);

w_hb = w_ap + c * w_hp;

image = imread('moon.jpg');

hbf_output = uint8(filter2(w_hp, image, 'same'));

hbf_sharpened_image = imsubtract(image, hbf_output);

%imshowpair(image, hbf_sharpened_image, 'montage')
imshow(hbf_sharpened_image)

