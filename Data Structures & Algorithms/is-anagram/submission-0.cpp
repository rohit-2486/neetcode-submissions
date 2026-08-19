class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> count;
        if(s.size()!= t.size()) return false;
        int n=s.size();
        for(int i=0; i<n; i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for (auto pair : count) {
            if (pair.second != 0)
                return false;
        }

        return true;
    }
};
