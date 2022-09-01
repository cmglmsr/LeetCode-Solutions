#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    string s = "";
    s.push_back('a');
    s.push_back('b');
    s.push_back('x');
    s.pop_back();
    s.pop_back();
    s.pop_back();
    s.pop_back();

    cout << s << endl;

}