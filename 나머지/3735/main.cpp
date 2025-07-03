/*#include <iostream>

using namespace std;

int n, input[1000], dp[1000];
int max_;

int main()
{
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>input[i];
        dp[i]=1;
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (input[i]<input[j]) {
                if (dp[j]>dp[i]+1) dp[j] = dp[j];
                else dp[j] = dp[i]+1;
            }
        }
    }
    for (int i=0; i<n; i++) {
        if (max_<dp[i]) max_ = dp[i];
    }

    cout<<max_;
}*/


#include <iostream>
#include <cstdio>

using namespace std;

int cnt=0;
int check[5]={};
void f(int n)
{
    if(n==6)
    {
        cnt++;
        return;
    }
    for(int i=1; i<=5; i++)
    {
        if(check[i])
            continue;
        check[i]=1;
        f(n+1);
        check[i]=0;
    }
}

int main()
{
    int k;

    scanf("%d", &k);

    f(1);

    printf("%d", cnt);

    return 0;
}