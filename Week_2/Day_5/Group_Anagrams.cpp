class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {/*The logic we will use here is that we will have to find a common
         identifer between anagrams*/
        unordered_map<string,vector<string>> mp;/*We create a map that will store the key which will be the common identifier 
        btw anagrams and value will be the array of anagrams grouped together*/
        for(string s:strs){
            string temp=s;//we create a copy of string
            sort(temp.begin(),temp.end()); // the common identifier for anagrams word be that on sorting them the result would be same
            mp[temp].push_back(s);//the sorted string is used as an identifier/key
        }
        vector<vector<string>> res; //array to store array of anagrams
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};