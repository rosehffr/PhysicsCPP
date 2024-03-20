
#include <iostream>
#include <cmath>
using namespace std;

int main() {
double g = 9.8;
double dist;
double time;
cout << "Please enter the time in seconds: ";
cin >> time;
if (time < 0) {
    cout << "Please enter a positive value for time.";
} else {
dist = 0.5 * g * pow(time,2);

cout << "The object will fall " << dist << " meters in the given time.";

}
return 0;

}