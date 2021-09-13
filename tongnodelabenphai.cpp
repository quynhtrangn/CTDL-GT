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
       if (isLeaf(root->right))
            res += root->right->data;
       else 
            res += Sum(root->right);
       res += Sum(root->left);
    }
    return res;
}
int calculateSumOfRightLeave(node *tree){
	int res=0;
	if(tree!= NULL){
		if(tree->right!=NULL&&tree->right->left==NULL&&tree->right->right==NULL){
	        res+= tree->right->data;
	    }
	    else{
	    	res+=calculateSumOfRightLeave(tree->right);
		}
		res+=calculateSumOfRightLeave(tree->left);	
	}
    
	return res;
}
void run(){
	int u,v; char x;
	cin>>n;
	node *root =NULL;
	map<int,node*> dd;
	for(int i=0;i<n;i++){
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
	cout<<calculateSumOfRightLeave(root);
}
int main()
{
	int T;
    cin>>T;
    while(T--){
    	run();
    	cout<<endl;
	} 
 	return 0;
}

