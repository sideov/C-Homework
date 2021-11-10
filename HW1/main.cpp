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

    double rightcos, leftcos, anglee;
    rightcos = leftcos = 1;

    double distancee, rightdistance, leftdistance;
    rightdistance = leftdistance = 0;
    double x0, y0, x, y, Rightmost_x, Rightmost_y, Leftmost_x, Leftmost_y;

    std::ifstream infile("in.txt");
    infile >> x0 >> y0;

    if (variant == 1) {
        while (infile >> x >> y) {

            //cout << Vectors[i].x << " " << Vectors[i].y << endl;
            //flag = (isright(MVector, Vectors[i]));

            //cout << Vectors[i].x << " " << Vectors[i].y << " h = " << distance(MVector, Vectors[i]) << endl;
            double coss = (x0*x+y0*y)/(sqrt(x*x+y*y)*sqrt(x0*x0+y0*y0));
            coss = std::round(coss * 100000000000000.0) / 100000000000000.0;

            //cout << anglee << " ";
            if (y0*x < x0*y) {
                //cout << "Right" << endl;
                if (coss <= rightcos) {
                    Rightmost_x = x;
                    Rightmost_y = y;
                    //cout << "Rx Ry " << Rightmost.x << " " << Rightmost.y << endl;
                    rightcos = coss;
                }
            } else {
                //cout << "Left" << endl;
                if (coss <= leftcos) {

                    Leftmost_x = x;
                    Leftmost_y = y;
                    //cout << "Lx Ly " << Leftmost.x << " " << Leftmost.y << endl;
                    leftcos = coss;
                }
            }
            //cout << "---------" << endl;
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