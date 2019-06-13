using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        unordered_map<int, int> map;
        vector<int> result(nums1.size(), -1);

        for (int i = 0; i < nums2.size(); i++) {
            map[nums2[i]] = -1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    map[nums2[i]] = nums2[j];
                    break;
                }
            }
        }

        for (int i = 0; i < nums1.size(); i++) {
            result[i] = map[nums1[i]];
        }

        return result;
    }
};