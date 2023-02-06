#include <iostream>

using namespace std;

void remove(float a[], int i){
    for(int x = i; x < sizeof(a); x++){
        n = n - 1;
        a[x] = a[x+1];
    }
}

int main(){
    int data[] = { 5, 4, 8, 22, 56, 32, 24 };

    remove(data, sizeof(data), 3);

    for(int i = 0; i < sizeof(data); i++){
        cout << data[i] << " ";
    }

    return 0;
}