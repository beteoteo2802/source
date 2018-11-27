#include<bits/stdc++.h>
using namespace std;
int n;
int cs(int x)
{
    if(x==n) return 1;
    int m=0;
    for(int i=x+1;i<=n;i++){
        m=m+cs(i);
    }
    return m;
}
int main()
{
    cin>>n;
    cout<<cs(1);
    return 0;
}
