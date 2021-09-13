#include<bits/stdc++.h>
using namespace std;
string n,m, q,p;
void change5(string k){
	for(int i=0;i<k.length();i++){
		if(k[i]=='5') k[i]='6';
	}
}
void change6(string k){
	for(int i=0;i<k.length();i++){
		if(k[i]=='6') k[i]='5';
	}
}
long toNumber(string k){
	long x=0;
	for(int i=0;i<k.length();i++){
		x=x*10+(long)(k[i]-'0');
	}
	return x;
}
void run(){
	cin>>n>>m;
	p=n;
	q=m;
	for(int i=0;i<n.length();i++){
		if(n[i]=='6') n[i]='5';
	}
	for(int i=0;i<m.length();i++){
		if(m[i]=='6') m[i]='5';
	}
	
	cout<<toNumber(n)+toNumber(m)<<" ";
	for(int i=0;i<p.length();i++){
		if(p[i]=='5') p[i]='6';
	}
	for(int i=0;i<q.length();i++){
		if(q[i]=='5') q[i]='6';
	}
	//cout<<p<<" "<<q;
	cout<<toNumber(p)+toNumber(q);
	
}
int main()
{
	run();
 	return 0;
}

