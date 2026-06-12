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

Node* nr=nullptr;
void flatten(Node* root){
    if(root==nullptr) return;

    flatten(root->right);
    flatten(root->left);
    root->left=nullptr;
    root->right=nr;
    nr=root;

}

int main(){
    vector<int> v={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root=buildNode(v);
    cout<<"Root="<<root->data<<endl;
    cout<<"left="<<root->left->data<<endl;
    cout<<"Right="<<root->right->data<<endl;
    
    return 0;
}
