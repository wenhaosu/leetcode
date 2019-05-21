#include <unordered_set>

using namespace std;

class Solution {
public:
    int ladderLength(const string &beginWord, const string &endWord, vector<string> &wordList) {
        unordered_set<string> words(wordList.begin(), wordList.end()), head{beginWord}, tail{endWord};
        int result = 2, word_len = beginWord.size();
        if (words.find(endWord) == words.end()) return 0;
        while (!head.empty() && !tail.empty()) {
            if (head.size() > tail.size()) swap(head, tail);
            unordered_set<string> temp;
            for (auto curr_word : head) {
                for (int i = 0; i < word_len; i++) {
                    char temp_char = curr_word[i];
                    for (int j = 'a'; j <= 'z'; j++) {
                        curr_word[i] = j;
                        if (tail.find(curr_word) != tail.end()) return result;
                        else if (words.find(curr_word) != words.end()) {
                            temp.insert(curr_word);
                            words.erase(curr_word);
                        }
                    }
                    curr_word[i] = temp_char;
                }
            }
            head = temp;
            result++;
        }
        return 0;
    }
};