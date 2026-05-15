# include<iostream>
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

void addNode(Node* &head,int data){
    if(head==nullptr){
        head=new Node(data);
        return;
    }
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void printMide(Node* &head,int ct){
    Node* temp=head;
    for(int i=1;i<ct/2;i++){
        temp=temp->next;
    }
    if(ct%2!=0){
        temp=temp->next;
    }
    cout<<"Mid value of this list is: "<<temp->data<<endl;
    
}

int count(Node* &head){
    Node* temp=head;
    int ct=0;
    while (temp)
    {
        ct++;
        temp=temp->next;
    }
    return ct;
}

void printData(Node* &head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node=new Node(5);
    addNode(node,12);
    addNode(node,2);
    addNode(node,23);
    addNode(node,45);
    addNode(node,30);
    addNode(node,40);

    printMide(node,count(node));
    
    return 0;
}