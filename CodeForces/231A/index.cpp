#include <iostream>

using namespace std;

int main(){
    int cases;
    int solve = 0;
    cin>>cases;
    for(int i = 0; i<cases; i++){
        int arr[3];
        int times = 0;
        for(int i = 0; i<3; i++){
            cin>>arr[i];
        }
        for(int i = 0; i<3; i++){
            if(arr[i] == 1 && times != 2){
                times++;
            }
            if(times == 2){
                solve++;
                break;
            }
        }
    }
    cout<<solve;
}