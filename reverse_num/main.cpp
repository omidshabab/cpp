#include <iostream>

using namespace std;

int main(){
    int number, reverse_num = 0, temp;

    cin >> number;

    while (number > 0){
        temp = number % 10;
        reverse_num = reverse_num * 10 + temp;
        number = number / 10;
    }

    cout << reverse_num;
    
}