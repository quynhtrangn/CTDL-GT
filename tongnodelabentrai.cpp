#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* p = new node();
    p -> data = data;
    p -> left = NULL;
	p -> right = NULL;
    return p;
};

bool isLeaf(node *p)
{
   if (p == NULL)
       return false;
   if (p->left == NULL && p->right == NULL)
       return true;
   return false;
}
int Sum(node *root){
    int res = 0;
    if (root != NULL)
    {
       if (isLeaf(root->left))
            res += root->left->data;
       else 
            res += Sum(root->left);
       res += Sum(root->right);
    }
    return res;
}

void Run(){
    cin>>n;
	int u, v; char x;
    node *root = NULL;
    map<int, node*> dd;
    for(int i=0; i<n; i++){
        cin>>u>>v>>x;
        if(dd.find(u) == dd.end()){
            node* tmp = newNode(u);
            dd[u] = tmp;
            if(root == NULL) root = tmp;
        }
        node* Node = dd[u];
        node* ans = newNode(v);
        if(x == 'L'){
        	Node->left = ans;
		} 
        else{
        	Node->right = ans;
		} 
        dd[v] = ans;
    }
    cout <<Sum(root);
}
int main()
{
    int T;
    cin>>T;
    while(T--){
    	Run();
    	cout<<endl;
	} 
    return 0;
}
