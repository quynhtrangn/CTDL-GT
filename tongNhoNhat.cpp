#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100000];
void handle(){ // 0 1 2 3  
	cin>>n;
	long long tmp;
	vector<long long> a;
	for(int i=0;i<n;i++){
		cin>>tmp;
		a.push_back(tmp);
	}
	long long s1=0,s2=0;
	sort(a.begin(), a.end());
	for(int i=0;i<n;i++){
		if(i%2==0){
			s1 = s1*10+a[i];
		}
		else s2=s2*10+a[i];
	}
	cout<<s1+s2<<endl;	
}
void run(){
	int T;
	cin>>T;
	while(T--){
		handle();
	}
}
int main()
{
	run();
 	return 0;
}

