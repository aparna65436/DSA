class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        stack<int> stack; // stores indices

        for (int idx = n - 1; idx >= 0; idx--) {

            // Pop all indices with temperature <= current
            while (!stack.empty() && 
                   temperatures[idx] >= temperatures[stack.top()]) {
                stack.pop();
            }

            // If stack is not empty, next warmer day exists
            if (!stack.empty()) {
                result[idx] = stack.top() - idx;
            }

            // Push current index
            stack.push(idx);
        }

        return result;
    }
};
