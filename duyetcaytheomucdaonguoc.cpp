#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int> KQ; 
int n,u,v;
struct node{
    int data;
    node* left;
    node* right;
};

node* Root(int data)
{
    node* p = new node();
    p -> data = data;
    p -> left = NULL ;
	p -> right = NULL;
    return p;
};

void handle(vector< node* > s){
 	int i,j,m;
 	if (s.empty()) return ;
 	vector< node* > a;
	for (i=0;i<s.size();i++) {
		KQ.push_back(s[i]->data);
		
		if (s[i]->right!=NULL){
			a.push_back(s[i]->right);
		} 
		if (s[i]->left!=NULL){
			a.push_back(s[i]->left);
		} 
	}
	handle(a);
	return ;
} 

void run(){
	char x;;
	cin>>n;
	node* root = NULL;
	map <int, node*> s;
	vector < node* > a;
	for(int i=0; i<n; i++){
       	cin>>u>>v>>x;
    	if(s.find(u) == s.end()){
        	node* tmp = Root(u);
        	s[u] = tmp;
        	if(root == NULL) root = tmp;
    	}
    	node* res = Root(v);
    	if(x == 'L'){
    		s[u]->left = res;
		} 
    	else{
    		s[u]->right = res;
		} 
	    s[v] = res;
	}
	a.push_back(root);
	handle(a);
	for(int i=KQ.size()-1;i>=0;i--) cout<<KQ[i]<<" ";
	cout<<endl;
	a.clear();
	KQ.clear();
}

int main()
{
    int T;
    cin>>T;
    while(T--) {
    	run();
	}
    return 0;
}
