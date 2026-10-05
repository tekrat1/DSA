class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>answer;
        
          unordered_map<string,vector<string>>mp;
          for(int i=0;i<strs.size();i++){
             string word = strs[i];
             string sorted_word =word;
              sort(sorted_word.begin(),sorted_word.end());

              mp[sorted_word].push_back(word);
          };

      for(auto it:mp){
        answer.push_back(it.second);
      }
          
          return answer;
    }
};