#include <iostream>
#include <cmath>

int main() {
const double g = 9.8;
float x = 1.0, y = 0.0, vx = 0.0, vy = 6.28318530718;
float t = 0.0, dt = (1.0/365.0);
float xn, yn, vxn, vyn;
const float GravConstant = 39.47, SolarMass = 1.0;

while (t < 2.0) {
xn =  x + vx * dt;
yn = y + vy * dt;
vxn = vx - dt * GravConstant * SolarMass * x / pow(pow(x, 2) + pow(y, 2), 1.5);
vyn = vy - dt * GravConstant * SolarMass * x / pow(pow(x, 2) + pow(y, 2), 1.5);
x = xn;
y = yn;
vx = vxn;
vy = vyn;
t = t + dt;

std::cout << t << " " << x << " " << y << std::endl;
}








    return 0;
}