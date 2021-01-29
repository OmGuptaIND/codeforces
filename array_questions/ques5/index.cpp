#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    const int N = 1e6+2;
    int check[N];
    int minIdx = INT16_MAX;  
    for(int i = 0; i<N; i++){
        check[i] = -1;
    }
    for(int i = 0; i<n; i++){
        if(check[arr[i]] == -1){
            check[arr[i]] = i;
        }else{
            minIdx = min(minIdx, check[arr[i]]);
        }
    }
    cout<<minIdx<<endl;
    return 0;
}