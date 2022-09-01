#include <stack>
#include <ctype.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string repeat(int n, string s) {
        string res = "";
        for(int i = 0; i < n; i++) {
            res = res + s;
        }
        return res;
    }
    string decodeString(string s) {
        stack<int> coefficients;
        stack<char> chars;

        for(int i = 0; i < s.length(); i++) {
            string digit = "";
            if(isdigit(s[i])) {
                int j = 0;
                for(j = i; j < s.length() && isdigit(s[j]); j++) {
                    digit = digit + s[j];
                }
                coefficients.push(stoi(digit));
                i = j-1;
            }
            else
                chars.push(s[i]);
        }

        string res = "";
        while(!chars.empty() & !coefficients.empty()) {
            int parantheses = 0;
            if(chars.top() == ']') {
                vector<string> cur; 
                parantheses++;
                chars.pop();
                cur.push_back("");
                while(parantheses > 0) {
                    if(chars.top() == ']') {
                        cur.push_back("");
                        parantheses++;
                        chars.pop();
                    }
                    else if(chars.top() == '[') {
                        chars.pop();
                        cur[parantheses-1] = repeat(coefficients.top(), cur[parantheses-1]);
                        if(parantheses > 1)
                            cur[parantheses-2] = cur[parantheses-1] + cur[parantheses-2]; 
                        coefficients.pop();
                        cur[parantheses-1] = "";
                        parantheses--;
                    }
                    else {
                        cur[parantheses-1] = chars.top() + cur[parantheses-1];
                        chars.pop();
                    }
                }
                res = cur[0] + res;
            }
            else if(chars.top() == '[') {chars.pop();}
            else {
                res = chars.top() + res;
                chars.pop();
            }
        }

        while(!chars.empty()) {
            res = chars.top() + res;
            chars.pop();
        }
        if(!coefficients.empty()) {
            res = repeat(coefficients.top(), res);
        }
        return res;
    }
};