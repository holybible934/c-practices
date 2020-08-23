//
// Created by CHANGCHUNGHUAN on 2020/8/23.
//
/* Say you have an array prices for which the ith element is the price of a given stock on day i.

   Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

   Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).
   */

int maxProfit(int* prices, int pricesSize){
    int total = 0;
    for (int i = 0; i + 1 < pricesSize; i++) {
        if (prices[i] < prices[i+1]) {
            total += prices[i+1] - prices[i];
        }
    }
    return total;
}
