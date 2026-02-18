#include<iostream>
using namespace std;

int main(){
    char ch[6]="abcde"; //size should be grater than 1 of entaire elemnet of array
            //bcz store last element NULL

    char *c=&ch[0];
    //how it is work :- 
                    // besicaly start address of first elemnet but stop after NULL charechtor
                    // if NULL is not avelable then print garvage value but stop only after NULL char
    cout<<c<<endl; //print all array but in intArray print only address of first element

    return 0;
}