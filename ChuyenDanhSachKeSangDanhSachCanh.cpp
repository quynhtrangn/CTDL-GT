// #include<bits/stdc++.h>
// using namespace std;
// int ke[100][100]={0};
// int main()
// {
// 	int n;
// 	cin>>n;
// 	string s;
// 	cin.ignore();
// 	  // 2 3   1 3    1 2
// 	for(int i=1;i<=n;i++){
// 		getline(cin,s);
// 		s+=" ";
// 		int V=0;
// 		for(int j=0;j<s.length();j++){
// 			if(s[j]==' '){
// 				ke[i][V]=1;
// 				V=0;
// 			}
// 			else{
// 				V=V*10+(int)(s[j]-'0');
// 			}
// 		}
// 	}
// 	for(int i=1;i<100;i++){
// 		for(int j=i+1;j<100;j++){
// 			if(ke[i][j]){
// 				cout<<i<<" "<<j<<endl;
// 			}
// 		}
// 	}
//  	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void run(){
	int T;
	cin>>T;
	int ke[55][55]={0};
	for(int j=1;j<=T;j++){
		string s;
		cin.ignore();
		getline(cin, s);
		s=s+" ";
		int V=0;
		for(int i=0;i<s.length();i++){
			if(s[i]==' '){
				ke[j][V]=1;
				V=0;
			}else{
				V=V*10+(int)(s[i]-'0');
			}
		}
	}
	for(int i=1;i<=T;i++){
		for(int j=i+1 ;j<=T;j++){
			if(ke[i][j]) cout<<i<<' '<<j<<endl;
			
		}
	}
}
int main(){
	run();
}