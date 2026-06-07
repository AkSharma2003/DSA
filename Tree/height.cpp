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

int height(Node* root){
    if(root==nullptr) return 0;

    return(max(height(root->left),height(root->right))+1);
}

int main(){
    vector<int> v={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root=buildNode(v);
    cout<<"height of Tree is:"<<height(root)<<endl;

    return 0;
}
