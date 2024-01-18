class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurences;

        for (int i : arr) {

            if (occurences.find(i) == occurences.end()) {
                int nOccurences = 0;
                for (int j : arr) {
                    if (i == j)
                        nOccurences++;
                }
                occurences.insert({i, nOccurences});
            }
        }
        
        for (auto& [key1, value1]: occurences) {
            for (auto& [key2, value2]: occurences) {
                if(key1 != key2 && value1 == value2)
                    return false;
            }
        }
        return true;
    }
};
