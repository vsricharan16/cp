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
#define min(a,b) ((a<b)?(a):(b))
#define max(a,b) ((a>b)?(a):(b))
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ms0(x,n,a) fill_n(x, n, a)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ll inf=1e18;
const ll minf=-(1e18);
const ll mod=1e9+7;
const ll med=1e9+9;
//change mod or med accordingly whenever necessary carefulwith mod!!!!!
inline ll add(ll x,ll y){ x += y; if(x >= mod) x -= mod; return x;}
inline ll sub(ll x,ll y){ x -= y; if(x < 0) x += mod; return x;}
inline ll mul(ll x,ll y){ return (x * 1ll * y) % mod;}
ll power(ll x,ll y){
    if(y==0)return 1;
    if(y==1)return x;
    ll ans=power(x,y/2)%mod;
    ans*=ans;
    ans%=mod;
    if(y%2)ans*=x;
    return ans%mod;
}
ll inv(ll x,ll y){
    x+=mod;y+=mod;
    x%=mod;y%=mod;
    ll ret=(power(y,mod-2)%mod)*x;
    return (ret%mod);
}
charan
{
	fast;
	ll n;
	cin>>n;
	set <int> s;
	int arr[n+1];
	cin>>arr[1];
	int prev=arr[1];
	for(int i=2;i<=n;i++)
{
	//cin>>temp;
	cin>>arr[i];
	if(prev==arr[i])
	{
		cout<<"NO";
		return 0;
	}
	if(abs(arr[i]-arr[i-1])!=1)
	s.insert(abs(arr[i]-arr[i-1]));
prev=arr[i];
//cout<<abs(arr[i]-arr[i-1])<<endl;

}

	if(s.size()>1)
	{
		//cout<<s.size()<<endl;
		cout<<"NO";
	}
	else
	{
		
		set<int>::iterator it;
		if(s.empty())
		{
			cout<<"YES"<<endl;
			cout<<"1000000000 "<<"1"<<endl;
		}
		else
		{
			int k;
			for(it=s.begin();it!=s.end();it++)
			{
				k=(*it);
			}
			int m=k;
			for(int i=1;i<=n-1;i++)
				{
					if(arr[i]%m==0)
					{
						if(arr[i+1]!=arr[i]-1 && arr[i+1]!=arr[i]+m && arr[i+1]!=arr[i]-m)
						{
							cout<<"NO";
							return 0;
						}
					}
					if(arr[i]%m==1)
					{
						if(arr[i+1]!=arr[i]+1 && arr[i+1]!=arr[i]+m && arr[i+1]!=arr[i]-m)
						{
							cout<<"NO";
							return 0;
						}
					}
				}
			cout<<"YES"<<endl;
			cout<<"1000000000"<<" "<<k<<endl;
		}
	}

	return 0;
}