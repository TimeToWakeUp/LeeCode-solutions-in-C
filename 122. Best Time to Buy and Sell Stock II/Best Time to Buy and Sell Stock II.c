int maxProfit(int* prices, int pricesSize) {
    int MaxProfit=0;
    
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i]-prices[i-1]>0)  MaxProfit+=prices[i]-prices[i-1];
    }
    return MaxProfit;
}
