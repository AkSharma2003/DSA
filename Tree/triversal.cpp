//there are three type of triversiol
// 1. preoreder
// 2. postOrder
// 3. inOrder

// ane ome another methoad -> LevelOrder


#include<iostream>
using namespace std;
#include<vector>
#include<queue>

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

// Preorder-> Root, Left, Right (1,2,3,4,5)
void PreOrder(Node* root){
    if(root==nullptr) return;

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

// Inorder Triversal; -> Left, Root, Right
void InOrder(Node* root){
    if(root==nullptr) return;

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

// Inorder Triversal; -> Left, Right, Root
void PostOrder(Node* root){
    if(root==nullptr) return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

//LevelOrder
void LevelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()){
        Node* cur=q.front();
        cout<<cur->data<<" ";
        q.pop();

        if(cur->left!=nullptr){
            q.push(cur->left);
        }
        if(cur->right!=nullptr){
            q.push(cur->right);
        }
    }
    
}

int main(){
    vector<int> v={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root=buildNode(v);
    cout<<"Root="<<root->data<<endl;
    cout<<"left="<<root->left->data<<endl;
    cout<<"Right="<<root->right->data<<endl;

    cout<<"Preorder Triversal: ";
    PreOrder(root);
    cout<<endl;

    cout<<"InOrder Triversal: ";
    InOrder(root);
    cout<<endl;

    cout<<"PosrOrder Triversal: ";
    PostOrder(root);
    cout<<endl;

    cout<<"LevelOrder Triversal: ";
    LevelOrder(root);
    cout<<endl;

    return 0;
}





 