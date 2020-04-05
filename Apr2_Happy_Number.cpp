class Solution {
public:
    // O(inf) Time: At worst due to infinite loop
    // O(1) Memory
    // Returns "Happiness"
    int sumNum(int n) {
        int sum = 0;
        while (n) {
            int digit = n % 10;
            n = n/10;
            sum += digit*digit;
        }
        return sum;
    }
    bool isHappy(int n) {
        int curr_num = n;
        int count = 0;
        
        // 10,000 is an arbitrary number of attempts
        while (count < 10000) {
            int summed_num = sumNum(curr_num);
            if (summed_num == 1) {
                return true;
            }
            count++;
            curr_num = summed_num;
        }
        return false;
    }
};