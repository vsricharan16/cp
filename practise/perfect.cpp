/*I shall rise*/
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);ll n;cin>>n;ll a[n];
	f(i,0,n)cin>>a[i];sort(a,a+n);
	fd(i,n-1,-1)
	{
		ll k=sqrt(a[i]);
		if(k*k!=a[i])
			{cout<<a[i];
				return 0;}
	}return 0;
}