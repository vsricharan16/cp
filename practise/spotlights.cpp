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
	ll n,m;cin>>n>>m;
	int given[n+1][m+1];
	int total[n+1][m+1];
	ms0(total,0);
	ms0(given,0);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>given[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			total[i][j]=total[i-1][j]+given[i][j];
		}
	int maxi[m+1];
	// cout<<"#######"<<endl;
	// for(int i=1;i<=n;i++)
	// 	{
	// 	for(int j=1;j<=m;j++)
	// 	{
	// 		cout<<total[i][j]<<" ";
	// 	}cout<<endl;
	// }
	// cout<<"#######";
	for(int i=1;i<=m;i++)
		maxi[i]=total[n][i];
	int totali[n+1][m+1];
	ms0(totali,0);
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
		{
			totali[j][i]=totali[j][i-1]+given[j][i];
		}
	}
	int mini[n+1];
	for(int i=1;i<=n;i++)
		mini[i]=totali[i][m];
	ll good=0;
	// cout<<"#######"<<endl;
	// for(int i=1;i<=n;i++)
	// 	{
	// 	for(int j=1;j<=m;j++)
	// 	{
	// 		cout<<totali[i][j]<<" ";
	// 	}cout<<endl;
	// }
	// cout<<"#######";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(given[i][j]==0)
			{
				if(maxi[j]-total[i][j]>0)
					good++;
				if(total[i][j]>0)
					good++;
				if(mini[i]-totali[i][j]>0)
					good++;
				if(totali[i][j]>0)
					good++;
				//cout<<good<<endl;
			}
		}
	}
	cout<<good;

	return 0;
}