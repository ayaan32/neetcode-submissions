class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        for(int i : stones) {
            heap.push(i);
        }
        int first, second;
        while(heap.size()>1) {
            first = heap.top();
            heap.pop();
            second = heap.top();
            heap.pop();
            heap.push(first-second);
        }
        return heap.top();
    }
};
