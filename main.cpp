#include <iostream>
using namespace std;

template <typename T>
T some_f(T a, T b){
  return a+b;
}

int main(){
  setlocale(LC_ALL, "RU");
  double x = 5.6, y = 10, *p;
  int *df;
  df = new int;
  p = &x;
  cout << "Some " << some_f(x,y) << endl;
  cout << "The address is " << p << endl;
}