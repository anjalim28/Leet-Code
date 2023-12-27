class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        stack<pair<char, int>> st;
        int cost = 0;
        for (int i = 0; i < colors.length(); i++) {
            pair<char, int> pi = make_pair(colors[i], neededTime[i]);
            while (!st.empty() && st.top().first == pi.first) {
                if (st.top().second < pi.second) {
                    cost += st.top().second;
                    st.pop();
                } else {
                    cost += pi.second;
                    pi = st.top();
                    st.pop();
                }
            }
            st.push(pi);
        }
        return cost;
    }
};
