class Solution {
public:
    int findComplement(int num) {
        
        long long num1 = 1,i=1;
        
        while(num1<=num){
            num1 = pow(2,i);
            i++;
        }
        
        return (num^(num1-1));
    }
};

//Explanation
//find the smallest power x of 2 which is greater than given integer.
//XOR of num and (x-1) will give complement of num because x-1 contains all one in binary.
