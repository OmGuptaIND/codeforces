#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int st = 0;
    int ed = n-1;
    int max = INT16_MIN;
    while(st<ed){
        while(st<ed){
            int sum = arr[ed]+arr[st];
            if(sum>max){
                max = sum;
            }
            ed--;
        }
        ed = n-1;
        st++;
    }
    cout<<max;
}