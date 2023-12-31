class Solution {
public:
    int maxLengthBetweenEqualCharacters(string inputString) {
        int stringLength = inputString.size();
        int maxDistance = -1;
        vector<int> lastOccurrence(26, -1);
        
        for (int i = 0; i < stringLength; i++) {
            if (lastOccurrence[inputString[i] - 'a'] == -1) {
                lastOccurrence[inputString[i] - 'a'] = i;
            } else {
                maxDistance = max(maxDistance, i - lastOccurrence[inputString[i] - 'a'] - 1);
            }
        }
        
        return maxDistance;
    }
};