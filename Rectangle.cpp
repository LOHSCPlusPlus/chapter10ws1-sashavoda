#include "Rectangle.h"
#include <iostream>
using namespace std;
  rectangle::rectangle(Line l, Line w){
    length = l;
    width = w;
  }
void rectangle::print(){
cout << "length: ";
  length.Print();
cout << "width: ";
  width.Print();
}
double rectangle::calcArea(){
  
  double area = length.lineLength() * width.lineLength();
  return area;
}