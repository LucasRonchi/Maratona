#include <bits/stdc++.h>
using namespace std;

int calls;

int fib(int n) {
    calls++;
    
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    return fib(n-1) + fib(n-2);
}

int main() {
    int n, num;

    cin >> n;

    for (int i = 0; i < n; i++) {
        calls = -1;
        cin >> num;
        int f = fib(num);
        printf("fib(%d) = %d calls = %d\n", num, calls, f);
    }

    return 0;
}
