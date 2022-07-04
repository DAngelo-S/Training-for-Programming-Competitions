#include<bits/stdc++.h>

using namespace std;

#define INF 1ll << 60

class Point {
    public:
        float x;
        float y;

        Point() {
            x = 0;
            y = 0;
        }

        Point(float a, float b) {
            x = a;
            y = b;
        }

        void read() {
            float a, b;
            cin >> a >> b;
            x = a;
            y = b;
        }

        void print() {
            cout << setprecision(4) << fixed << x << "\n" << y << "\n";
        }

        float getDist(Point other) {
            return (x - other.x)*(x - other.x) + (y - other.y)*(y - other.y);
        }

};

class Line {
    public:
        Point pa, pb;
        float ax, bx, m;

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
            /*
            (y - pa.y) = m * (x - pa.x)
            a = m
            b = m * (-pa.x) + pa.y
            y = a * x + b
            */

            if (pb.x == pa.x) {
                m = INF;
            } else {
                m = (pb.y - pa.y) / (pb.x - pa.x);
            }
            ax = m;
            bx = m * (-pa.x) + pa.y;
        }

        Point closerPointInTheLineFrom(Point other) {
            float a2, b2, m2, x, y;

            /*
            m2 = -1/m1
            (y - other.y) = m2 (x - other.x)
            a2 = m2 
            b2 = m2 * (-other.x) + other.y

            y = a2 * x + b2
            */

            if (m == INF) {
                if (other.y >= min(pa.y, pb.y) && other.y <= max(pa.y, pb.y)) {
                    return Point(pa.x, other.y);
                } else if (other.y < min(pa.y, pb.y)) {
                    return Point(pa.x, min(pa.y, pb.y));
                } else {
                    return Point(pb.x, max(pa.y, pb.y));
                }
            } else if (m == 0) {
                if (other.x >= min(pa.x, pb.x) && other.x <= max(pa.x, pb.x)) {
                    return Point(other.x, pa.y);
                } else if (other.x < min(pa.x, pb.x)) {
                    return Point(min(pa.x, pb.x), pa.y);
                } else {
                    return Point(max(pa.x, pb.x), pb.y);
                }
            }
            m2 = -1/m;
            a2 = m2;
            b2 = m2 * (-other.x) + other.y;

            /*
            a * x + b = a2 * x + b2
            x = (b2 - b) / (a - a2)
            y = a2 * x + b2
            */

            if (ax - a2 == 0) {
                x = 0;
            } else {
                x = (b2 - bx) / (ax - a2);
            }
            y = a2 * x + b2;
            
            return Point(x, y);
        }

};

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    float x, y, D;
    Point M, curr, ant, aux, last;
    Line l;
    int N, n=0;

    while (cin >> x) {
        n=0;
        cin >> y;
        pair<float, Point> minimum(INF, Point(0, 0));
        M = Point(x, y);

        cin >> N;

        ant.read();
        minimum.first = M.getDist(ant);
        minimum.second = ant;

        while (n<N) {
            ant.read();
            last = ant;
            if (n+1 < N) {
                curr.read();
                last = curr;

                l = Line(ant, curr);

                aux = l.closerPointInTheLineFrom(M);
                D = M.getDist(aux);

                if (D < minimum.first) {
                    minimum.first = D;
                    minimum.second = aux;
                }

                n++;
            }

            n++;
        }

        D = M.getDist(last);

        if (D < minimum.first) {
            minimum.first = D;
            minimum.second = last;
        }

        if (N == 0) {
            ant.print();
        } else {
            minimum.second.print();
        }
    }
}