#include<bits/stdc++.h>
using namespace std;
void answer()
{
	int n;
	cin >> n;
	string a, b;
	cin >> a >>b;
	int cnt[2]{};
	for(int i=0;i<n;i++)
    {
		if(a[i]=='0')
        {
			cnt[i%2]
              ++;
		}
		if(b[i]=='0')
        {
			cnt[1-(i%2)]
              ++;
		}
	}
	if(cnt[0]>=(n+1)/2&&cnt[1]>=n/2)
       cout<<"YES"<<endl;
	else
       cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin >> t;
    while(t--)
    answer();
}