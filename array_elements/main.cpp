#include<iostream>

using namespace std;

int main(){
    const int SIZE= 5;
    double a[SIZE];
    cout << "Enter " << SIZE << " numbers: \t";
    for(int i=0; i<SIZE; i++)
        cin >> a[i];
    cout << "In reverse order: ";
    for(int i=SIZE-1; i>=0; i--)
        cout << "\t" << a[i];
}