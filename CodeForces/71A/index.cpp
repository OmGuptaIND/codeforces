#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        string word;
        int times = 0;
        cin>>word;
        if(word.size()>10){
            cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
        n--;
    }    
}