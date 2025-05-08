#include <iostream>

using namespace std;

int a,b,c,d,e,f,g;
int sum, min_;

int main()
{
    min_ = 100;
    cin>>a>>b>>c>>d>>e>>f>>g;
    if(a%2==1)
    {
        sum+=a;
        if(a<min_)
            min_ = a;
    }
    if(b%2==1)
    {
        sum+=b;
        if(b<min_)
            min_ = b;
    }
    if(c%2==1)
    {
        sum+=c;
        if(c<min_)
            min_ = c;
    }
    if(d%2==1)
    {
        sum+=d;
        if(d<min_)
            min_ = d;
    }
    if(e%2==1)
    {
        sum+=e;
        if(e<min_)
            min_ = e;
    }
    if(f%2==1)
    {
        sum+=f;
        if(f<min_)
            min_ = f;
    }
    if(g%2==1)
    {
        sum+=g;
        if(g<min_)
            min_ = g;
    }
    if(sum==0) cout<<-1;
    else cout<<sum<<"\n"<<min_;
    return 0;
}
