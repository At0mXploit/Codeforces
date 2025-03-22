#include <iostream>

using namespace std;

int main() {
    int n, X = 0;
    char s[4];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s[1] == '+') {  
            X++;
        } else {
            X--;
        }
    }
    
    cout << X << endl;
    return 0;
}

