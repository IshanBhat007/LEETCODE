class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if not prices:
            return 0
        time_to_buy = prices[0]
        time_to_sell = 0
        for price in prices:
            time_to_buy = min(time_to_buy,price)
            time_to_sell = max(time_to_sell , price-time_to_buy)
        return time_to_sell
