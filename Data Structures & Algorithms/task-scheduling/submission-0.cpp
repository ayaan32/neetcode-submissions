class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26,0);
        for(int i : tasks) {
            count[i - 'A']++;
        }
        priority_queue<int> heap;
        for(int i : count) {
            if(i>0) heap.push(i); 
        }
        queue<pair<int, int>> q;
        int time = 0;
        while(!heap.empty() || !q.empty()) {
            time++;
            if(heap.empty()) {
                time = q.front().second;
            } else {
                int cnt = heap.top() - 1;
                heap.pop();
                if(cnt>0) {
                    q.push({cnt, time+n});
                }
            }
            if(!q.empty() && q.front().second == time) {
                heap.push(q.front().first) ;
                q.pop();
            }
        }
        return time;
    }
};
