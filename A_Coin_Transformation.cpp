#include<bits/stdc++.h>
using namespace std;
map<long long,long long> m;
long long mxcoin(long long n)
{
    if(n<=3)
       return 1;
    if(m.count(n))
       return m[n];
    long long smlr=n/4;
    return m[n]=2*mxcoin(smlr);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << mxcoin(n) << endl;
    }
    return 0;
}