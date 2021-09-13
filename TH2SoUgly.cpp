#include <bits/stdc++.h>
using namespace std;
unsigned get(int n)
{
    long ugly[n];
    long i2 = 0, i3 = 0, i5 = 0;
    long n2 = 2;
    long n3 = 3;
    long n5 = 5;
    long nno = 1;
    ugly[0] = 1;
    for (int i = 1; i < n; i++) {
        nno = min(n2,min(n3, n5));
        ugly[i] = nno;
        if (nno == n2) {
            i2 = i2 + 1;
            n2 = ugly[i2] * 2;
        }
        if (nno == n3) {
            i3 = i3 + 1;
            n3 = ugly[i3] * 3;
        }
        if (nno == n5) {
            i5 = i5 + 1;
            n5 = ugly[i5] * 5;
        }
    } 
    return nno;
}
void handle(){
	int n ; cin>>n;
	cout << get(n);	
	cout<<endl;
}
int main()
{
	int T ;cin>>T;
	while(T--){
		handle();
	}
    
    return 0;
}
