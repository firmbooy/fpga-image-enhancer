...
img = imread('moon3.jpg');
frm2pix = visionhdl.FrameToPixels;
pix2frm = visionhdl.PixelsToFrame;

[pixInVec,ctrlInVec] = step(frm2pix,img);
% [pixInVec,ctrlInVec] = step(visionhdl.FrameToPixels,img);
numPixPerFrm = 403200;
for p = 1:numPixPerFrm
    [pixOutVec(p),ctrlOutVec(p)] = laplacian_new(pixInVec(p),ctrlInVec(p));
end
imgOut = step(pix2frm,pixOutVec,ctrlOutVec);

% Compare the result
imgDiff = imabsdiff(imgSharp,imgOut);
fprintf('The maximum difference between corresponding pixels is %d.\n',max(imgDiff(:)));
fprintf('A total of %d pixels are different.\n',nnz(imgDiff));
...