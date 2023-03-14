class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> boi;
        vector<vector<string>> ana;
        for (auto& s: strs) {
            string sa = s;
            std::sort(sa.begin(), sa.end());
            if (boi.find(sa) == boi.end()) {
                boi[sa] = ana.size();
                ana.push_back({s});
            } else {
                ana[boi[sa]].push_back(s);
            }
        }
        return ana;
    }
};