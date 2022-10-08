
public class Solution {

    public long minimumMoney(int[][] transactions) {

        long totalSpending = 0;
        long maxCashback = 0;
        long maxCost = 0;

        for (int[] transaction : transactions) {

            int cost = transaction[0];
            int cashback = transaction[1];

            if (cost > cashback) {
                totalSpending += cost - cashback;
                maxCashback = Math.max(maxCashback, cashback);
            } else {
                maxCost = Math.max(maxCost, cost);
            }
        }

        return totalSpending + Math.max(maxCost, maxCashback);
    }
}
