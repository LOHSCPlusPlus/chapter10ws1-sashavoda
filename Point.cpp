#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;
// Notice how when we use field names in the functions that
// belong to Point, we can just use the name without a dot operator.
Point::Point(double xVal, double yVal){
    x = xVal;
    y = yVal;
}
Point::Point(){
    x = 0;
    y = 0;
}

//double Point::getX() {
  //  return x;}
//double Point::getY(){
 // return y;}
//void Point::setX(double xVal) {
   // x = xVal;}
//void Point::setY(double yVal){
 //y = yVal;}
void Point::print() {
   cout << "x: " << x;
cout << "y: " << y;
	cout << endl;
  } 
 double Point::calcDistance(Point other) {
double xVal = pow(x - other.x, 2);
double yVal = pow(y - other.y, 2);
double dist = sqrt(xVal + yVal);
return dist;
  }

