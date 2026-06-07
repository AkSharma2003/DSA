#include<iostream>
using namespace std;
#include<vector>

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }

};

static int idx=-1;
Node* buildNode(vector<int> v){
    idx++;
    if(v[idx]==-1){
        return nullptr;
    }

    Node* root=new Node(v[idx]);
    root->left=buildNode(v);
    root->right=buildNode(v);

    return root;
}

vector<int> morrisInOrder(Node* root){
    Node* curr=root;
    vector<int> ans;
    while(curr){
        if(curr->left==nullptr){
            ans.push_back(curr->data);
            curr=curr->right;
        }
        else{
            Node* temp=curr->left;
            while(temp->right!=nullptr && temp->right!=curr){
                temp=temp->right;
            }

            if(temp->right==nullptr){
                temp->right=curr;
                curr=curr->left;
            }
            if(temp->right==curr){
                temp->right=nullptr;
                ans.push_back(curr->data);
                curr=curr->right;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root=buildNode(v);
    cout<<"Root="<<root->data<<endl;
    cout<<"left="<<root->left->data<<endl;
    cout<<"Right="<<root->right->data<<endl;
    cout<<endl<<"new vector:"<<endl;

    vector<int> ans=morrisInOrder(root);

    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}
