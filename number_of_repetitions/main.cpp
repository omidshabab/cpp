#include <iostream>

using namespace std;

int main(){
    int x, a[10] = {0};

    while(x!=-1){
        cin >> x;
        for(int i=0; i<10; i++) if(i==x) a[i]++;
    }

    for(int i=0; i<10; i++) cout << a[i] << " ";
}