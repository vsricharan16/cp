/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define tri pair<int,pii>
#define mod (1000*1000*1000+7)
#define moddd (1000*1000*1000+9)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair< ll,ll >
#define sz(a) a.size()
#define pqueue priority_queue< ll >
#define pdqueue priority_queue< int,vector <int>,greater< int > >
#define ff first
#define ss second
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(X,a) memset((X), a, sizeof((X)))
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll n;ll x;cin>>n;
	ll arr[n+1];
	f(i,1,n+1)cin>>arr[i];
	x=arr[1];
	f(i,2,n+1){
		x=gcd(x,arr[i]);
	}
	f(i,1,n+1)
	{
		arr[i]/=x;
		if(arr[i]%2!=0 && arr[i]%3!=0 && arr[i]!=1)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}