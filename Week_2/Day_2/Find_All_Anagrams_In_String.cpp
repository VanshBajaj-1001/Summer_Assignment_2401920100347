class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector <int> ans; //array to store starting index of permutation of p
        int m=s.size();//size of string s
        int n=p.size();//size of string p
        if(n>m){
            return ans;
        }
        vector<int> f1(26,0);  //to store the frequency 
        vector<int> f2(26,0); 
        for(char ch:p){
            f1[ch-'a']++;
        }/*Like permutation in string question we take window to size of string p in string s and check if frequency matches or not 
         if it matches we push the starting index of permutation in string s in ans array*/
        for(int i=0;i<n;i++){
            f2[s[i]-'a']++;
        }
        if(f1==f2){
            ans.push_back(0);  //if the first window consists of the permutation then we push 0 in ans array
        }
        for(int i=n;i<m;i++){
            f2[s[i]-'a']++;
            f2[s[i-n]-'a']--;
            if(f1==f2){
                ans.push_back(i-n+1);
            }
        }
        return ans;  //returning the array of starting indices of all permutation of string p
    }
};