#include<bits/stdc++.h>
using namespace std;
 
 
int findMinInsertions(char str[], int l, int h)
{
    if (l > h) return INT_MAX;
    if (l == h) return 0;
    if (l == h - 1) return (str[l] == str[h])? 0 : 1;
 
    return (str[l] == str[h])?
                    findMinInsertions(str, l + 1, h - 1):
                    (min(findMinInsertions(str, l, h - 1),
                    findMinInsertions(str, l + 1, h)) + 1);
}
 
int main()
{	
	int T;
	cin>>T;
	cin.ignore();
	while(T--){
		
	    char str[40];
	    gets(str);
	    cout << findMinInsertions(str, 0, strlen(str) - 1);
	}
    return 0;
    
}
