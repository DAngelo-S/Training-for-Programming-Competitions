#include<bits/stdc++.h>

using namespace std;

#define INF 1ll << 60

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

        void read() {
            double a, b;
            cin >> a >> b;
            x = a;
            y = b;
        }

};

class Line {
    public:
        Point pa, pb;
        double a, b, c;

        Line() {
        }

        void read() {
            pa.read();
            pb.read();
            lineEquation();
        }

        Line (Point p1, Point p2) {
            pa = p1;
            pb = p2;
            lineEquation();
        }

        void lineEquation() {
            a = pa.y - pb.y;
            b = pb.x - pa.x;
            c = pa.x * pb.y - pa.y * pb.x;
        }

        double distanceFromPoint(Point p) {
            return abs(a * p.x + b * p.y + c) / sqrt((a * a + b * b));
        }

};

class Circle {
    public:
        Point center;
        double R;

        Circle() {
        }

        Circle(Point c, double radio) {
            center = c;
            R = radio;
        }

        void read() {
            double Rr;
            cin >> Rr;
            R = Rr;
            center.read();
        }

        double ropeSize(Line l) {
            double d = l.distanceFromPoint(center);
            if (d == R) {
                return  0;
            }

            if (d > R) {
                return -1;
            }

            return 2 * sqrt(R * R - d * d);
        }
};

int main () {
    double R, x, y;
    Point p, pp;
    Line l;
    Circle c;

    c.read();
    l.read();

    cout << setprecision(5) << fixed << c.ropeSize(l) << endl;
}