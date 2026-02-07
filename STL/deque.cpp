#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;//creating deque

    d.push_back(1);//push back element 
    d.push_front(2);//push front element 

    // d.pop_front();//pop element from front
    // d.pop_back();//pop element from front

    cout<<"front element: "<<d.front()<<endl;//print frong element
    cout<<"back element: "<<d.back()<<endl;//print last element

    cout<<"deque is empty or not: "<<d.empty()<<endl;//for check deque is empty=1 or not=0
    // d.erase(start,end) for erase elemnet;
    d.erase(d.begin(),d.begin()+1);//remove 1 element from start

    cout<<"ater erase: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}