#include<iostream>
using namespace std;

class Stk{
    public:
    int data;
    Stk* next;

    Stk(int data){
        this->data=data;
        this->next=nullptr;
    }
    void push(Stk* &head,int data){
        if(head==nullptr){
            head= new Stk(data);
        }
        Stk* temp=new Stk(data);
        temp->next=head;
        head=temp;
    }

    int pop(Stk* &head){
        if(head==nullptr) cout<<"Stak is empty"<<endl;
        Stk* temp=head;
        head=head->next;
        int data=temp->data;
        delete temp;
        return data;

    }

    int size(Stk* &head){
        Stk* temp=head;
        int ct=0;
        while(temp){
            ct++;
            temp=temp->next;
        }
        return ct;
    }

    int top(Stk* &head){
        return head->data;
    }

    bool isEmpty(Stk* head){
        return head==nullptr;
    }
};

int main(){
    Stk* head=nullptr;
    Stk s(5);

    s.push(head,3);
    s.push(head,5);
    s.push(head,7);

    cout<<"Top is: "<<s.pop(head)<<endl;
    cout<<"size: "<<s.size(head)<<endl;
    cout<<"top: "<<s.top(head)<<endl;
    cout<<"isEmpty: "<<s.isEmpty(head)<<endl;






    return 0;
}