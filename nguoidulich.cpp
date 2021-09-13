#include<bits/stdc++.h>
using namespace std;
int chiphi[20][20];
bool chuaxet[20];
int x[10000];
int moneyMin;
int n,s=0;
int money=100000;
int res=10000000;

void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>chiphi[i][j];
			if(chiphi[i][j]) moneyMin=min(money,chiphi[i][j]);
		}
	}
}
void back_track(int i){
	if(s+moneyMin*(n-i+1)>=res) return;
	for(int j=1;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j;
			chuaxet[j]=false;
			s+=chiphi[x[i-1]][j];
			if(n==i){
				if(s+chiphi[x[n]][x[1]]<res){
					res=s+chiphi[x[n]][x[1]];
					
				}
			}
			else{
				back_track(i+1);
			}
			s-=chiphi[x[i-1]][j];
			chuaxet[j]=true;
		}
	}
}
int main()
{
	init();
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
	}
	chuaxet[1]=false;
	x[1]=1;
	back_track(2);
	cout<<res;
 	return 0;
}

