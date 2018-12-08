#include<bits/stdc++.h>
using namespace std;
int m,n;
int tich(int x)
{
    if(x==m) return m;
    return tich(x-1)*(x);
}
int main()
{
    cin>>m>>n;
    cout<<tich(n);
    return 0;
}

