#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int temp = 0;
    for(int i = 0; i<n; i++){
        temp = 0;
        for(int j = i; j<n; j++){
            temp += arr[j];
            cout<<temp<<endl;
        }
    }
}