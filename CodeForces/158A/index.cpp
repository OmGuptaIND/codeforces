#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int mmarks = arr[k-1];
    int times = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>0 && arr[i]>=mmarks){
            times++;
        }
    }
    cout<<times<<endl;
    return 0;
}