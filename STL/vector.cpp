#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    //with size
    vector<int> v1(5);//5 element with 0 value
    vector<int> v2(5,2);//5 element with 2 value

    cout<<"Vector with size 5 and default value 0: \n";
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl; 
    cout<<"Vector with size 5 and default value 2: \n";
    for(int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity: "<<v.capacity()<<endl; //0 becouse no element
    v.push_back(1);//for add element;
    cout<<"capacity: "<<v.capacity()<<endl; //1 becouse one element
    v.push_back(2);//for add element;
    cout<<"capacity: "<<v.capacity()<<endl; //2*1=2 becouse two element
    v.push_back(3);//for add element;
    cout<<"capacity: "<<v.capacity()<<endl; //2*2=4 becouse two element
    //capacity is you can add max element;
    //size is number of avelable element
    cout<<"size: "<<v.size()<<endl;
    // indexing start from 0

    cout<<"Element in 2nd indx: "<<v.at(2)<<endl;//indexing element
    cout<<"front Element: "<<v.front()<<endl;//front element
    cout<<"last element: "<<v.back()<<endl;//last element
    
    cout<<"befor pop element: \n";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();//remove last element
    cout<<"after pop element: \n";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.clear();//remove all element size become 0 but capacity same
    cout<<"begin iterator: "<<*v.begin()<<endl;//return iterator to first element
    cout<<"end iterator: "<<*v.end()<<endl;//return iterator to last element +1 without pop any element return 0;

    return 0;
}
