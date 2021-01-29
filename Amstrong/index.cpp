#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int prev = n;
    int res = 0;
    while(n>0){
        res += (n%10)*(n%10)*(n%10);
        n /= 10;
    }
    if(res == prev){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}