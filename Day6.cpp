// Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        for (int i = 0; i < str.length(); i++) {
            if (i % 2 == 0) {
                cout << str[i];
            }
            
        }

        cout << " ";

        for (int i = 0; i < str.length(); i++) {
            if (i % 2 != 0){
                 cout << str[i];
            }
        }

        cout << endl;
    }

    return 0;
}
