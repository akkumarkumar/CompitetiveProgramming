#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int k;
	cin>>n>>k;
	vector<int> a;
	int total = 0;
	for(int i = 0 ; i<n;i++)
	{
	
		a.push_back( 5 *(i+1));
		total += a[i];
	}
	vector<int>b;
	for(int i = 0 ; i<=total ; i++)
		b.push_back(i);
	int l = -1;
	int r = total+1;
	while(l+1<r)
	{
		int m = (l+r)/2;
		if(m+k <= 240)
			l = m;
		else
			r = m;
	}
	int ans = 0;int t = 0;
	//cout<<l<<"\n";
	for(int i = 0 ; i<n ; i++)
	{
		 t+=a[i];//cout<<t<<"\n";
		ans++;
		if(t > l)
		{
			cout<<ans-1;
			break;
		}
		if(t == l)
		{
		
			cout<<ans;
			break;
		}
	}
}
		
	
	
	
