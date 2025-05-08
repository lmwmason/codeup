#include <iostream>
#include <cmath>

using namespace std;

long long int calculate(int n, int k)
{
    if(k==0) return 1;
    long long int a =  (calculate(n,round(k/2)));
    a*=a;
    if(k%2==1) return a*n;
    return a;
}
int N, K;
int main() {
    cin>>N>>K;
    if(K==0)
    {
        cout<<1;
        return 0;
    }
    cout<<calculate(N,K);
    return 0;
}
