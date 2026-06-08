class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {     // we have to check if ransomnote can be formed using magazine
        unordered_map<char, int> mp;
        for (char ch : magazine)
        {
            mp[ch]++; // we store the frequency of all letter sof magazine string
        }
        for (char c : ransomNote)
        {
          /* to check if ransom note can be formend using magazin string we reduce the frequency of
          character which are in ransomnote string   */
            mp[c]--;
            if (mp[c] < 0)
            {
                 /* if frequency of certain character is less in amgazine and more in ransomnote
                 then it can't be used to formed ransomnote hence false or
                 if a character is present in ransomnote and not in magazine string */
                return false;
            }
        }
        return true;
    }
};