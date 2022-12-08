#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {

    int n; 
    while (cin >> n) {
        if (n == 0) break;

        set<long long> set;
        long long numbers[n];
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
            set.insert(numbers[i]);
        }

        sort(numbers, numbers + n);
        int max = -1000000;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    long long sum = numbers[i] + numbers[j] + numbers[k];
                    if (set.count(sum) == 1 && sum > max) max = sum;
                }
            }
        }
        if (max == -1000000) cout << "no solution\n";
        else cout << max << "\n";
    }
    return 0;
}