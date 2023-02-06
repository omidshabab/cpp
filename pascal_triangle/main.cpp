#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int temp, n = 12, s;
    int nums[13]={0};
    s=n-1;
    nums[s] = 1;
    for(int i=0; i<n; i++){
        cout<<"\n";
        for(int j=0; j<s; j++ )
             cout<<"  ";
        for(int j=0; j<=i; j++){
            temp = nums[s+j] + nums[s+j+1];
            cout<<temp<<setw(4);
            nums[s+j] = temp;
        }
        s--;
    }
    return 0;
}