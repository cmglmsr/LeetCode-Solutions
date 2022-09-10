#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <stack>
#include <ctype.h>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ls;
    ls.push_back(19);
    ls.push_back(18);
    ls.push_back(16);
    ls.push_back(20);
    ls.push_back(5);
    sort(ls.begin(),ls.end());
    for(int x : ls)
        cout << x << endl;
}