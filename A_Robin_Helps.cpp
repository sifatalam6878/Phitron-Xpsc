#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin >> t;
	while(t--)
    {
		int n,s,p=0,solve=0;
		cin >> n >> s;
		for(int i=0;i<n;i++)
        {
            int a;
			cin >> a;
			if(a>=s)
              p+=a;
			if(a==0 && p>0)
            {
				solve++;
				p--;
			}
		}
		cout << solve << endl;
    }
    return 0;
}