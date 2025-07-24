#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin>>t;
	while(t--)
    {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int a[n];
		long long cnt = 0;
		for(int i=0;i<n;i++)
        {
			if(s[i]=='L')
               a[i]=i;
			else
               a[i]=n-1-i;
               cnt += a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;++i)
        {
			if(n-1-2*a[i]>0)cnt+=n-1-2*a[i];
			   cout << cnt <<" ";
		}
		cout << endl;
    }
    return 0;
}