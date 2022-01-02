class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string, vector<string>> mp;
        
        for(int i=0; i<string_list.size(); i++) {
            string tmp=string_list[i];
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(string_list[i]);
        }
        
        vector<vector<string>> res;
        for(auto v : mp) {
            res.push_back(v.second);
        }
        return res;
    }
};
