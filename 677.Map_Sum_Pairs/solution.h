using namespace std;

class MapSum {
private:
    map<string, int> mp;

public:
    MapSum() = default;

    void insert(const string &key, int val) {
        mp[key] = val;
    }

    int sum(const string &prefix) {
        int sum = 0, n = prefix.size();
        for (auto it = mp.lower_bound(prefix); it != mp.end() && it->first.substr(0, n) == prefix; it++)
            sum += it->second;
        return sum;
    }
};