class Solution
{
public:
    bool isAnagram(string s, string t)
    { // Anagram is a word that can be formed by re arranging letters of a given word
        if (s.size() != t.size())
        {
            return false; // if size of two words is not equal then one can't be anagram of other
        }
        map<int, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i] - 'A']++; // we store the frequency of each character in strings 's'
        }
        for (int i = 0; i < t.size(); i++)
        {
            mp[t[i] - 'A']--; // we reduce the frequency of letter if it is in 't' string
        }
        /*if a string 't' will be anagram of string 's' then after increase and decrease of frequency of
         letters frequency of all letters must be zero.*/

        for (auto it : mp)
        {
            if (it.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};