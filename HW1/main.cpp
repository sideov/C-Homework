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

    char *str = new char [1024];
    int l=0;
    ifstream base(file_name);
    while (!base.eof())
    {
        base.getline(str, 1024, '\n');
        l++;
    }
    base.close();

    ifstream file(file_name); // создаем объект класса ifstream
    Vector2D* Vectors = new Vector2D[l];
    int i = 0;

    for (i = 0; i < l; i++){
        file >> Vectors[i].x >> Vectors[i].y;
        //cout << Vectors[i].x << " " << Vectors[i].y << endl;
    }

    Vector2D MVector = Vectors[0];
    //cout << MVector.x << " " << MVector.y << endl;
    Vector2D Leftmost, Rightmost;
    double rightcos, leftcos, anglee;
    rightcos = leftcos = 1;

    double distancee, rightdistance, leftdistance;
    rightdistance = leftdistance = 0;

    if (variant == 1) {
        for (i = 1; i < l; i++) {
            //cout << Vectors[i].x << " " << Vectors[i].y << endl;
            //flag = (isright(MVector, Vectors[i]));

            //cout << Vectors[i].x << " " << Vectors[i].y << " h = " << distance(MVector, Vectors[i]) << endl;
            double coss = cosangle(MVector, Vectors[i]);

            //cout << anglee << " ";
            if (isright(MVector, Vectors[i])) {
                //cout << "Right" << endl;
                if (coss <= rightcos) {
                    Rightmost = Vectors[i];
                    //cout << "Rx Ry " << Rightmost.x << " " << Rightmost.y << endl;
                    rightcos = coss;
                }
            } else {
                //cout << "Left" << endl;
                if (coss <= leftcos) {

                    Leftmost = Vectors[i];
                    //cout << "Lx Ly " << Leftmost.x << " " << Leftmost.y << endl;
                    leftcos = coss;
                }
            }
            //cout << "---------" << endl;
        }
    }
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
    }

    cout << "Leftmost: " << Leftmost.x << " " << Leftmost.y << endl;
    cout << "Rightmost: " << Rightmost.x << " " << Rightmost.y << endl;
    delete Vectors;
}