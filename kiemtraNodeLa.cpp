//#include<bits/stdc++.h>
//using namespace std;
//typedef struct node{
//	int data;
//	struct node *left;
//	struct node *right;
//} *Tree ;
//
//void init(Tree *t){
//	t= NULL;
//}
//
//Tree GetNode(){
//	Tree p;
//	p= new node;
//	return (p);
//}
//
//int FreeEmpty(Tree *t){
//	if(*t==NULL){
//		return 1;
//	}
//	return 0;
//}
//Tree MakeNode(int data){
//	Tree p;
//	p=GetNode();
//	p->data=data;
//	p->left=NULL;
//	p->right=NULL;
//	return (p);
//}
//Tree Make_Root(Tree t, int x){
//	if(t==NULL){
//		MakeNode(x);
//	}
//	return (t);
//}
//Tree Search(Tree t, int x) {
//	Tree p;
//	if( t->data==x)
//		return t;
//	if(t==NULL) 
//		return NULL;
//	p = Search(t->left, x); 
//	if ( p ==NULL) 
//		p = Search(t->right,x); 
//	return p;
//}
//void Add_left(Tree t, int data1, int data2){
//	Tree p,q;
//	p= Search(t,data1);
//	if(p==NULL){
//		return;
//	}
//	else if((p->left)!=NULL){
//		return;
//	}
//	else{
//		q= MakeNode(data2);
//		p->left=q;
//	}
//}
//
//void Add_right(Tree t, int data1, int data2){
//	Tree p,q;
//	p= Search(t,data1);
//	if(p==NULL){
//		return;
//	}
//	else if((p->right)!=NULL){
//		return;
//	}
//	else{
//		q= MakeNode(data2);
//		p->right=q;
//	}
//}
//void xuat(Tree a){
//	cout<<a->data;
//	xuat(a->left);
//	xuat(a->right);
//}
//int main()
//{
//	int T;
//	cin>>T;
//	while(T--){
//		int n;
//		cin>>n;
//		Tree *t;
//		init(t);
//		for(int i=0;i<n;i++){
//			int u,v;
//			char x;
//			cin>>u>>v>>x;
//			int tmp;
//			if(FreeEmpty(t)){
//				Make_Root(*t,u);
//				xuat(*t);
//			}
//			else{
//				
//			}
//		}
//		
//	}
// 	return 0;
//}
//
//

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
bool isLeaf(Node* x){
	if(x->data==NULL) return false;
	if(x->left==NULL&&x->right==NULL) return true;
	return false;
}
Node* newNode(int u){
	Node* tmp= new Node();
	tmp->data= u;
	tmp->left = tmp->right=NULL;
	return tmp;
}
void run(){
	int n;
	cin>>n;
	int u,v;
	char x;
	map<int,Node*> leaf;
	Node* root= NULL;
	for(int i=0;i<n;i++){
		cin>>u>>v>>x;
		if(leaf.find(u)==leaf.end()){ // 10 20 L   10 30 R    20 40 L   20 60 R
			Node* tmp;
			tmp =newNode(u);
			leaf[u]= tmp;
			if(root==NULL) root= tmp;
		}
		Node* node = leaf[u];
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
		cout<<endl;
	}
}

