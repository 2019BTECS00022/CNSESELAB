#include<iostream>

using namespace std;

int gcdExtended(int a, int b, int *x, int *y) {
   if (a == 0) {
      *x = 0;
      *y = 1;
      return b;
   }
   int x1, y1;
   int gcd = gcdExtended(b%a, a, &x1, &y1);
   *x = y1 - (b/a) * x1;
   *y = x1;
   return gcd;
}
int main() {
   int x, y;
   int a, b;
   cout<<"a: ";
   cin>>a;
   cout<<"b: ";
   cin>>b;
   cout<<"Extended Euclidean/GCD: "<<gcdExtended(a, b, &x, &y);
   return 0;
}
