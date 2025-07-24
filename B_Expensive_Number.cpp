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
        string n;
        cin >> n;
        int p=0, count=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]>'0')
              p=i,count++;
        }
        cout<< n.size()-p+count-2<< endl;
    }
    return 0;
}