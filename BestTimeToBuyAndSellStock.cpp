#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
     if(prices.size() < 2) return 0;
        
     int maxProfit = 0, minPrice = prices[0];
     for(int i=1; i<prices.size(); i++){
         if(prices[i] > prices[i-1]) maxProfit = max(maxProfit,prices[i]-minPrice);
         
         else minPrice = min(minPrice, prices[i]);
     }
     return maxProfit;
}
