#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int x = 0;
    while(n>0){
        string value;
        cin>>value;
        if(value == "X++"){
            x++;
        }else if(value == "--X"){
            --x;
        }else if(value == "++X"){
            ++x;
        }else if(value == "X--"){
            x--;
        }else{
            continue;
        }
        --n;
    }
    cout<<x<<endl;
    return 0;
}