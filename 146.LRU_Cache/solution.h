#include <list>

using namespace std;

class LRUCache {
private:
    int capacity;
    unordered_map<int, pair<int, list<int>::iterator>> cache;
    list<int> order;

    void update_cache(int key, int value) {
        order.push_back(key);
        auto iter = order.end();
        cache[key] = pair<int, list<int>::iterator>(value, --iter);
    }

public:
    explicit LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        int value = -1;
        auto check = cache.find(key);
        if (check != cache.end()) {
            value = check->second.first;
            order.erase(check->second.second);
            update_cache(key, value);
        }
        return value;
    }

    void put(int key, int value) {
        auto check = cache.find(key);
        if (check != cache.end()) order.erase(check->second.second);
        else if (order.size() == capacity) {
            cache.erase(order.front());
            order.pop_front();
        }
        update_cache(key, value);
    }
};