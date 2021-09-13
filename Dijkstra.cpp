#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define INF 1000000

class dothi{
	public:
		int a[MAX][MAX],n;
		bool chuaxet[MAX];
		int s, truoc[MAX],d[MAX];
		void readdata();
		void init(int s);
		void Dijkstra(int s);
};
void dothi:: readdata(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]==0){
				a[i][j]=INF;
			}
		}
	}
}

void dothi::init(int s){
	for(int i=1;i<=n;i++){
		d[i]= a[s][i];
		truoc[i]=s;
		chuaxet[i]=true; 	
	}
	d[s]=0;
	chuaxet[s]=false;
}
void dothi:: Dijkstra(int s){
	init(s);
	for(int i=1;i<=n;i++){
		if(chuaxet[i]){
			int u=0,du=INF;
			for(int z=1;z<=n;z++){
				if(chuaxet[z]==true&&d[z]<du){
					u=z;
					du=d[z];
				}
			}
			if(u!=0){
				chuaxet[u]=false;
				for(int v=1;v<=n;v++){
					if(chuaxet[v]&&d[v]>du+a[u][v]){
						d[v]=du+a[u][v];
						truoc[v]=u;
					}
				}
			}
			else{
				chuaxet[i]=false;
			}
			i=0;
		}
	}
	for(int t=1;t<=n;t++){
		if(d[t]==INF){
			cout<<"\nK/c "<<s<<" -> "<<t<<" = INF;";
		}
		else{
            cout<<"\nK/c "<<s<<" -> "<<t<<" = "<<d[t]<<"; ";
            cout<<"\t"<<t<<" <- ";
            int truoctmp=truoc[t];
            while(truoctmp!=s){
                cout<<truoctmp<<" <- ";
                truoctmp=truoc[truoctmp];
            }
            cout<<s;
        }
	}
}

int main()
{
	dothi g;
    g.readdata();
    g.Dijkstra(g.s);
 	return 0;
}

