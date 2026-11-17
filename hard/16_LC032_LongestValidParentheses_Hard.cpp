// LeetCode 32: Longest Valid Parentheses
// Approach: Stack storing indices of unmatched parentheses
// Time Complexity: O(n), Space Complexity: O(n)

#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // Base index for valid substring length calculation
        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i); // New base index
                } else {
                    maxLen = max(maxLen, i - st.top());
                }
            }
        }

        return maxLen;
    }
};
