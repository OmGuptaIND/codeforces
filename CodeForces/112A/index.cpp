#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    string value1;
    string value2;
    cin>>value1;
    cin>>value2;
    transform(value1.begin(), value1.end(), value1.begin(), ::tolower);
    transform(value2.begin(), value2.end(), value2.begin(), ::tolower);
    cout<<value1<<" "<<value2<<endl;
    return 0;

}