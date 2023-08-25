class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int roundedAmount;
        int temp;    //Remainder 
        
        temp = purchaseAmount%10;
        if(temp>=5){
            roundedAmount = purchaseAmount-temp+10;
        }
        else
            roundedAmount = purchaseAmount-temp;
        
        return 100-roundedAmount;
    }
};  
// TC- O(1)    // SC- O(1)
// Leetcode Biweekly Contest-110 -> Q1