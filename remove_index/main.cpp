#include <iostream>

using namespace std;

void remove(int a[], int index){

    int size = sizeof(a) - 1;
    for(int x = index; x < size; x++)
        a[x-1] = a[x];

    size = sizeof(a) - 1;
    for(int i = 0; i < size - 1; i++)
        cout << a[i] << " ";
}

int main(){
     int data[] = { 5, 4, 8, 22, 56, 32, 24 };

    remove(data, 4);

    return 0;
}