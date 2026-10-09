class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> mH;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int num : nums) {
            mH.push(num);
            if(mH.size() > k) {
                mH.pop();
            }
        }
    }
    
    int add(int val) {
        mH.push(val);
        if(mH.size() > k) {
                mH.pop();
        }
        return mH.top();
    }
};
