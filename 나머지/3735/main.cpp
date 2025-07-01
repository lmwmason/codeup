#include <iostream>

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
}