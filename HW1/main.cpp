#include <fstream>
#include <iostream>
#include "functions.h"
#include <cmath>

using namespace std;


int main() {
    string file_name = "in.txt";
    int variant = 1;
    //cout << "Вариант: ";
    //cin >> variant;

    double rightcos, leftcos;
    rightcos = leftcos = 1;

    double distancee, rightdistance, leftdistance;
    rightdistance = leftdistance = 0;
    int x0, y0;
    int x, y, Rightmost_x, Rightmost_y, Leftmost_x, Leftmost_y;

    std::ifstream infile(file_name);
    infile >> x0 >> y0;

    if (variant == 1) {
        while (infile >> x >> y) {

            double coss = (x0*x+y0*y)/(sqrt(x*x+y*y)*sqrt(x0*x0+y0*y0));
            coss = std::round(coss * 10000000000.0) / 10000000000.0;


            if (coss <= leftcos && (y0*x < x0*y)) {
                Leftmost_x = x;
                Leftmost_y = y;
                leftcos = coss;
            }

            if (coss <= rightcos && (y0*x >= x0*y)) {
                Rightmost_x = x;
                Rightmost_y = y;
                rightcos = coss;

            }
        }

    /*
    else {
        for (i = 1; i < l; i++) {
            distancee = abs(distance(MVector, Vectors[i]));
            if (isright(MVector, Vectors[i])) {
                if (distancee >= rightdistance) {
                    Rightmost = Vectors[i];
                    rightdistance = distancee;
                }
            } else {
                if (distancee >= leftdistance) {
                    Leftmost = Vectors[i];
                    leftdistance = distancee;
                }
            }
        }
        */
    }

    cout << "Leftmost: " << Leftmost_x << " " << Leftmost_y << endl;
    cout << "Rightmost: " << Rightmost_x << " " << Rightmost_y << endl;
}
