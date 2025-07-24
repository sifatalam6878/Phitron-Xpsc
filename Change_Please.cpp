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
        int x;
        cin >> x;
        int chng = 100 - x;
        int mx=(chng/10)*10;
        cout << mx << endl;
    }
    return 0;
}