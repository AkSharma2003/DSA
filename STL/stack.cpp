#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> st;//creat string type stack 
    //stuck work lifo concept
    //lifo means last in first out
    st.push("Ankit");
    st.push("Kumar");
    st.push("Sharma");
    //You can not print stack all element directly
    //for print all element use pop methoad or copy methoad
    cout<<"top elemnt is: "<<st.top()<<endl;

    //print all element
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}