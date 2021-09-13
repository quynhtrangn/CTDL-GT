#include<bits/stdc++.h>
using namespace std;
int n;
vector <string> ans1;
int a[20][20];
bool checked[100];
void Try(int i){
	for(int j=1;j<=n;j++){
	
	}
}

void reset(){
	for(int i=0;i<n;i++){
		checked[i]= false;
	}
}
void run(){
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=0;j<n;i++){
			cin>>a[i][j];	
		}
	}
	Try(0);
	
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

