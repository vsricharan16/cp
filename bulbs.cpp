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
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>b;i--)
charan
{
	int bulbs,k,t,buttons;
	cin>>buttons>>bulbs;
	int ab[bulbs+1];
	for(int i=0;i<buttons;i++)
	{
		cin>>k;
		for(int j=0;j<k;j++)
		{
			cin>>t;
			ab[t]++;
		}
	}
	for(int i=0;i<bulbs+1;i++)
	{
		if(ab[i]==0)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}