#include<bits/stdc++.h>
using namespace std;
bool kochiaHet(string a, int n){
	long x=1;
	deque <int> que;
	int tmp = (int)(a[0]-'0')%n;
	que.push_back(tmp);
	for(int i=1;i<a.length();i++){
		tmp= (que.front()*10 + (int)(a[i]-'0'))%n;
		que.pop_front();
		que.push_back(tmp);
	}
	if(que.front()==0){
		return 0;
	}
	return 1;
}
void run(){
	int n;
	cin>>n;
	deque <string> que;
	que.push_back("9");
	while(kochiaHet(que.front(), n)){
		string tmp="";
		tmp= tmp+ que.front()+"0";
		que.push_back(tmp);
		tmp= que.front()+"9";
		que.push_back(tmp);
		que.pop_front();
	}
	cout<<que.front();
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		run();
		cout<<endl;
	}
 	return 0;
}

