#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 
class node{
    public:

    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        left = right =NULL;
    }
};
static int idx=-1;
node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    node* currNode = new node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
  
    return currNode;

}
void levelOrder(node* root ){
    if(root==NULL){
        return ;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* curr = q.front();
        q.pop();

        cout << curr->data <<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
         if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}
void levelOrder2(node* root ){
    if(root==NULL){
        cout<<endl;
        return ;
    }
    queue<node*> q;

    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* curr = q.front();
        q.pop();
       if(curr == NULL){
        cout<<endl;
        if(q.empty()){
            break;
        }
         q.push(NULL);
       }else{
        cout << curr->data <<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
         if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
    cout<<endl;
}

int main(){
    vector<int> nodes ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root = buildTree(nodes);
    cout << root->data <<endl;
    levelOrder(root);
}