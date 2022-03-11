#include "Line.h"
#include <iostream>
using namespace std;
int main() {
  Point a(4,6);
  Point b(7, 9);
  Line c(a,b);

  c.Print();
 cout << "distance: " <<  a.calcDistance(b) << endl;
    return 0;

}

