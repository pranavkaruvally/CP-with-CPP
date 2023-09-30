class Compare {
private:
    inline double distance(vector<int>& p) {
        return sqrt(p[0]*p[0] + p[1]*p[1]);
    }
public:
    bool operator()(vector<int>& a, vector<int>& b) {
        return distance(a) > distance(b);
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, Compare> pq(points.begin(), points.end());
        vector<vector<int>> result;
        for (int i=0; i<k; i++) {
            vector<int> el = pq.top();
            pq.pop();
            result.push_back(el);
        }

        return result;
    }
};
