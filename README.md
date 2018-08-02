# Profiler
This class assists in profiling an application by simple time measurement between specified starting and ending points in code. It keeps track of min, max, and average time spent between the points, as well as what percentage of the total profiling time was spent in the code block. Users should consider all the paths the code could take when setting starting and ending points and understand how multiple running blocks could affect results.

Designed and tested on NetBurner 2.8.6 for the NANO54415 but should be easily portable to all NetBurner modules.
