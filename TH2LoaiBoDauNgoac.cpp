#include<iostream>
#include<vector>
using namespace std;
string s;
vector<char> a;
void handle(){
	cin>>s;
	stack <char> st;
	for(int i=0;i<=s.length();i++){
		if(s[i]=='('){
			st.push();
		}
		else{
			if(st.empty()){
				
			}
		}
	}
}
int main(){
    int T;
    cin>>T;
    while(T--){
        handle();
    }
}
    
