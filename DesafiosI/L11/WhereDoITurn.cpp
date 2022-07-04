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

        double getSlope(Point other) {
            return (other.y - y) / (other.x - x);
        }
};

class Line {
    public:
        Point a, b;

        Line() {
        }

        Line (Point p1, Point p2) {
            a = p1;
            b = p2;
        }

        double vectorProduct(Point c) {
            return (b.x - a.x) * (c.y - b.y) - (b.y - a.y) * (c.x - b.x);
        }

    private: 
        void swat(Point p1, Point p2) {
            a = p2;
            b = p1;
        }
};

int main () {
    double x, y;
    Point p1, p2, p3;

    cin >> x >> y;
    p1 = Point(x, y);
    cin >> x >> y;
    p2 = Point(x, y);
    Line l = Line(p1, p2);
    cin >> x >> y;
    p3 = Point(x, y);

    if (l.vectorProduct(p3) == 0) {
        cout << "TOWARDS\n";
    } else if (l.vectorProduct(p3) > 0) {
        cout << "LEFT\n";
    } else {
        cout << "RIGHT\n";
    }
}