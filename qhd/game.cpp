#include<bits/stdc++.h>
using namespace std;
int n;
int kq=-1;
int a[1000001],b[1000001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    b[0]=0;
    b[1]=a[1];
    b[2]=a[1]+a[2];
    for(int i=3;i<=n;i++){
        b[i]=max(b[i-2]+a[i],b[i-3]+a[i]+a[i-1]);
    }
    for(int i=1;i<=n;i++){
        kq=max(b[i],kq);
    }
    cout<<kq;
    return 0;
}
