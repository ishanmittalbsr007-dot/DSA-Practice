#include<iostream>
#include<vector>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = right = NULL;
    }
};
   static int idx = -1;
    node* buildTree(vector<int> nodes){
        idx++;
        if(nodes[idx]==-1){
            return NULL;
        }

       node* currNode = new node(nodes[idx]);
            currNode->left= buildTree(nodes);
            currNode->right= buildTree(nodes);
            return currNode;
        }

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int leftHT =height(root->left);
    int rightHT = height(root->right);
    int curr =max(leftHT,rightHT)+1;
    return curr;
}

int main(){
    vector<int> nodes ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root = buildTree(nodes);
    cout << root->data <<endl;
    cout<<"height of tree : "<<height(root)<<endl;
    height(root);
}
