#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1;
    string str2 = "child";
    string str3 = "children";
    cin >> str1;
    size_t start_pos = 0;
    while (true) {
        start_pos = str1.find(str2, start_pos);
        if (start_pos >= str1.size()) {
            break;
        }
        str1.replace(start_pos, str2.length(), str3);
        start_pos += 1;
    }
    str1.erase(remove_if(str1.begin(), str1.end(), isdigit), str1.end());
    cout << str1;
    return 0;
}
