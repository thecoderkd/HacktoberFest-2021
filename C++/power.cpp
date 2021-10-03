// power x^n in O(nlog n)
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

double mypow(double x,long n)
{
    if(n==0) return 1.0;
    if(n==1) return x;
    if(n<0) return mypow(1/x, -n);
    double result=mypow(x*x,n/2);
    if(n%2) result*=x;
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    double x; long n; 
    cin>>x>>n;
    cout<<mypow(x,n);
    return 0;
}
