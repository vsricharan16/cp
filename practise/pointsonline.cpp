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
ll calc(ll k)
{
	if(k>1)
		return k*(k-1)/2;
	else
		return 0;
}
charan
{
	fast;
	ll n,d;
	cin>>n>>d;
	vector <long long> arr(n+1);
	arr[0]=-10000000000;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		//int search=arr[i]+d;
		vector <long long>:: iterator it;
		it=lower_bound(arr.begin(),arr.end(),arr[i]+d);
		if(arr[it-arr.begin()]==arr[i]+d)
		{
			ans+=calc(it-arr.begin()-i);
		}
		else
		{
			ans+=calc(it-arr.begin()-i-1);
		}
	}
	cout<<ans;
	return 0;
}