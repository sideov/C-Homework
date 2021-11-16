#include <fstream>
#include <iostream>
#include "functions.h"
#include <cmath>
#include <valarray>


using namespace std;


int main() {

    string file_name = "in.txt";
    float h;

    int l=1;
    double r;
    ifstream base(file_name);
    base >> r;
    while (base >> r >> r) l++;
    base.close();

    if (l == 2) {
        cout << 0 << endl;
        return 0;
    }

    ifstream file(file_name);
    Barrier *Barriers = new Barrier[l];
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


    while (true) {

        int direction = V.x/abs(V.x);
        int m = cur_bar + direction;

        while (true) {
            double x = Barriers[m].x;
            double bar = Barriers[m].h;
            double t = abs((x - Point.x)) / abs(V.x);
            double fall_time = (V.y + sqrt(V.y*V.y+2*g*Point.y))/g;

            if (m < 0) {
                cout << 0 << endl;
                return 0;
            }
            if (m > l-3) {
                cout << l-2 << endl;
                return 0;
            }

            if (fall_time < t) {
                if (direction == 1) cout << m;
                else cout << m + 1;
                return 0;

            }
            float y = Point.y + V.y * t - (g * t * t) / 2;


            if (y >= bar) {
                V.x = V.x;
                V.y = V.y-g*t;
                m += direction;
                Point.x = x;
                Point.y = y;
                cur_bar = m;
                continue;
            } else {
                V.x = -V.x;
                V.y = V.y - g*t;
                Point.x = x;
                Point.y = y;
                cur_bar = m;
                break;

            }
        }
    }
    delete Barriers;
}