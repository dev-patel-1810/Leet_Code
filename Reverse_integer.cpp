#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long p=0;
        while(x!=0){
            int c=x%10;
            p=p*10+c;
            x=x/10;
        }
        if(p>INT32_MAX || p<INT32_MIN){
            return{};
        }
        return static_cast<int>(p);
    }
};
int main(){
    Solution sol;
    int num=-231;
    int p=sol.reverse(num);
    cout<< "Reverse is" << p<< endl;
    return 0;
    }