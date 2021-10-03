// gcd in O(log(max(a,b)))
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
int gcd(int a, int b)
{
   return b==0?a:gcd(b, a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y; 
    cin>>x>>y; 
        cout<<"GCD : "<<gcd(x,y)<<endl;
    return 0;
}
