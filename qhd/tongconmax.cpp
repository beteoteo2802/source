#include<bits/stdc++.h>
using namespace std;
int n;
int kq=-1e9;
int a[1000001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int s=0;
    for(int i=1;i<=n;i++){
        s+=a[i];
        kq=max(kq,s);
        if(s<0) s=0;
    }
    cout<<kq;
    return 0;
}
