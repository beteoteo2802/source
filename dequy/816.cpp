#include<bits/stdc++.h>
using namespace std;
int n;
int sc(int x)
{
    if(x==n) return 1;
    if(x>n) return 0;
    return sc(x+1)+sc(x+2);
}
int main()
{
    cin>>n;
    cout<<sc(1);
    return 0;
}
