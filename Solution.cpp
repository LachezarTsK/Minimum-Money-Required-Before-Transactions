
#include <vector>
using namespace std;

class Solution {
    
public:
    long long minimumMoney(vector<vector<int>>& transactions) {

        long long totalSpending = 0;
        long long maxCashback = 0;
        long long maxCost = 0;

        for (const auto& transaction : transactions) {
            
            long long cost = transaction[0];
            long long cashback = transaction[1];
            
            if (cost > cashback) {
                totalSpending += cost - cashback;
                maxCashback = max(maxCashback, cashback);
            } else {
                maxCost = max(maxCost, cost);
            }
        }

        return totalSpending + max(maxCost, maxCashback);
    }
};
