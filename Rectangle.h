#include "Line.h"

class rectangle{
  private:
    Line length;
    Line width;
public:
  void print();
  double calcArea();
  rectangle(Line l, Line w);
};
