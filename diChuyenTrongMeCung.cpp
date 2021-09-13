#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
vector<string> str;
bool ok= false;
void backtrack(int i, int j, string s){
	if(i==1&&j==1&&a[i][j]==0){
		ok=false;
		return;
	}
	if(i==n&&j==n&&a[i][j]){
		ok=true;
		str.push_back(s);
		return;
	}
	if(i<n&&a[i+1][j]){
		backtrack(i+1,j,s+"D");
	}
	if(j<n&&a[i][j+1]){
		backtrack(i,j+1,s+"R");
	}
	if(i<n&&j<n&&!a[i+1][j]&&!a[i][j+1]||j>n||i>n){
		return;
	}
}
void handle(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	str.clear();
	ok=false;
	backtrack(1,1,"");
	if(ok==false){
		cout<<-1<<endl;
	}
	else{
		sort(str.begin(),str.end());
		for(int i=0;i<str.size();i++){
			cout<<str[i]<<" ";
		}
		cout<<endl;
	}
}
void run(){
	int T; cin>>T;
	while(T--){
		handle();
	}
}
int main()
{
	run();
 	return 0;
}

