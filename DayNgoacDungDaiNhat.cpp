// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int T;
// 	cin>>T;
// 	while(T--){
// 		stack <int> data;
// 		string a;
// 		cin>>a;
// 		int dem=0;
// 		data.push(-1);
// 		for(int i=0;i<a.length();i++){// (()())  )()()(  )))(((
// 			if(a[i]=='('){
// 				data.push(i);
// 			}
// 			else{
// 				data.pop();
// 				if(!data.empty()){
// 					dem= max(dem, i - data.top());
// 				}
// 				if (data.empty()) data.push(i);
// 			}
			
// 		}
// 		cout<<dem<<endl;
// 	}
//  	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void run(){
	string a;
	cin>>a;
	stack <int> st;
	
	st.push(-1);
	int dem=0;
	for(int i=0;i<a.length();i++){ // ((()))
		if(a[i]=='('){
			st.push(i);
		}
		else{
			st.pop();
			if(st.size()>0){
				dem= max(dem, i-st.top());
			}
			if(st.size()==0) st.push(i);
		}
	}
	cout<<dem<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		run();
	}
}

