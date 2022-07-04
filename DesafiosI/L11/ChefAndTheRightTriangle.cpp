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
            return (x - other.x)*(x - other.x) + (y - other.y)*(y - other.y);
        }
};

class Triangle {
    public:
        double a, b, c;

        Triangle() {
        }

        Triangle(Point p1, Point p2, Point p3) {
            double x, y, z;

            x = p1.getDist(p2);
            y = p1.getDist(p3);
            z = p2.getDist(p3);

            c = x + y + z;
            a = max(x,max(y,z));
            b = min(x,min(y, z));
            c = c - a - b;
        }

        bool isRight() {
            return b + c == a;
        }
};

int main () {
    float x, y;
    int n, cnt=0;
    Point p[3];
    Triangle t;

    cin >> n;

    while(n--) {
        for (int i = 0; i < 3; i++) {
            cin >> x >> y;
            p[i] = Point(x, y);
        }
        t = Triangle(p[0], p[1], p[2]);
        cnt += t.isRight();
    }

    cout << cnt << endl;
}