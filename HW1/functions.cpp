#include <iostream>
#include <cmath>
#include "functions.h"


int fact(int n, int res) {
    if (n >= 2) {
        res = n * fact(n-1);
    }
    return res;
}

long binomial(int n, int k) {
    if (k > n) {
        return 0;
    }
    else {
        long C = fact(n) / (fact(k) * fact(n - k));
        return C;
    }
}

float* create_setka(float x_0, float x_max, float step) {
    int length = (x_max - x_0)/step+1;
    float* massive = new float[length];

    for (int i = 0; i < length; i++) {
        massive[i] = x_0 + i * step;
    }

    return massive;
}

float* func(const float *X, int len) {

    float *Y = new float[len];

    for (int i = 0; i < len; i++) {
        float x = X[i];
        Y[i] = cos(x)/sqrt(5-pow(x,3));
    }
    return Y;
}