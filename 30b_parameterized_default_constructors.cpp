#include<iostream>
#include <math.h>
using namespace std;

class Point {
    int x;
    int y;
    public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
    void displayPoint() {
        cout << "The Point is (" << x << " , " << y << ")" << endl;
    }
    friend void Distance(Point a, Point b);
};

void Distance(Point a, Point b) {
    int distance;
    distance = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    cout << "The distance is " << distance;
}

int main(){
    Point p(1, 1);
    p.displayPoint();
    Point q(1, 1);
    q.displayPoint();
    Distance(p, q);
    return 0;
}