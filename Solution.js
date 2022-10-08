
/**
 * @param {number[][]} transactions
 * @return {number}
 */
var minimumMoney = function (transactions) {

    let totalSpending = 0;
    let maxCashback = 0;
    let maxCost = 0;

    for (let transaction of transactions) {

        let cost = transaction[0];
        let cashback = transaction[1];

        if (cost > cashback) {
            totalSpending += cost - cashback;
            maxCashback = Math.max(maxCashback, cashback);
        } else {
            maxCost = Math.max(maxCost, cost);
        }
    }

    return totalSpending + Math.max(maxCost, maxCashback);
};
