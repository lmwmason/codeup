#include <iostream>
#include <iomanip>

using namespace std;


bool if_in_circle(int x, int y) {
    return x*x + y*y <= 1000000;
}

int n, arr_1, arr_2;
int in;

int main() {
    cin>>n;
    cout << setprecision(6)<<fixed;
    for (int i = 0; i < n; i++) {
        cin>>arr_1>>arr_2;
        in+=if_in_circle(arr_1, arr_2);
    }
    float ans = 4.0*(float)in/(float)n;
    cout<<ans;
}