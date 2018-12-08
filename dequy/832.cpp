#include<bits/stdc++.h>
using namespace std;
int n,k;
int fi(int x)
{
    if(x==1){
        k++;
        return 1;
    }
    if(x==2){
        k++;
        return 1;
    }
    int m=fi(x-1) + fi(x-2);
    k=m+k;
    return k;
}
/*

0 1 1 2 3 5 8
0 + 1 + 1 + 2 + 3 + 5 + 8 =

*/
int main()
{
    cin>>n;
    cout<<fi(n);
    return 0;
}
