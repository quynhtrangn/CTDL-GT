// #include<bits/stdc++.h>
// using namespace std;
// int n;
// struct node{
// 	int data;
// 	node* left;
// 	node* right;
// };
// node* newNode(int data)
// {
//     node* p = new node();
//     p -> data = data;
//     p -> left = NULL;
// 	p -> right = NULL;
//     return p;
// };

// bool isLeaf(node *p)
// {
//    if (p == NULL)
//        return false;
//    if (p->left == NULL && p->right == NULL)
//        return true;
//    return false;
// }

// bool isFather(node *p)
// {
//    if (p == NULL)
//        return false;
//    if (p->left != NULL && p->right != NULL)
//        return true;
//    return false;
// }
// bool checkFullTree(node* tree){
//     if(tree->left == NULL && tree->right == NULL){
//         return true;
//     }
//     if(tree->left != NULL && tree->right != NULL) return checkFullTree(tree->left) && checkFullTree(tree->right);
//     return false;
// }


// void run(){
// 	int u,v; char x;
// 	cin>>n;
// 	node *root =NULL;
// 	map<int,node*> dd;
// 	for(int i=0;i<n;i++){
// 		cin>>u>>v>>x;
//         if(dd.find(u) == dd.end()){
//             node* tmp = newNode(u);
//             dd[u] = tmp;
//             if(root == NULL) root = tmp;
//         }
//         node* Node = dd[u];
//         node* ans = newNode(v);
//         if(x == 'L'){
//         	Node->left = ans;
// 		} 
//         else{
//         	Node->right = ans;
// 		} 
//         dd[v] = ans;
//     }
// 	if(checkFullTree(root)){
//         cout << "1";
//     } else cout << "0";
// }
// int main()
// {
// 	int T;
//     cin>>T;
//     while(T--){
//     	run();
//     	cout<<endl;
// 	} 
//  	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node*right;
};
Node* newNode(int u){
    Node* tmp= new Node();
    tmp->data= u;
    tmp->left= tmp->right= NULL;
    return tmp;
}
bool checkFullTree(Node* root){
    if(root->left==NULL&& root->right==NULL) return true;
    if(root->left!=NULL&& root->right!=NULL) return checkFullTree(root->left)&&checkFullTree(root->right);
    return false;
}
void run(){
    int n;
    cin>>n;
    int u,v;
    char x;
    map<int, Node*> leaf;
    Node* root=NULL;
    for(int i=0;i<n;i++){
        cin>>u>>v>>x;
        if(leaf.find(u)== leaf.end()){
            Node* tmp = newNode(u);
            leaf[u]= tmp;
            if(root==NULL) root= tmp;
        }
        Node* node = leaf[u];
        Node* ans= newNode(v);
        if(x=='L')  node->left= ans;
        else node->right=ans;
        leaf[v]= ans;
    }
    if(n%2==1) cout<<0<<endl;
    else if(checkFullTree(root)){
        cout<<1<<endl;
    }
    else cout<<0<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        run();
    }

}