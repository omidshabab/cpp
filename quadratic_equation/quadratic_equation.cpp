#include<iostream>
#include<cmath>

using namespace std;

int main() {
   int a, b, c;
   cin >> a >> b >> c;
   cout << endl;
   float discriminant, realPart, imaginaryPart, x1, x2;
   if (a == 0) {
      cout << "This is not a quadratic equation";
   } else {
      discriminant = b*b - 4*a*c;
      if (discriminant > 0) {
         x1 = (-b + sqrt(discriminant)) / (2*a);
         x2 = (-b - sqrt(discriminant)) / (2*a);
         cout << "Roots are real and different." << endl;
         cout << "Root 1 = " << x1 << endl;
         cout << "Root 2 = " << x2 << endl;
      } else if (discriminant == 0) {
         cout << "Roots are real and same." << endl;
         x1 = (-b + sqrt(discriminant)) / (2*a);
         cout << "Root 1 = Root 2 =" << x1 << endl;
      } else {
         realPart = (float) -b/(2*a);
         imaginaryPart =sqrt(-discriminant)/(2*a);
         cout << "Roots are complex and different." << endl;
         cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
         cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
      }
   }
   return 0;
}