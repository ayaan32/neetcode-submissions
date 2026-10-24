class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26,0);
        for(int i : tasks) {
            count[i - 'A']++;
        }
        int maxf = *max_element(count.begin(), count.end());
        int maxC = 0;
        for(int i : count) {
            if(i==maxf) maxC++;
        }
        return std::max((int)tasks.size(), ((maxf-1)*(n+1) + maxC));
    }
};