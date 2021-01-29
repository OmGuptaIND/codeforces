#include <iostream>

using namespace std;



int ques__ans(int n, int value, int arr[]){
    value += ques__ans(n, value, arr);
    n--;
    return value;
}

int main(){
    int n = 0;
    cin>>n;
    int value = 0;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int res = ques__ans(n, value, arr);
    cout<<res<<endl;
    return 0;
}