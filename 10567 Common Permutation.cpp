#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {

    string a, b;
    while (cin >> a >> b) {
        map<char, pair<int, int> > Map;
        for (int i = 0; i < a.size(); i++) Map[a[i]].first++;
        for (int i = 0; i < b.size(); i++) if (Map.count(b[i]) == 1) Map[b[i]].second++;

        map<char, pair<int, int> >::iterator it;
        for (it = Map.begin(); it != Map.end(); it++) {
            if (it->second.second != 0) {
                int count = min(it->second.first, it->second.second);
                for (int i = 0; i < count; i++) cout << it->first;
            }
        }
        cout << "\n";
    }
    return 0;
}