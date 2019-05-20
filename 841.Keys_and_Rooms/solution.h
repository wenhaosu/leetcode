using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms) {
        set<int> my_keys(rooms[0].begin(), rooms[0].end());
        my_keys.insert(0);
        set<int> new_keys = my_keys;
        set<int> temp_keys;
        while (!new_keys.empty()) {
            for (auto key : new_keys) {
                for (auto new_key : rooms[key]) {
                    if (my_keys.find(new_key) == my_keys.end()) {
                        temp_keys.insert(new_key);
                        my_keys.insert(new_key);
                    }
                }
            }
            new_keys = temp_keys;
            temp_keys.clear();
        }
        return my_keys.size() == rooms.size();
    }
};