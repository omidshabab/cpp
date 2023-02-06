#include <iostream>

using namespace std;

void remove(int a[], int i){
    int size = sizeof(a)/sizeof(a[0]);
    for(int x = i; x < size; x++)
        a[x] = a[x+1];
}

int main(){
    int data[] = { 5, 4, 8, 22, 56, 32, 24 };

    remove(data, 3);

    int size = sizeof(data)/sizeof(data[0]);
    cout << size;

    for(int i = 0; i < size; i++){
        cout << data[i] << " ";
    }

    return 0;
}