#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void addNode(Node* &head, int data){
    if(head==nullptr){
        head=new Node(data);
        return;
    }
    Node* temp=new Node(data);
    head->next=temp;
    head=temp;
}



void printData(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node* node=new Node(4);
    Node* temp=node;

    addNode(node,2);
    addNode(node,13);
    addNode(node,22);
    addNode(node,5);
    addNode(node,3);
    addNode(node,11);
    addNode(node,17);

    printData(temp);
    temp=node;
    Node* ans=rever(temp,2);
    printData(ans);

    return 0;
}