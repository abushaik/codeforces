#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string guestName, hostName, pileOfLetters;
    cin >> guestName >> hostName >> pileOfLetters;
    
    string names = guestName + hostName;
    sort(names.begin(), names.end());
    sort(pileOfLetters.begin(), pileOfLetters.end());
    
    if (names == pileOfLetters) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
