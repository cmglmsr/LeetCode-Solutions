class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> map;
        vector<bool> arr(secret.length());
        int bulls = 0, cows = 0;
        for(int i = 0; i < guess.size(); i++) {
            map[guess[i]]++;
            if(secret[i] == guess[i]) {
                bulls++;
                map[guess[i]]--;
                arr[i] = 1;
            }
        }
        for(int i = 0; i < secret.length(); i++) {
            if(map[secret[i]] > 0  & !arr[i]) {
                map[secret[i]]--;
                cows++;
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B"; 
    }
};