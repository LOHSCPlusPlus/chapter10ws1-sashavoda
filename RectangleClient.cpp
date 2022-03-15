#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
  Point a(1,2);
  Point b(4,3);
  Point c(1,3);
  Point d(4,2);

  Line e(a,b);
  Line f(b,c);

  rectangle i(e,f);
  
  e.Print();
  f.Print();
  i.print();
  cout << "Area: " << i.calcArea() << endl;
    return 0;
}
