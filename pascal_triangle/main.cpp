#include <iostream>

using namespace std;

int binomialCoeff(int n, int k){
    int res = 1;
    if(k > n - k) k = n - k;
    
    for(int i = 0; i < k; i++){
        res *= (n - i); 
        res /= (i + 1); 
    }

    return res;
}

void returnPascal(int n){
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j <= i; j++) 
            cout << binomialCoeff(i, j) << " ";
        cout << endl; 
    } 
}

int main(){
    returnPascal(12);

    return 0;
}