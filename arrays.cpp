/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define ff first
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define ss second	
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll na,nb;cin>>na>>nb;
	ll k,m;cin>>k>>m;
	ll arr[na+1];
	ll brr[nb+1];
	for (int i = 0; i < na; ++i)
	{
		cin>>arr[i+1];
	}
	ll mini=9999999999;
	for (int i = 0; i < nb; ++i)
	{
		cin>>brr[i+1];
		//mini=min(mini,brr[i+1]);
	}
	sort(brr+1,brr+nb);
	mini=brr[nb-m+1];
	int count=0;
	for(int i=0;i<na;i++)
	{
		if(count==k)
		{
			cout<<"YES";
			return 0;
		}
		if(arr[i+1]>=mini)
			{cout<<"NO";return 0;}
		else
			count++;
	}
	if(count==k)
		{
			cout<<"YES";
			return 0;
		}
	else
		cout<<"NO";
	return 0;
}