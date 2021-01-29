/* Basic idea for a Binaryy Search is that we divide the sorted arry int two parts and then we see 
if we have a numbers greater than the key and then we divide the next part of array in 
two parts and we check according to this */

#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            s= mid;
        }else{
            e = mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr, n, key)<<endl;
}