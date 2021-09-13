#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int c4=0, c7=0;
		int m= n-7*(int)(n/7);
		
		if(m>=4){
			c4++;
			m-=4;
		}
		if(m>(n/7)){
			cout<<-1;
			
		}
		else{
			c4+=m*2;
			c7=(int)(n/7)-m;
			for(int i=0;i<c4;i++){
				cout<<4;
			}
			for(int i=0;i<c7;i++){
				cout<<7;
			}	
		}
		
		cout<<endl;
	}
 	return 0;
}

