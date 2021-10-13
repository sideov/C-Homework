#include <iostream>
#include "functions.h"

using namespace std;


int main() {

    /*
    int fact_of, n, k;
    std::cout << "факториал от какого числа считать?" << std::endl;
    std::cin >> fact_of;
    std::cout << fact_of << "! = " << fact(fact_of) << std::endl;

    std::cout << "n, k = ";
    std::cin >> n >> k;
    long bin = binomial(n,k);
    std::cout << "С из " << n << " по "<< k << " = " << bin << std::endl;
    */


    float x_0, x_max, step;
    std::cout << "x_0, x_max, step = ";
    std::cin >> x_0 >> x_max >> step;
    int length = (x_max - x_0)/step+1;
    float* X = create_setka(x_0, x_max, step);
    float* Y = func(X, length);

    for (int i = 0; i < length; i++) {
        std::cout << X[i] << "   " << Y[i] << std::endl;
    }
}




    /*
    int a[5]; //array of 5 ints

    for(int i = 0; i < 5; i++) {
        std::cin >> a[i];
    }


    for(int* i = a; i<a+5;i++) {
        std::cin >> *i;
    }

    for(int i = 4; i >= 0; i--) {
        std::cout << a[i] << " ";
    }

    for(int* i =a+4; i>=a; i--) {
        std::cout << *i << " ";
        std::cout << i << " ";

    }

    int n = 5;
    int* p = &n;

    std::cout << "n: " << n << std::endl;
    std::cout << "&n: " << &n << std::endl;
    std::cout << "p: " << p << std::endl;


    int nn;
    std::cout << "nn = ";
    std::cin >> nn;
    int* b = new int[nn];

    std::cout << "n: " << n << std::endl;
    std::cout << "&n: " << &n << std::endl;
    std::cout << "p: " << p << std::endl;
    */



