#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i]; //[1, 1,  2, 2, 3, 4, 4]
    }
    int max = arr[0];
    int ans = 0;
    for(int i = 0; i<n; i++){
        int value = arr[i];
        if(value == max){
            ans++;
        }
        else if(value>max){
            max = value;
            ans = 1;
        }
    }
    cout<<ans<<endl;

}