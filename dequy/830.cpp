#include<bits/stdc++.h>
using namespace std;
int n;
int tich(int x)
{
    if(x==1) return 1;
    return tich(x-2)*x;

}
int main()
{
    cin>>n;
    if(n%2==0) cout<<tich(n-1);
    else cout<<tich(n);
    return 0;
}
