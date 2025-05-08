#include <iostream>
#include <math.h>

using namespace std;

int M,N;
int sum, min_;

int main()
{
    min_ = 10000;
    cin>>N>>M;
    for(int i=N; i<=M; i++)
    {
        int a = sqrt(i);
        if(sqrt(i)==a)
        {
            sum+=i;
            if(min_>i) min_ = i;
        }
    }
    if(sum==0) cout<<-1;
    else cout<<sum<<"\n"<<min_;
    return 0;
}
