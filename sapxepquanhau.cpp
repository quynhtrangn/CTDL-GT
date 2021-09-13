#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int n,s;
bool Left[100];
bool Right[100];
bool chuaxet[100];
void khoitao(){
	for(int i=0;i<=n;i++){
		Left[i]= false;
		Right[i]= false;
		chuaxet[i]=true;
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!Left[i+j-1]&&!Right[i-j+n]&&chuaxet[j]){
			Left[i+j-1]=true;
			Right[i-j+n]=true;
			chuaxet[j]=false;
			if(i==n) s++;
			else Try(i+1);
			Left[i+j-1]=false;
			Right[i-j+n]=false;
			chuaxet[j]=true;
		}
	}
}
void run(){
	cin>>n;
	khoitao();
	s=0;
	Try(1);
	cout<<s;
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

