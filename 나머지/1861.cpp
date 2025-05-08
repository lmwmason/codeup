#include <iostream>
using namespace std;

int pascal(int n, int k) {
    if (k == 0 || k == n) return 1;
    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

void printRow(int row, int col = 0) {
    if (col > row) {
        cout << endl;
        return;
    }
    cout << pascal(row, col) << " ";
    printRow(row, col + 1);
}

void printPascal(int n, int row = 0) {
    if (row == n) return;
    printRow(row);
    printPascal(n, row + 1);
}

int main() {
    int N;
    cin >> N;
    printPascal(N);
    return 0;
}
