#include<iostream>
using namespace std;

class ListNode{
    int data;
    ListNode* next;
    
    ListNode(int data){
        this->data=data;
        this->next=nullptr;
    }

    void addNode(ListNode* &head,int data){
        if(head==nullptr){
            head=new ListNode(data);
        }
        ListNode* temp=new ListNode(data);
        ListNode* sec=head;
        while(sec->next!=nullptr){
            sec=sec->next;
        }
    }
};

void mergeShort(ListNode*){
    int ct=0;
}

int main(){



    return 0;
}