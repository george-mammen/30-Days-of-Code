#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cin >>n;
    string name;
    int num;
    map<string, int> phonebook;

    for (int i=0; i<n;i++) {
        cin >> name >> num;
        phonebook[name] = num;
    }

    while(cin >> name) {
        if (phonebook.find(name) != phonebook.end()) {
            cout << name << "=" << phonebook.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}
}
