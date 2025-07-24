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
        string w;
        cin >> w;
        string plrl = "";
        for(int i=0; i<w.length()-2; i++)
        {
            plrl += w[i];
        }
        plrl += 'i';
        cout << plrl << endl;
    }
    return 0;
}