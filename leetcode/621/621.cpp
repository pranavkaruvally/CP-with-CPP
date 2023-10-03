class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> count;
        for (char i: tasks) count[i]++;

        priority_queue<int, vector<int>> pq;
        for (char i='A'; i <='Z'; i++)
            if (count[i] > 0)
                pq.push(count[i]);

        queue<pair<int, int>> que;
        int time = 0;

        while (!pq.empty() || !que.empty()) {
            if (!que.empty() && que.front().second <= time) {
                pq.push(que.front().first);
                que.pop();
            }
            time++;
            if (!pq.empty()) {
                int temp = pq.top() - 1;
                pq.pop();
                if (temp > 0) {
                    que.push({temp, time + n});
                }
            }
        }

        return time;
    }
};
