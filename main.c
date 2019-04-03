#include <stdio.h>

int main(){
    // The mean of x[] is 5.000000
    // The variance of x[] is 7.500000
    // x[] has 9 elements
    float x[9] = {1,2,3,4,5,6,7,8,9};
    float variance, mean;
    float sum1 = 0, sum2 = 0;
    int n = 9; // Counter variable
    
    for(n = 0; n < 9; n++) {
        sum1 = sum1 + x[n];
    }
    
    mean = sum1 / n;
    
    // Calculate the sample mean (NB: we are assuming N=9)
    for(n = 0; n < 9; n++) {
        sum2 = sum2 + (x[n] - mean) * (x[n] - mean);
    }
    
    variance = sum2 / (n-1);
    // Calculate the sample variance
    // Write your own for() loop
    printf("Mean: %f\nVariance: %f\n", mean, variance);
    return 0;
    
    
}
