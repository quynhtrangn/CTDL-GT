//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin>>T;
//	while(T--){
//		int n,s,m;
//		cin>>n>>s>>m;
//		if(s*m> n*s- n*(s/7)){
//			cout<<-1<<endl;
//			continue;
//		}
//		else{
//			int ngaymua=1;
//			while(ngaymua <= s-(s/7)){
//				if(ngaymua*n>=s*m){
//					break;
//				}
//				ngaymua++;
//			}
//			cout<<ngaymua<<endl;
//		}
//	}
// 	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,s,m;
		cin>>n>>s>>m;
		if(m*s > n*s-n*(s/7)){
			cout<<-1<<endl;
		}
		else{
			int ngay=1;
			while(ngay<=s-(s/7)){
				if(ngay*n>=m*s){
					break;
				}
				ngay++;
			}
			cout<<ngay<<endl;
		}
	}
 	return 0;
}
