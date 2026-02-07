#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;//creat list
    list<int> n(l);//copy list;
    list<int> m(5,100);//creat 5 element and every element value is 100
    for(int i:m){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);//add 1 into back
    l.push_front(2);//add 2 into front

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());//erase element at the begnig
    cout<<"after erase: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list is: "<<l.size()<<endl;

    return 0;
}