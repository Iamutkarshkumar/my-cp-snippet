#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        n *= 2;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if((i / 2 + j / 2) % 2 == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
