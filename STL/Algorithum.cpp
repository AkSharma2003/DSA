#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    // v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout<<"Finding 6 using binary search: "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound of this vector is "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper bound of this vector is "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a=5;
    int b=6;

    cout<<"max in both number : "<<max(a,b)<<endl;//find maximum 
    cout<<"min in both number: "<<min(a,b)<<endl;//find minimun

    swap(a,b);//for swaping
    cout<<"aftre swaping a: \n"<<a<<endl;
    cout<<"aftre swaping b: \n"<<b<<endl;

    string s="abcde";

    reverse(s.begin(),s.end());//for reverse
    cout<<"string after reverse: "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"string after rotating: \n";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"sfter sorting: "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;



    return 0;
}
