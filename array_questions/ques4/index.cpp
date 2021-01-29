#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max = 0;
    int next = 0;
    int ans = 0;
    int j = 0;
    while(j<n){
        int value = arr[j];
        if(value>max){
            max = value;
        }
        if(j<n-1 && (max == value)){
            if(value>arr[j+1]){
                ans++;
            }
        }
        if(j==n-1 && (arr[j]>max)){
            ans++;
        }
        j++;
    }
    cout<<ans;
    return 0;

}