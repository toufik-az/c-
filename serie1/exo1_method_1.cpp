#include<iostream>
using namespace std;

void fill(int n, int A[]) {
    for (int i = 0; i < n; i++) {
        cout << "Enter the value number " << i + 1 << " :\n";
        cin >> A[i];
    }
}

void print(int n, int A[]) {
    for (int i = 0; i < n; i++) {
        cout << "The value of number " << i + 1 << " is: " << A[i] << endl;
    }
}

void Marge(int n, int A[], int B[], int C[]) {
    int i = 0, j = 0, k = 0;  
    while (i < n && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }
    while (i < n) {
        C[k++] = A[i++];
    }
    while (j < n) {
        C[k++] = B[j++];
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    int A[n], B[n], C[2 * n];  
    
    // Fill arrays
    fill(n, A);
    fill(n, B);
    
    // Merge 
    Marge(n, A, B, C);
    
    // Print arrays 
    print(n, A);
    print(n, B);
    print(2 * n, C);  
    
    return 0;
}
