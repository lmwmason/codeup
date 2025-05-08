#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int a,b;
int c;

int main(void)
{
    cin>>a>>b;
    for(int i=b; i>=a; i--)
    {
        for(int j=i; j>=a; j--)
        {
            string str = to_string(i*j);
            string str1 = str;
            reverse(str.begin(),str.end());
            if(str1 == str)
            {
                if(c<stoi(str1))
                    c = stoi(str1);
            }
        }
    }
    cout<<c;
    return 0;
}
