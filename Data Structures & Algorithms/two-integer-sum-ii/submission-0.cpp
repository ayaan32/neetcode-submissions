class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        unordered_map<int, int> map;
        for(int i=0; i<n; i++) {
            if(map.find(target-numbers[i]) != map.end()) {
                return {map[target-numbers[i]]+1, i+1};
            } 
            map[numbers[i]] = i;
        }
        return {};
    }
};