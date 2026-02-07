#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heep bydefoult
    priority_queue<int> maxi;

    //min heep
    priority_queue<int,vector<int>,greater<int> > mini;

    maxi.push(1);//push element in maxi
    maxi.push(3);//push element
    maxi.push(5);//push element
    maxi.push(4);//push element

    //after pushing all element automatic sorted

    int n=maxi.size();//return size of maxi queue
    cout<<"size of maxi queue: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";//return top element of priority queue
        maxi.pop();//pop element
    }cout<<endl;

    mini.push(5);//push element in mini queue
    mini.push(4);//push element
    mini.push(1);//push element
    mini.push(6);//push element
    mini.push(2);//push element

    int m=mini.size();//return size of mini queque
    cout<<"size of mini queue: "<<m<<endl;
    
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";//return top element of priority queue
        mini.pop();//pop element
    }cout<<endl;

    return 0;
}