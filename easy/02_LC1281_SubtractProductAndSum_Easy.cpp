// LeetCode 1281: Subtract the Product and Sum of Digits of an Integer
// Approach: Extract digits using modulo and division
// Time Complexity: O(log10(n)), Space Complexity: O(1)

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n /= 10;
        }

        return product - sum;
    }
};
