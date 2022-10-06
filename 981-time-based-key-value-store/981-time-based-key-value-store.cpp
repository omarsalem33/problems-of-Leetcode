bool compareTimestamp (const std::pair<int, string>& left, int t) {
    return t < left.first;
}

class TimeMap {
    unordered_map<string, vector<pair<int, string>>> m_repr;
    
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        this->m_repr[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        const auto& vec = this->m_repr[key];
        auto it = lower_bound(vec.rbegin(), vec.rend(), timestamp, compareTimestamp);
        
        if (it == vec.rend()) {
            return "";
        }
        
        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */