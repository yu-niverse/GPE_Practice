#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        unordered_map<long long, int> Combinations;
        while (n--) {
            long long key = 0;
            vector<long long> courses(5);
            for (int i = 0; i < 5; i++) cin >> courses[i]; 
            sort(courses.begin(), courses.end());
            for (int i = 0; i < 5; i++) {
                key *= 1000;
                key += courses[i];
            }
            Combinations[key]++;
        }

        int max = 0;
        for (unordered_map<long long, int>::iterator it = Combinations.begin(); it != Combinations.end(); it++) {
            if (it->second > max) max = it->second;
        }

        int count = 0;
        for (unordered_map<long long, int>::iterator it = Combinations.begin(); it != Combinations.end(); it++) {
            if (it->second == max) count += it->second;
        }
        cout << count << "\n";

    }

    return 0;
}