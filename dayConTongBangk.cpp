#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int vtri[100];
vector<vector<int> > str;
bool ok= false;
void backtrack(int i){
	for(int j=0;j<2;j++){
		vtri[i]=j;
		if(i==n-1){
			int s=0;
			for(int l=0;l<n;l++){
				if(vtri[l]){
					s+=a[l];
				}
			}
			if(s==k){
				vector<int>tmp;
				for(int l=0;l<n;l++){
					if(vtri[l]){
						tmp.push_back(a[l]);
					}
				}
				str.push_back(tmp);
			}
		}
		else backtrack(i+1);
	}
}
void handle(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	str.clear();
	sort(a,a+n);
	backtrack(0);
	if(str.size()==0){
		cout<<-1<<endl;
	}
	else{
		sort(str.begin(),str.end());
		for(int i=0;i<str.size();i++){
			cout<<"[";
			for(int j=0;j<str[i].size()-1;j++){
				cout<<str[i][j]<<" ";
			}
			cout<<str[i][str[i].size()-1]<<"] ";
		}
		cout<<endl;
	}
}

int main()
{
	int T; cin>>T;
	while(T--){
		handle();
	}
 	return 0;
}

