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

void insertNode(Node* &head,int data){
    Node* temp=new Node(data);
    if(head==nullptr){
        temp->next=temp;
        head=temp;
        return;
    }

    temp->next=head->next;
    head->next=temp;
    head=temp;
}

void printElement(Node* &head){
    if(head==nullptr) return;
    Node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (head!=temp);
    cout<<endl;
}

int countNode(Node* head){
    if(head==nullptr) return 0;
    Node* temp=head;
    int ct=0;
    do{
        ct++;
        temp=temp->next;
    }while(temp!=head);

    return ct;
}

bool dataPresent(Node* &head,int data){
    if(head==nullptr) return false;
    Node* temp=head;
    do{
        if(data==temp->data) return true;
        temp=temp->next;
    }while(temp!=head);
    return false;
}

void deleteNode(Node* head, int data){
    if(head==nullptr) return;
    Node* prev=nullptr;
    Node* temp=head;
    do{
        prev=temp; 
        if(data==temp->data){
            prev->next=temp->next;
        }
    }
}

int main(){
    Node* node1=nullptr;
    Node* head=node1;

    insertNode(head,13);
    insertNode(head,16);
    insertNode(head,112);
    insertNode(head,5);
    insertNode(head,15);
    insertNode(head,50);
    insertNode(head,35);

    printElement(head);
    cout<<"Number of element in this node is "<<countNode(head)<<endl;
    cout<<"Cheak that 13 is present or not in this node: "<<dataPresent(head,13)<<endl;


    return 0;
}