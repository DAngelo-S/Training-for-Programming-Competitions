#include<bits/stdc++.h>

using namespace std;

class Point {
    public:
        double x;
        double y;

        Point() {
            x = 0;
            y = 0;
        }

        Point(double a, double b) {
            x = a;
            y = b;
        }

        double getDist(Point other) {
            return sqrt((x - other.x)*(x - other.x) + (y - other.y)*(y - other.y));
        }

        double getSlope(Point other) {
            return (y - other.y) / (x - other.x);
        }

        double getX() {
            return x;
        }

        double getY() {
            return y;
        }
};

class Triangle {
    public:
        double a;
        double b;
        double c;
        double m1;
        double m2;

        Triangle() {
        }

        Triangle(Point p1, Point p2, Point p3) {
            a = p1.getDist(p2);
            b = p2.getDist(p3);
            c = p3.getDist(p1);
            m1 = p1.getSlope(p2);
            m2 = p1.getSlope(p3);
        }

        double getPerimeter() {
            return a + b + c;
        }

        double getArea() {
            return sin(
                atan(abs((m2-m1)/(1+m2*m1)))) * a * c * 1/2;
        }
};

int main () {
    double x, y;

    Point p[3];
    Triangle t;

    for (int i = 0; i < 3; i++) {
        cin >> x >> y;
        p[i] = Point(x, y);
    }

    t = Triangle(p[0], p[1], p[2]);

    cout << setprecision(4) << fixed;
    cout << t.getPerimeter() << " " << t.getArea() << endl;
}