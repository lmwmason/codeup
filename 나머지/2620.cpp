#include <cstdio>

int a,b;

int main()
{
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
            b++;
    }
    printf("%d", b);
}
