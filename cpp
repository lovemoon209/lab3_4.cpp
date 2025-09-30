// Lab3_4.cpp
// Лунга Любов
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x, y, r1, r2;
  double inside = true;
  double outside = false;

cout << "x = ";
cin >> x;
cout << "y = ";
cin >> y;
cout << "r1 = ";
cin >> r1;
cout << "r2 = ";
cin >> r2;


if (x >= 0 && y >= 0 && (sqrt(x * x + y * y) <= r2 * r2) && (sqrt(x * x + y * y) >= r1 * r1)) {
inside = true;
}
else if (x <= 0 && y <= 0 && (sqrt(x * x + y * y) <= r2 * r2)) {
inside = true;
}
else outside = false;

if (inside) {
  cout << "yes" << inside << endl;
} else
  cout << "not " << outside << endl;
    
cin.get();
    return 0;
}
