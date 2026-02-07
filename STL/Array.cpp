#include<iostream>
#include<array>
using namespace std;

int main(){
    //normal array
    int basic[4]={1,2,3,4};
    cout<<"basic array is: "<<endl;
    for(int i=0;i<4;i++){
        cout<<basic[i]<<" ";
    }
    cout<<endl;

    //stl array
    //array<data Type , size> name;
    array<int,4> a={1,2,3,4};
    int size=a.size();//for size
    cout<<"Stl Array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;//for gating element
    cout<<"Empty or not: "<<a.empty()<<endl;//for check array is empty=1 or not=0
    cout<<"First element: "<<a.front()<<endl;//for find first element
    cout<<"last element: "<<a.back()<<endl; //for find last element

    return 0;
}