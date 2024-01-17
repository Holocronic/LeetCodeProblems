class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int nVowelStrings = 0;
        vector<string> subWords(words.begin() + left, words.begin() + right + 1);
        
        for(string words : subWords){
            if(isVowel(words[0])  && isVowel(words[words.length()-1]))
                nVowelStrings++;
        }
        return nVowelStrings;
    }

    bool isVowel(char& ch){
        return ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? true : false);
    }
};
