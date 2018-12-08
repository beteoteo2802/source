// in so cach tao cac day tong = n
#include<bits/stdc++.h>
using namespace std;
int n;
int tq(int x,int s)
{
    if(s==0) return 1;
    int m=0;
    for(int i=x;i<=s;i++){
        m+=tq(i,s-i);
    }
    return m;
}
int main()
{
    cin>>n;
    cout<<tq(1,n);
    return 0;
}
