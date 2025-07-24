#include<bits/stdc++.h>
using namespace std;
int mx(int a,int b,int c)
{
    int mxitm = 0;
    for (int i=0; i<=5; i++)
    {
        for(int j=0; j<=5-i; j++){

            int k = 5-i-j;
            int x = a + i;
            int y = b + j;
            int z = c + k;
            mxitm= max( mxitm ,x*y*z);
        }
    }
    return  mxitm ;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << mx(a,b,c) << endl;
    }
    return 0;
}
