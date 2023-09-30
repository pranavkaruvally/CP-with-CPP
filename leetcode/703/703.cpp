class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int kth;
public:
    KthLargest(int k, vector<int>& nums) {
        for (int i: nums)
            pq.push(i);
        while (pq.size() > k)
            pq.pop();
        kth = k;
    }
    
    int add(int val) {
        if (pq.size() < kth) {
            pq.push(val);
            return pq.top();
        }
        if (val <= pq.top()) {
            int el = pq.top();
            return el;
        }

        pq.pop();
        pq.push(val);
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
