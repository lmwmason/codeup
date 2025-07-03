#include <iostream>

using namespace std;

int k, n;
int arr[20];

int main() {
    cin>>k>>n;
    for (int i=0; i<k; i++) {
        cin>>arr[i];
    }

    for (int i=k; i<n; i++) {
        for (int j=1; j<=k; j++) {
            arr[i]+=arr[i-j];
        }
    }
    cout<<arr[n-1];
    return 0;
}