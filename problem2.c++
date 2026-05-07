#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int minOperations(vector<int>& A, int K) {
    int n = A.size();

    // Checking feasibility
    int rem = A[0] % K;
    for (int i = 1; i < n; i++) {
        if (A[i] % K != rem) {
            cout << "Not Possible!"<<endl;
            return -1; 
        }
    }

    vector<int> B(n);
    for (int i = 0; i < n; i++) {
        B[i] = A[i] / K;
    }

    // Finding median
    sort(B.begin(), B.end());
    int median = B[n / 2];

    // Calculating total operations
    int operations = 0;
    for (int i = 0; i < n; i++) {
        operations += abs(B[i] - median);
    }

    cout<< "Total Operations :";
    return operations;
}

int main() {
    int n;
    cout << "Enter the size of array :";
    cin >> n;

    cout << "Enter the element of array :";
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter the integer :";
    int K;
    cin >> K;

    cout << minOperations(A, K) << endl;

    return 0;
}