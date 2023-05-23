class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> r;
        map<char, int> m;
        
        // Count the occurrences of characters in ransomNote
        for (auto x : ransomNote) {
            r[x]++;
        }
        
        // Count the occurrences of characters in magazine
        for (auto x : magazine) {
            m[x]++;
        }
        
        // Check if all characters in ransomNote can be constructed from magazine
        for (auto x : r) {
            if (m[x.first] < x.second) {
                return false;
            }
        }
        
        return true;
    }
};
