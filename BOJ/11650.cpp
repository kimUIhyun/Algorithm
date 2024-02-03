#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// x좌표 오름차순
// y좌표 오름차순

typedef struct point {
    int x, y;
}POINT;

void setPoint(vector<POINT> &vect, int length) {
    POINT point;
    int X, Y;
    for(int i = 0; i < length; i++) {
        cin >> X >> Y;
        point.x = X; point.y = Y;
        vect.push_back(point);
    }
}

int COMP_POINT(point a, point b) {
    if(a.x == b.x)
        return a.y < b.y;
    else
        return a.x < b.x;
}

ostream& operator << (ostream& os, POINT point) {
    os << point.x << " " << point.y;
    return os;
} 

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<POINT> points;

    setPoint(points, N);

    sort(points.begin(), points.end(), COMP_POINT);

    for(int i=0; i < N; i++) {
        cout << points[i] << "\n";
    }
}