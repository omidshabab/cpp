#include <iostream>

using namespace std;

int main(){
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    if(x>y){
        int temp = x;
        x = y;
        y = temp;
    }
    cout << x << " <= " << y << endl;
}