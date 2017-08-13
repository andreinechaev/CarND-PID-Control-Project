## Reflection on the PID controller project

Initial parameters for pid controller were manually collected. Seems that D parameter affects the behaviour the most.
Oscillations reduced to noticeable minimum. Despite that, I believe, steering value should be filtered. Twiddle might be a good approach.
The car shows acceptable results with throttle equal to 0.7;

## P - proportional parameter

Higher value tends to increase oscillation. The car starts swinging on the road that leads to overshooting

## I - integral parameter
 
Integral parameter is responsible for reducing statical error. Although, it needs some time to reduce the error to minimum.

## D - differential parameter

It is a correcting parameter. It is mostly influential on the proportional parameter. Therefore, it suppose to make P influence smaller, that leads to smoother correction.


## Approach

I started with all parameters set to 0 and increased one by one achieved the desired result. 