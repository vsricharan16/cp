#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t,t25=0,t50=0,t100=0;cin>>n;				
	for(long long i=0;i<n;i++)
	{
		cin>>t;
		//cout<<t25<<" "<<t50<<" "<<t100<<endl;
		if(t==25)
			{
				t25++;
			}
		else if(t==50)
			{
				t50++;
				t25--;
			}
		else
			{
				t100++;
				if(t25>3){
					t25--;
					t25--;
					t25--;
					
				}
				else{
					t50--;
					t25--;
				}
			}
		if(t25<0 || t50<0)
			{cout<<"NO";return 0;}
	}
	cout<<"YES";
	return 0;
}