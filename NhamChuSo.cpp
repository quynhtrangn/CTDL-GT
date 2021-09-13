#include<bits/stdc++.h>
using namespace std;

int main()
{
	string c,d;
	cin>>c;
	cin>>d;
	
	long long s1=0;
	for(long long i=c.length()-1;i>=0;i--){
		if(c[i]=='6'){
			c[i]='5';
		}  
		
	}
	s1=atoi(c.c_str());
	long long s2=0;
	for(long long i=d.length()-1;i>=0;i--){
		if(d[i]=='6')  d[i]='5';
		
	}
	s2=atoi(d.c_str());
	cout<<s1+s2;
	for(long long i=c.length()-1;i>=0;i--){
		if(c[i]=='5')  c[i]='6';
		
	}
	s1=atoi(c.c_str());
	for(long long i=d.length()-1;i>=0;i--){
		if(d[i]=='5')  d[i]='6';
	}
	s2=atoi(d.c_str());
	cout<<" "<<s1+s2;
 	return 0;
}
