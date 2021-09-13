#include<bits/stdc++.h>
using namespace std;

bool check(string s1, string s2){
	int j=-1;
	for(int i=0;i<s1.size();i++){
		j++;
		while(s1[i]!=s2[j]){
			j++;
			if(j>=s2.size()) return false;
		}
	}
	return true;
}
string toString(long long n){
	string s="";
	if(n==0){
		return "0";
	}
	while(n>0){
		s=(char)('0'+n%10)+s;
		n/=10;
	}
	return s;
}
void handle(){
	long long n;cin>>n;
	long long k= (long long) round( pow((double)n, 1.0/3));
	string tmp1= toString(n);
	for(long long i=k;i>=0;i--){
		string tmp2=toString(i*i*i);
		if(check(tmp2,tmp1)){
			cout<<tmp2<<endl;
			return;
		}
	}
	cout<<"-1"<<endl;
	
}
void run(){
	int T=1;
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

