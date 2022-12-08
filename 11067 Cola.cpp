#include <iostream>
using namespace std;

int main() {

    int n;
    while (cin >> n) {
        int drank_cola = n;
        int empty_cola = n;
        while (empty_cola >= 3) {  //可以兌換可樂
            drank_cola += empty_cola / 3;
            empty_cola = (empty_cola / 3) + (empty_cola % 3);
        }

        // 可以借可樂的情況只有一種：最後剩下兩瓶空可樂
        if (empty_cola == 2) drank_cola++; //可以借一瓶空可樂來換一瓶
        cout << drank_cola << "\n";
        
        // 公式解：
        // cout << n * 3 / 2 << "\n";
    }

    return 0;
}