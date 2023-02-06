#include <iostream>

using namespace std;

int LinearSearch(int data[], int key) {
    for (int i = sizeof(data)-1; i >= 0; i--)
         if (data[i] == key)
             return i;

    return -1;
}

int main(){
    int data[] = { 23, 56, 48, 12, 56, 19 };
 
    int index = LinearSearch(data, 56);
 
    if (index >= 0) {
         cout << "Index of the value is: " << index << endl;
    } else {
         cout << "Not Found!" << endl;
    }
    return 0;
}