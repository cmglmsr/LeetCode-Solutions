#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <stack>
#include <ctype.h>
using namespace std;
    string repeat(int n, string s) {
        string res = "";
        for(int i = 0; i < n; i++) {
            res = res + s;
        }
        return res;
    }
int main() {
     vector<int> arr;
     arr.push_back(2);
     arr.push_back(7);
    for(auto i = arr.end()-1; i != arr.begin()-1; i--)
        cout << *i << endl;
        
}