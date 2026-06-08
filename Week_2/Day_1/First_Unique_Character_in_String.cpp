class Solution
{
public:
    int firstUniqChar(string s)
    {
        // we create an urorderd map to store the frequency of each character in the given string
        unordered_map<char, int> mp; 
        for (char c : s)    // using unordered map the worst case time complexity for searching is 0(n)
        {
            mp[c]++;
        }
        for (int i = 0; i < s.size(); i++)
        { // Now we loop over the map using index of string charcters
            if (mp[s[i]] == 1)
            { // the first charcter that has frequency 1 is first unique character and it's index is returned
                return i;
            }
        }
        return -1; // if there is no unique character then -1 is returned
    }
};