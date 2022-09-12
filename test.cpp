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
    unordered_map<int,int> ls;
    ls[19]++;
    ls[18]++;
    ls[17]++;
    ls[19]++;
    ls.erase(19);
    ls.erase(18);
    ls.erase(17);
    cout << ls.size() << endl;
}