#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;//creat queuq
    //queue work fifo concept
    //fifo means first in first out

    q.push("Ankit");
    q.push("Kumar");
    q.push("Sharma");

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}