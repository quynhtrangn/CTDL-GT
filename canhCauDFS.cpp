#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
struct edg{
	int n1, n2;
};
class dothi{
	public:
		int V,E;
		vector<int> ke[MAX];
		vector<int> res;
		bool chuaxet[MAX];
		void BFS(int f, int s);
		void init();
		void readdata();
		void reset();
		void erase();
		void add();
		void run();
};
void dothi::readdata(){
	cin>>V>>E;
	for(int i=1;i<=E;i++){
		int u,v;
		cin>>
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		
		cout<<endl;
	}
	
}


//
//#include <bits/stdc++.h>
//#define Max 100
//using namespace std;
//class Dothi{
//    int n;
//    int a[Max][Max];
//    public:
//    bool chuaxet[Max];
//    void init();
//    void readdata();
//    void DequyDFS(int u);
//    void duyetcau();
//};
//void Dothi :: readdata(){
//    cin >>n;
//    for(int i=1; i<=n ; i++){
//        for(int j=1; j<=n; j++){
//            cin >> a[i][j];
//        }
//    }
//}
//void Dothi :: init(){
//    for(int i=1; i<=n; i++){
//        chuaxet[i]=true;
//    }
//}
//void Dothi :: DequyDFS(int u){
//    chuaxet[u]=false;
//    for(int v=1; v<=n; v++){
//        if(a[u][v]==1 && chuaxet[v]== true){
//            DequyDFS(v);
//        }
//    }
//}
//void Dothi :: duyetcau(){
//    init();
//    for(int i=1; i<=n; i++){
//        for(int j=i+1; j<=n; j++){
//            if(a[i][j]== 1){
//                a[i][j]=0;
//                a[j][i]=0;
//                DequyDFS(1);
//                for(int k=1; k<=n; k++){
//                    if(chuaxet[k]== true){
//                        cout << i<<" "<<j<<endl;
//                        break;
//                    }
//                }
//			                a[i][j]=1;
//			                a[j][i]=1;
//			                init();
//            }
//        }
//    }
//}
//    
//    
//int main(){
//    Dothi g;
//    g.readdata();
//    g.duyetcau();
//    
//}

//#include<bits/stdc++.h>
//using namespace std;
//class dothi{
//    public:
//        int n;
//        int a[100][100];
//        bool chuaxet[100];
//        void readdata();
//        void init();
//        void DFS(int u);
//        void duyetcau();
//};
//void dothi::readdata(){
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            cin>>a[i][j];
//        }
//    }
//}
//void dothi::init(){
//    for(int i=1;i<=n;i++) chuaxet[i]=true;
//}
//void dothi::DFS(int u){
//    chuaxet[u]=false;
//    for(int i=1;i<=n;i++){
//        if(chuaxet[i]&&a[u][i]==1){
//            DFS(i);
//        }
//    }
//}
//void dothi::duyetcau(){
//    init();
//    for(int i=1;i<=n;i++){
//        for(int j=i+1;j<=n;j++){
//            if(a[i][j]==1){
//                a[i][j]=0;
//                a[j][i]=0;
//                DFS(1);
//                for(int tmp=1;tmp<=n;tmp++){
//                    if(chuaxet[tmp]==true){
//                        cout<<i<<" "<<j<<endl;
//                    }
//                }
//                a[i][j]=1;
//                a[j][i]=1;
//                init();
//            }
//        }
//    }
//}
//int main(){
//    dothi g;
//    g.readdata();
//    g.duyetcau();
//}
