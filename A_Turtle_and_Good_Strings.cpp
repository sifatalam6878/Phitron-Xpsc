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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(s[0] != s.back())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int t,n;
// string s;
// int main(){
//     cin>>t;
//     while(t--)
//     {
//         cin>>n>>s,
//         cout<<(s[0]!=s[n-1]?"Yes\n":"No\n");
//     }
//     return 0;
// }