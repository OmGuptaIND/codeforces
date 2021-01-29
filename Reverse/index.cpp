#include <iostream>


using namespace std;

int main(){
    int num = 0;
    cin>>num;
    int reverse = 0;
    while(num > 0){
        reverse = reverse*10 + (num%10);
        num /= 10;
    }
    cout<<reverse<<endl;
}