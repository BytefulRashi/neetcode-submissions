class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        // maintain the counter of char from strings 
        // racecar , carrace
        // s string 
        // r -> 2, a->2, c->2 , e->1

        // t string 
        // r -> 2, a->2, c->2 , e->1
        
        // that mean they anagram string  

        unordered_map<char, int> cnt;

        for (char ch : s) {
            cnt[ch] = cnt[ch] + 1;
        }

        for(char ch: t){
             if (cnt.find(ch) == cnt.end() || cnt[ch] == 0) return false;
             cnt[ch]=cnt[ch]-1;
        }
        return true;


    }
};
