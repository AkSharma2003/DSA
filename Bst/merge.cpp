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
}

vector<int> join(vector<int> v1,vector<int> v2){
    int n=v1.size();
    int i=0,j=0;

    vector<int> sample;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            sample.push_back(v1[i]);
            i++;
        }
        else{
            sample.push_back(v1[j]);
            j++;
        }
    }

    while(j<v2.size()){
        sample.push_back(v2[j++]);
    }
     while(j<v2.size()){
        sample.push_back(v1[i++]);
    }

    return sample;
}

int main(){
    vector<int> arr1={2,4,5,9};
    vector<int> arr2={3,8,6,1,7}; 

    Node* root1=buildBST(arr1);
    Node* root2=buildBST(arr2);
    printRoot(root1);
    cout<<endl;
    printRoot(root2);
    cout<<endl;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    vector<int> ans=join(arr1,arr2);
    Node* root3=buildBST(ans);
    printRoot(root3);
    return 0; 
}


