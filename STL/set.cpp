#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
    //set have inly unoque value it have no reapeated value

    s.insert(5);//insert element in set
    s.insert(1);
    s.insert(5);
    s.insert(0);
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(6);

    //set is sorted element auotomatic
    // auto is a data type who store any type of data

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();//access of itratore;
    it++;//increase value

    s.erase(it);//erase or remove

    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not: "<<s.count(5)<<endl;//for check number is present or not

    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    return 0;
}