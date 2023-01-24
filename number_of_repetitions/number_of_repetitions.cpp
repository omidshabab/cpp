#include <iostream>

using namespace std;

int main(){
    int x, a[10];

    for(int i = 0; i<10; i++) a[i]=0;

    for( ; ; ){
        cin >> x;
        for(int i=0; i<10; i++) if(i==x) a[i]++;
        if(x==-1) break;
    }

    for(int i=0; i<10; i++) cout << a[i] << " ";
}