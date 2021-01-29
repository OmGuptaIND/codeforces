#include <iostream>

using namespace std;
void printBoard(int queens[]){
    /*
        the general idea for this func() is that we have a list of queens with us and we want  the value of the x_coor
        that is stored in the queens[i] value and we have to print the value at that place for example we have i = 5 and 
        queens[i] equal to 5 with us then we have to print Q at the fifth place of the row so read i then read queens[i] then 
        print Q at that place in row we have to use O(n^2) no matter what I will try to find something better later...
    */

    for(int i = 0; i<8; i++){                       //this loop is to get the first Q places and to run the loop again for other values ;
        for(int j = 0; j<8; j++){                   //this is to get every value next to the given value;
        if(j==queens[i]){                           //reads the x_coor from the queens and then we iterate for that value simply print Q there
                cout<<"Q"<<" ";                     //prints the Q
            }
            else{
                cout<<"."<<" ";                     //if not that value then we use "." as specifird;
            }
        }
        cout<<endl;                                 //for next iterate;
    } 
    cout<<endl;                                     //Extra space so everything looks cool;
}

bool conflicts(int x, int y, int p, int q){

    /*
        the general idea for this func() is to check if we have 8 inputs with us and everyone of them is something other 
        than -1 and in the required value 0-7
    */
   if(x == p || y == q || x<-1 || x>7 || q<-1 || q>7 ){
       return false;
   }
   return true;
    
}

bool isSafe(int queens[]){

    /*
        this is the checking mechanism that what we created is a permissible set of queens and we check against that
        value and tell if its right or not
    */

    for(int i = 0; i<8; i++){                                           //Get the first value
        int x_coor = queens[i];                                         //Get x_coor    
        int y_coor = i;                                                 //Get y_coor        
        for(int j = 0; j<8; j++){                                       //Start iterating in the value for subsequent values
            if(queens[j] == -1){
                return true;
            }
            if(i != j){                                                 //Do not check for the same iterate we are doing
                int p_coor = queens[j];                                 //Get p_coor
                int q_coor = j;
                if(x_coor == p_coor || y_coor == q_coor || x_coor+y_coor == p_coor+q_coor || x_coor-y_coor == p_coor-q_coor){ //All the logic
                    return false;
                
                }                                         //Get q_coor
                
            }
        }
    }
    return true;
}
void printQ(int queens[]){
    for(int i = 0; i<8; i++){
        cout<<queens[i]<<" ";
    }
    cout<<endl;
}

int placeQs(int queens[], int y){
    if(y>=8){
        return 1;
    }else{
        for(int i = 0; i<8; i++){
            queens[y] = i;
            if(isSafe(queens)){
                if(placeQs(queens, y+1)){
                    return 1;
                }else{
                    queens[y] = -1;
                }
            }else{
                queens[y] = -1;
            }
        }
    }
    return 0;
}

int main(){
    int flag = 0;
    int queens[8]={-1, -1, -1, -1, -1, -1, -1, -1};
    if(placeQs(queens, 0)){
        flag = 1;
        printBoard(queens);
    }
    printQ(queens);
    if(!flag){
        cout<<"NOT RUNNED"<<endl;
    }
    return 0;
}