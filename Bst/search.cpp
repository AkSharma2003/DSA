#include<iostream>
#include<vector>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

Node* insertVal(Node* root, int val){
    if (root==nullptr) return new Node(val);
    if(val<root->data) root->left=insertVal(root->left, val);
    else root->right=insertVal(root->right, val);

    return root;
}

Node* buildBST(vector<int> v){
    Node* root=nullptr;
    for(int i:v){
        root=insertVal(root,i);
    }
    return root;
}

void printRoot(Node* temp){
    if(temp == nullptr) return;

    printRoot(temp->left);
    cout << temp->data << " ";
    printRoot(temp->right);

    cout<<endl;
}

bool is_present(Node* root,int val){
    if(root==nullptr) return false;
    if(root->data==val) return true;
    else if(root->data>val) return is_present(root->left,val);
    else return is_present(root->right,val);

    return false;
}

int main(){
    vector<int> arr={3,2,1,5,6,4};
    Node* root=buildBST(arr);

    cout<<is_present(root,8 );
    cout<<endl;
    return 0; 
}


  