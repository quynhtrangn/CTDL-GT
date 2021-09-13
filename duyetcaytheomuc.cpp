#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int u){
    Node* tmp;
    tmp= new Node();
    tmp->left=tmp->right= NULL;
    return tmp;
}
void duyet(Node* root){
    if(root!=NULL) cout<<root->data;
    if
}
void run(){
    int n;
    cin>>n;
    int u,v,x;
    map<int, Node*> leaf;
    Node*root = NULL;
    for(int i=0;i<n;i++){
        cin>>u>>v>>x;
        if(leaf.find(u)==leaf.end()){
            Node* tmp= newNode(u);
            leaf[u]= tmp;
            if(root==NULL) root= tmp;
        }
        Node* node= leaf[u];
        Node* ans= newNode(v);
        if(x=='L') node->left= ans;
        else node->right = ans;
        leaf[v]= ans;
    }

}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
    }
}