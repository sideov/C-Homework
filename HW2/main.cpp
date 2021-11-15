#include <fstream>
#include <iostream>
#include "functions.h"
#include <cmath>
#include <valarray>


using namespace std;


int main() {

    string file_name = "in.txt";
    double h;

    int l=1;
    double r;
    ifstream base(file_name);
    base >> r;
    while (base >> r >> r)
    {
        l++;
    }
    base.close();


    ifstream file(file_name);
    Barrier* Barriers = new Barrier[l-2];
    Vector2D V{};

    for (int i = 0; i < l; i++) {
        if (i == 0) {
            file >> h;

        } else if (i == 1) {
            file >> V.x >> V.y;
        } else {
            file >> Barriers[i-2].x >> Barriers[i-2].h;
        }
    }
    file.close();



    const double g = 9.81;
    Point Point{};
    Point.x = 0;
    Point.y = h;
    int cur_bar = -1;


    //cout << Barriers[l-3].x << Barriers[l-3].h << endl;

    double fall_time;
    bool flag = false;
    double x_fall;

    while (true) {
        if (flag) break;
        /*
        cout << "---------------" << endl;
        cout << "Point.x = " << Point.x << endl;
        cout << "Point.y = " << Point.y << endl;
        cout << "V.x = " << V.x << endl;
        cout << "V.y = " << V.y << endl;
         */

        double fall_time_1 = (V.y + sqrt(V.y*V.y+2*g*Point.y))/g;
        double fall_time_2 = (V.y - sqrt(V.y*V.y+2*g*Point.y))/g;
        //cout << fall_time_1 << " " << fall_time_2 << endl;

        if (fall_time_1 > fall_time_2) {
            fall_time = fall_time_1;
        } else fall_time = fall_time_2;

        //cout << "fall_time = " << fall_time << endl;
        int direction = V.x/abs(V.x);
        int m = cur_bar + direction;

        while (true) {
            double x = Barriers[m].x;
            double bar = Barriers[m].h;
            double t = abs((x - Point.x)) / abs(V.x);
            //cout << "m = " << m << endl;
            //cout << "t = " << t << endl;


            if (m < 0 or m > l-2 or fall_time < t) {
                x_fall = Point.x + V.x*fall_time;
                flag = true;
                break;
            }

            double y = Point.y + V.y * t - (g * t * t) / 2;
            //cout << "y = " << y << endl;
            //cout << "bar = " << bar << endl;
            if (y >= bar) {
                //cout << "Перелет" << endl;
                m += direction;
                continue;
            } else {
                V.x = -V.x;
                V.y = V.y - g*t;
                Point.x = x;
                Point.y = y;
                //cout << "Попали в препятствие с m = " << m <<  endl;
                cur_bar = m;
                break;

            }
        }
    }
    //cout << x_fall << endl;
    if (x_fall < Barriers[0].x) {
        cout << 0;
        return 0;
    }
    if (x_fall > Barriers[l-3].x) {
        cout << l-2;
        return 0;
    }

    for (int n = 0; n < l-3; n++) {
        if (x_fall > Barriers[n].x and x_fall < Barriers[n+1].x){
            cout << n+1;
            return 0;

        }
    }
delete Barriers;

}