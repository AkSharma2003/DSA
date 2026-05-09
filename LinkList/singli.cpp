# include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr; // you can also use NULL
    }
};

void inserAtHead(Node* &head,int data){
    if(head==nullptr){
        head=new Node(data);
        return;
    }
    Node* node=new Node(data);
    node->next=head;
    head=node;
}

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void insertAtMid(Node* &head,int pos,int data){
    Node* node=new Node(data);
    if(pos<0){
        inserAtHead(head,data);
        return;
    }
    Node* temp=head;
    while(temp!=nullptr && pos>0){
        pos--;
        temp=temp->next;
    };
    if(pos!=0){
        cout<<"this is not vailid position"<<endl;
        return;
    }
    if(temp!=nullptr){
        node->next=temp->next;
    }
    temp->next=node;
    
}

void deleteNodeUsingVAlue(Node* &head,int data,Node* tail){
    Node* prev=NULL;
    Node* curr=head;

    if(head->data==data){
        head=curr->next;
        curr->next=NULL;
        delete curr;    
        return;
    }
    
    while(curr!=nullptr){
        if(data==curr->data){
            if(curr->next==nullptr){
                tail=curr;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
            return;
        }else{
            prev=curr;
            curr=curr->next;
        }
    }
    cout<<data<<" is not present in this linklist"<<endl;
}

void printData(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(5);
    Node* head1=node1;
    Node* tail1=node1;

    inserAtHead(head1,4);
    inserAtHead(head1,6);
    inserAtHead(head1,7);
    inserAtHead(head1,8);
    // insert at tail
    insertAtTail(tail1,10);
    // insert at mid
    insertAtMid(head1,0,11);
    printData(head1);

    deleteNodeUsingVAlue(head1,10,tail1);
    printData(head1);
    cout<<"tail="<<tail1->data<<endl;
    cout<<"head="<<head1->data<<endl;
    return 0;
}  