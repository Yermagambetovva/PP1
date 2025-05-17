#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


struct Point {
    int x, y;
    double distance(const Point& P) const {
        return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
    }
};


int main() {
    Point P;
    cin >> P.x >> P.y;

    int n;
    cin >> n;

    vector <Point> points(n);
    for(int i = 0; i < n; ++i){
        cin >> points[i].x >> points[i].y;
    }


    sort(points.begin(), points.end(), [&P](const Point& a, const Point& b){
        return a.distance(P) < b.distance(P);
    });

    for(vector <Point>::iterator it = points.begin(); it != points.end(); ++it){
        cout << it->x << " " << it->y << endl;
    }

    return 0;
}