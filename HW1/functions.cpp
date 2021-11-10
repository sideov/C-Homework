#include <cmath>
#include "functions.h"

double operator*(Vector2D V1, Vector2D V2){
    double s = V1.x*V2.x + V1.y*V2.y;
    return s;
}

double cosangle(Vector2D V1, Vector2D V2){
    double cosangle = (V1 * V2)/(sqrt(V1*V1) * sqrt(V2*V2));
    cosangle = round(cosangle * 100000000000000000000.0) / 100000000000000000000.0;
    return cosangle;
}

bool isright(Vector2D V1, Vector2D V2) {
    double x0 = V1.x;
    double y0 = V1.y;
    double x = V2.x;
    double y = V2.y;

    {
        if (x0 * y - y0 * x > 0)
        {
            return false;   //лево
        }
        else
        {
            return true;//право
        }
    }

}

double distance(Vector2D V1, Vector2D V2) {
    double a = V1.x;
    double b = V1.y;
    double x0 = V2.x;
    double y0 = V2.y;
    double h;

    if (b == 0 and a != 0) {
        h = abs(y0);
    }
    else if (a == 0 and b != 0){
        h = abs(x0);
    }
    else h = abs(b * x0 - a * y0) / sqrt(a * a + b * b);

    return h;
}