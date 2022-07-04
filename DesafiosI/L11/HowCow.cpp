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
};

class Rectangle {
    public:
        Point left_bottom, right_top;

        Rectangle(Point p1, Point p2) {
            left_bottom = p1;
            right_top = p2;
        }

        bool isInside(double x, double y) {
            if (x > left_bottom.x && x < right_top.x && y > left_bottom.y && y < right_top.y) {
                return true;
            } 
            return false;
        }
};

int main () {
    double x, y;
    int T, m, t=1;

    cin >> T;

    while (t <= T) {
        cin >> x >> y;
        Point p1 = Point(x, y);
        cin >> x >> y;
        Point p2 = Point(x, y);

        Rectangle r = Rectangle(p1, p2);

        cin >> m;

        cout << "Case " << t << ":\n";
        while (m--) {
            cin >> x >> y;
            cout << (r.isInside(x, y) ? "Yes\n" : "No\n");
        }
        t++;
    }
}