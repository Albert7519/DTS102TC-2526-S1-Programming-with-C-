#include <iostream>
#include <cmath>

using namespace std;

double getDistance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}



int main() {
   const int NUMBER_OF_POINTS = 8;
   double points[NUMBER_OF_POINTS][2];
   cout << "Enter" << NUMBER_OF_POINTS << "points: ";
   for (int i = 0; i < NUMBER_OF_POINTS; i++) 
    cin >> points[i][0] >> points[i][1];
    int p1 = 0, p2 = 1;
    double shortestDistance = getDistance(points[p1][0], points[p1][1], points[p2][0], points[p2][1]);
    for (int i = 0; i < NUMBER_OF_POINTS; i++) {
        for (int j = i + 1; j < NUMBER_OF_POINTS; j++) {
            double distance = getDistance(points[i][0], points[i][1], points[j][0], points[j][1]);
            if (distance < shortestDistance) {
                shortestDistance = distance;
                p1 = i;
                p2 = j;
            }
        }
    }
    cout << "The closest pair of points are " << "(" << points[p1][0] << ", " << points[p1][1] << ") and " << "(" << points[p2][0] << ", " << points[p2][1] << ")" << endl;
    return 0;
}