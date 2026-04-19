#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int place = 1;   // multiplier

    while(n != 0){
        int bit = n & 1;
        ans = ans + (bit * place);
        place = place * 10;   // move to next digit
        n = n >> 1;
    }

    cout << "answer is " << ans << endl;
}