#include <iostream>
#include <cmath>
using namespace std;

double circleArea(double r) {
    return 3.14 * r * r;
}

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

double slope(double x1, double y1, double x2, double y2) {
    return (x2 - x1 == 0) ? NAN : (y2 - y1) / (x2 - x1);
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double quadratic(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d < 0) return NAN;
    return (-b + sqrt(d)) / (2 * a);
}

int main() {
    cout << "Circle Area: " << circleArea(5.0) << endl;
    cout << "Hypotenuse: " << hypotenuse(3.0, 4.0) << endl;
    cout << "Slope: " << slope(1.0, 2.0, 4.0, 6.0) << endl;
    cout << "Distance: " << distance(1.0, 2.0, 4.0, 6.0) << endl;
    cout << "Quadratic Root: " << quadratic(1.0, -3.0, 2.0) << endl;

    return 0;
}