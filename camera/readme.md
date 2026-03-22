We only keep the pixels on every even column and row (reduces size by 75%), instead of just throwing pixels away though for the rows we keep the odd pixels and use a 2x1 averaging filter to smooth the image and reduce the loss of information. We start with 640x480 and get back 320x240.

The frames are taken from and depositted into the DDR through the VDMA protocol using AXI4 Full and the into and out of the downsampler through AXI4 Stream. The CPU simply just reads the frames from the RAM.

We use the OpenCV library to lock onto 4 red squares using HSV detection marking the corners of the projected grid and crop and warp the image to obtain a 500x500 grid using functions built into the library. This grid can be broken down into 100 50x50 squares, which are of equal size giving the effect of a top down view. Now when we place blue squares onto the grid we can just look at its pixel location and divide by 50 to obtain its grid location which is ready to be sent to the server to remove that wall from the grid.

By significantly reducing the pixel count we are reducing the amount of pixels the CPU has to process therefore decreasing its load, we do not need a large amount of precision for this task as we mostly rely on colour brightness for object detection therefore the downsampling does not reduce the processing of uselful information, but only enhances it.
