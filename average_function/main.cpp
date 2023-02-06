#include <iostream>

using namespace std;

int average(){
    int a[5], sum = 0, average;

    for(int i = 0; i < 5; i++){
        cin >> a[i];
        sum += a[i];
    }

    average = sum / 5;

    return average;
}

int main(){
    cout << "Enter numbers and then press esc button to get the average: ";

    int x = average();
    cout << "The average is: " << x;

    return 0;
}