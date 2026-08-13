class Solution {
private:
    priority_queue<int> maxHeap;
public:
    int lastStoneWeight(vector<int>& stones) {
        for(int s : stones) {
            maxHeap.push(s);
        }
        while(maxHeap.size() > 1) {
            int first = maxHeap.top();
            maxHeap.pop();
            int sec = maxHeap.top();
            maxHeap.pop();
            if(sec > first) {
                maxHeap.push(sec-first);
            }
            else {
                maxHeap.push(first-sec);
            }
        }
        maxHeap.push(0);
        return maxHeap.top();
    }
};
