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

        double getSlope(Point other) {
            if (x == other.x) {
                return INF;
            }
            return (other.y - y) / (other.x - x);
        }
};

int main() {
    int N, M=0;
    double s;
    cin >> N;
    Point p[N];

    if (N == 1) {
        M = 1;
    }

    for (int i = 0; i < N; i++) {
        p[i].read();
    }

    for (int i = 0; i < N - 1; i++) {
        map<double, int> same_line;
        for (int j = i + 1; j < N; j++) {
            s = p[i].getSlope(p[j]);
            if (same_line.find(s) == same_line.end()) {
                same_line[s] = 1;
            } 
            M = max(M, ++same_line[s]);
        }
    }

    cout << M << endl;
}