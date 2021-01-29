#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int res = 0;
    int index  = 0;
    while(n>0){
        res += (n%10)*(pow(8, index));
        n /= 10;
        index++;
    }
    cout<<res<<endl;
}