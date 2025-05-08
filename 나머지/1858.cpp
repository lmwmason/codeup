#include <iostream>

using namespace std;

int N, K;

int pas(int n, int k)
{
    if(n==1||k==n||k==1) return 1;
    return (pas(n-1, k-1) + pas(n-1, k));
}


int main()
{
    cin>>N>>K;
    cout<<pas(N,K);
}
