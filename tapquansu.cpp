#include<bits/stdc++.h>
using namespace std;// 123
int n,k, a[50];		// 012
bool check;
int b[50];
void sinh(){
	int i=k-1;//2
	while(a[i]==n-k+i+1&&i>=0) i--;
	if(i<0){
		check=true;
		return;
	}
	a[i]++;
	for(int j=i+1;j<k;j++){
		a[j]=a[j-1]+1;
	}
}
void run(){
	int T;
	cin>>T;
	while(T--){
		cin>>n>>k;
		check=false;
		for(int i=0;i<k;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sinh();
		if(check){
			cout<<k;
		}
		else{// 1 2 3 4    1 3 4 5
			int i=0,j=0,s=0;
			while(i<k&&j<k){
				if(a[i]==b[j]){
					s++;
					i++;
					j++;
				}
				else if(a[i]>b[j]){
					j++;
				}
				else i++;
			}
			cout<<k-s;
		}
		cout<<endl;
	}
}
int main()
{
	run();
 	return 0;
}

