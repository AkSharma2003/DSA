# include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=nullptr;
    }
};

void addData(Node* &head,int data){
    if(head==nullptr){
        head=new Node(data);
        return;
    }
    Node* temp=new Node(data);

    temp->next=head;
    head=temp;

}

Node* reverse(Node* head){
    Node* rev=nullptr;
    while(head){
        addData(rev,head->data);
        head=head->next;
    }
    return rev;
}

void printData(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node=nullptr;
    addData(node,5);
    addData(node,10);
    addData(node,15);
    addData(node,12);
    addData(node,20);
    addData(node,16);

    cout<<"main linklist is: ";
    printData(node);

    cout<<"Reverse linklist is: ";
    printData(reverse(node));

    return 0;
}