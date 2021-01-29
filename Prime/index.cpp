#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = 0;
    for(int i = 2; i<sqrt(n); i++){
        if(!(n%i)){
            flag = 1;
            cout<<"Non-Prime"<<endl;
        }
    }
    if(!flag){
        cout<<"Prime"<<endl;
    }
}