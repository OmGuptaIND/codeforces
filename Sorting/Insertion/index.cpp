#include <iostream>

using namespace std;

int InsertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int crr = arr[i];
        int j = i-1;
        while(crr<arr[j] && j>=0 ){
            int temp = arr[j];
            arr[j] = crr;
            arr[i] = temp;
            j--; 
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[50];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<InsertionSort(arr, n)<<endl;
    return 0;
}