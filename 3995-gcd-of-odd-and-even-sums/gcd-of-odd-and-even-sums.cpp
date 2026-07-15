class Solution {
private:

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

public:
    int gcdOfOddEvenSums(int n) {
        int odd = 1;
        int even = 2;

        vector<int> evenNum;
        vector<int> oddNum;

        while(n--){

         evenNum.push_back(even);
         even += 2;
         oddNum.push_back(odd);
         odd += 2;

        }
       int odnum = 0;
       int evnum = 0;

       for(int x : evenNum){
        evnum += x;
       }
       for(int x : oddNum){
        odnum += x;
       }
     return gcd(evnum, odnum);

        
    }

};