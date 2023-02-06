#include <iostream>

using namespace std;

void ComputeCircle(int r){
    int P, S, pi = 3;

    P = 2 * r * pi;
    S = r * r * pi;

    cout << "P of the circle is: " << P << endl << "S of the circle is: " << S;
}

int main(){
    int x;

    cout << "Please enter the radius of the circle: ";
    cin >> x;
   ComputeCircle(x);
}