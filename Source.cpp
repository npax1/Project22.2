#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "n Mk is in 1971 and later moved to the United to pursue his enrial dreams.";
    replace(str.begin(), str.end(), ' ', '\t');
    cout << str << endl;
    return 0;
}