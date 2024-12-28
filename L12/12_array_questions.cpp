// to find pow(x,n)
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(x==0) return 0.0;
        if(x==1) return 1.0;
        if(x== -1 && n%2==0) return 1.0;
        if(x== -1 && n%2!=0) return -1.0;

        long binForm = n;
        if(n<0){
            x=1/x;
            binForm = -binForm;
        }
        double ans = 1;

        while(binForm > 0){
            if(binForm%2==1){
                ans *= x;
            }
            x *= x;
            binForm /=2;
        }
        return ans;
    }
};

//stock buy and sell

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0, bestBuy = prices[0];

        for(int i=1; i<prices.size(); i++){
            if(prices[i]>bestBuy){
                maxProfit=max(maxProfit, prices[i]-bestBuy);

            }
            bestBuy=min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};

//container with most water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        for (int i=0; i<height.size(); i++){
            for (int j=i+1; j<height.size(); j++){
                int w=j-i;
                int ht=min(height[i], height[j]);
                int currWater=w*ht;

                maxWater=max(maxWater, currWater);
            }
        }
    return maxWater;
        
    }
}; // getting TLE error

//optimize with two pointer

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp=0, rp=height.size()-1;

        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp], height[rp]);
            int currWater=w*ht;
            maxWater=max(maxWater, currWater);

            height[lp]<height[rp]?lp++:rp--;
        }
    return maxWater;
        
    }
};



