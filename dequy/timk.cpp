#include<bits/stdc++.h>
using namespace std;
int n;
int p[1000006];
int main()
{
    cin>>n;
    for (int i = 2; i <= n; i++) {
        if (p[i] == 0) {
            for (int j = i+i; j <= n; j += i) {
                p[j] = i;
                //cout << " " << j << endl;
            }
            //cout << i << endl;
        }
    }
    return 0;
}
