int maxProfit(int* prices, int pricesSize) {
    int MaxCur,MaxSofar;  //MaxCur is the current max profit,MaxSofar is the max profit so far
    MaxCur=MaxSofar=0;
    
    for(int i=1;i<pricesSize;i++)
    {
        MaxCur+=prices[i]-prices[i-1]; //MaxCur(i)=MaxCur(i-1)+today profit
        if(MaxCur<0)  MaxCur=0;
        if(MaxCur>MaxSofar) MaxSofar=MaxCur;
    }
    return MaxSofar;
}
