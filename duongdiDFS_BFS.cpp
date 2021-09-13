


#include<bits/stdc++.h>
using namespace std;
class dothi{
	public: 
	int n,E, t,s;
	//int a[100][100];
	int truoc[1000];
	bool chuaxet[1000];
	vector<int> ke[1000];
	vector<int> kq;
	void init();
	void reset();
	void DFS(int u);
	void BFS(int u);
	int truyvet();
	void run();
	void print();
};
void dothi:: init(){
	cin>>n>>E>>t>>s;
	for(int i=1;i<=E;i++){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
}
void dothi::print(){
	for(int i=kq.size()-1; i>=0; i--) cout<<kq[i]<<' ';
	cout<<endl;
}
void dothi::reset(){
	for(int i=1;i<=n;i++) chuaxet[i]=true;
	kq.clear();

}
void dothi::DFS(int u){
	stack <int> st;
	st.push(u);
	//cout<<u<<" ";
	chuaxet[u]=false;
	while(!st.empty()){
		u=st.top();
		st.pop();
		//chuaxet[u]=false;
		for(int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if(chuaxet[v]){
				st.push(u);
				st.push(v);
				//cout<<v<<" ";
				chuaxet[v]=false;
				truoc[v]=u;
				break;
			}
		}
	}
}
void dothi:: BFS(int u){
	queue <int> q;
	q.push(u);
	//cout<<u<<" ";
	chuaxet[u]=false;
	while(!q.empty()){
		u=q.front();
		q.pop();
		//chuaxet[u]=false;
		for(int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if(chuaxet[v]){
				q.push(v);
				//cout<<v<<" ";
				chuaxet[v]=false;
				truoc[v]=u;
			}
		}
	}
}
int dothi::truyvet(){
	if(chuaxet[s]){
		//cout<<"-1"<<endl;
		return 0;
	}
	else if(chuaxet[t]){
		//cout<<"-1"<<endl;
		return 0;
	}
	else{
		kq.push_back(s);
		while(s!=t){
			s=truoc[s];
			kq.push_back(s);
		}
		
	}
	return 1;
}

void dothi:: run(){
	init();
	reset();
//	DFS(t);
//	if(truyvet()){
//		//cout<<"DFS path: ";
//		print();
//		
//	}
//	else{
//		cout<<"-1";
//		return;
//	}
//	
//	reset();
	BFS(t);
	
	if(truyvet()){
		//cout<<"BFS path: ";
		print();
	}
		else{
		cout<<"-1";
		return;
	}
	
//	print();
}
int main(){
	int T;
	cin>>T;
	while(T--){
		dothi dt;
		dt.run();	
	}
	
}


//
//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 100
//class dothi{
//    public:
//        int n, s, t, a[MAX][MAX], truoc[MAX];
//        bool chuaxet[MAX];
//        void readdata();
//        void init();
//        void DFS(int u);
//        void BFS(int u);
//        void duongdiDFS();
//        void duongdiBFS();
//};
//void dothi:: readdata(){
//    cin>>n>>s>>t;
//    for(int i=1;i<=n;i++)
//        for(int j=1;j<=n;j++) cin>>a[i][j];
//        
//}
//void dothi:: init(){
//    for(int i=1;i<=n;i++){
//        chuaxet[i]=true;
//    }
//    for(int i=1;i<=n;i++){
//        truoc[i]=0;
//    }
//}
//void dothi:: BFS(int u){
//    queue <int> Q;
//    chuaxet[u]=false;
//    Q.push(u);
//    while(!Q.empty()){
//        u=Q.front();
//        Q.pop();
//        for(int i=1;i<=n;i++){
//            if(a[u][i]&&chuaxet[i]){
//                Q.push(i);
//                chuaxet[i]=false;
//                truoc[i]=u;
//            }
//        }
//    }
//}
//void dothi::DFS(int u){
//    stack <int> st;
//    chuaxet[u]=false;
//    st.push(u);
//    while(!st.empty()){
//        u=st.top();
//        st.pop();
//        for(int i=1;i<=n;i++){
//            if(a[u][i]&&chuaxet[i]){
//                st.push(u);
//                st.push(i);
//                chuaxet[i]=false;
//                truoc[i]=u;
//                break;
//            }
//        }
//    }
//}
//void dothi::duongdiBFS(){
//    BFS(s);
//    if(truoc[t]==0){
//        cout<<"no path"<<endl;
//    }
//    else{
//        cout<<"BFS path: ";
//        cout<<t<<' ';
//        int u=truoc[t];
//        while(u!=s){
//            cout<<u<<' ';
//            u=truoc[u];
//        }
//        cout<<s<<endl;
//    }
//    
//}
//void dothi::duongdiDFS(){
//    DFS(s);
//    if(truoc[t]==0){
//        //cout<<"no path"<<endl;
//    }
//    else{
//        cout<<"DFS path: ";
//        cout<<t<<' ';
//        int u=truoc[t];
//        while(u!=s){
//            cout<<u<<' ';
//            u=truoc[u];
//        }
//        cout<<s<<endl;
//    }
//    
//}
//int main(){
//    dothi g;
//    g.readdata();
//    g.init();
//    g.duongdiDFS();
//    g.init();
//    g.duongdiBFS();
//    
//}
