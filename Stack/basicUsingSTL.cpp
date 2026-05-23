
//stack:- stack is besicaly follow lifo datastructure

#include<iostream>
#include<stack>
using namespace std;

int main(){
    //created stack
    stack<int> s;

    //insert ilement
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(2);

    // print top element
    cout<<"printing top element: "<<s.top()<<endl;

    //cheak that stack is empty or not
    cout<<"stack is empty: "<<s.empty()<<endl; // 0 for false and 1 for true

    //pop element
    s.pop();

    //count element
    cout<<"number of element in stack is: "<<s.size();



}