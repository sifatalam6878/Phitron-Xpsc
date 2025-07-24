
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        char a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i=0;i<n;i+=m)
        {
            for(int j=0;j<n;j+=m)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}