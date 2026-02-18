#include<iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;//print address  only
    cout<<*p<<endl;//print value 
}

void update(int *p){
    *p=*p+1;//change every place
    // p=p+1;//change address but scope of p is in this function so changr for  only this function
    *p=*p+1;//change value using pointer but new pointer scop is only this function so 
            //vlue will update only this function


    cout<<"address in update: "<<p<<endl;
    cout<<"in update p: "<<*p<<endl;
}

int main(){
    int value=5;
    int *p=&value;

    print(p);//pass value by refrance
    cout<<"aftre update"<<endl;
    update(p);
    print(p);
    return 0;
}