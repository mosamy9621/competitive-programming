class Solution {
public:
    int memo[46][46];
    int climbStairs(int n) {
        memset(this->memo,0,sizeof(this->memo));
        return this->solve(n,0);
    }
    int solve (int n, int steps) {
        if(steps ==n){
            return 1;
        }
        if(memo[n][steps]!=0){
            return memo[n][steps];
        }
        int out =0;
        if(steps+2 <=n ) {
            out+=solve(n,steps+2);
        }
         out+=solve(n,steps+1);
        return this->memo[n][steps]=out;
    }
};