#include<bits/stdc++.h>
using namespace std;
bool chuaxet[105];
bool check;
int s,n;
int a[1000];
void Try(int i, int sum){
	if(sum =s-sum){
		check=true;
		return;
	}
	else{
		for(int j=i;j<n;j++){
			if(!check&&chuaxet[j]){
				chuaxet[j]=false;
				Try(j,sum+a[j]);
				chuaxet[j]=true;
			}
		}
	}
}
void run(){
	cin>>n;
	check=false;
	s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
		chuaxet[i]=true;
	}
	if(s%2!=0) cout<<"NO";
	else{
		int i=0, sum=a[0];
		Try(1,sum);
		if(check) cout<<"YES";
		else cout<<"NO";
	}
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

