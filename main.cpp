#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,k,c=0;
	    cin>>n;
	    for(i=1;i<=n;i+=2)
	    {
	       k=n-i+1; 
	       c=c+k*k;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
