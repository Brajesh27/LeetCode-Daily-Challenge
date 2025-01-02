class Solution {
public:
   
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        int q = words.size();
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        vector<int> arr(q, 0);
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            int n = s.length();
            if (vowels.count(s[0]) && vowels.count(s[n - 1])) {
                arr[i] = 1;
            }
        }
        vector<int> ans;
        vector<int> prefix(q + 1, 0);
        for (int i = 0; i < q; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }
        for (auto& query : queries) {
            int j = query[0], k = query[1];
            ans.push_back(prefix[k + 1] - prefix[j]);
        }
        return ans;
    }
};