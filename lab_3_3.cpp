#include <iostream>

using namespace std;

int main() {

  const float pi = 3.14315926536;
  float r;
  float h = 15;

  cout << "please enter radius :";
  cin >> r;

  cout << "Area of Circle :" << pi * r * r << endl;
  cout << "line of circle :" << 2*pi * r << endl;

  cout << "Area of Circle :" <<pi * r * r *h << endl;
  return 0;
}
