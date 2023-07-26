class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int n = answerKey.length();
        int maxm = 0;
        int i = 0;
        unordered_map<char, int> count;
        for (int j = 0; j < n; j++)
        {
            char curr = answerKey[j];
            count[curr]++;
            maxm = max(maxm, count[curr]);
            if (j - i + 1 > maxm + k)
            {
                count[answerKey[i]]--;
                i++;
            }
        }
        return n - i;
    }
};