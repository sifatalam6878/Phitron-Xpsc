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
        int n, a,b;
        cin >> n >> a >> b;

        int d;
        if(a>b)
            d = a-b;
        else
            d = b-a;

        if(d % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}