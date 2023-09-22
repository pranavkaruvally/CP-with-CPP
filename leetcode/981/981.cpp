class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> key_val;
public:
    TimeMap() {
        key_val = unordered_map<string, vector<pair<int, string>>>();
    }
    
    void set(string key, string value, int timestamp) {
        key_val[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (key_val.find(key) == key_val.end()) return "";
        int start = 0, end = key_val[key].size() - 1;
        int mid = 0;
        string res = "";
        while (start <= end) {
            mid = start + (end - start)/2;
            auto temp = (key_val[key])[mid];
            if (temp.first == timestamp) {
                res = temp.second;
                break;
            }

            if ((key_val[key])[mid].first < timestamp) {
                res = temp.second;
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
