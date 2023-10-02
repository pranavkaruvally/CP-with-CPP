class Solution {
private:
    int getNext(int n) {
        int newNum = 0;
        while (n > 0) {
            newNum += (n%10)*(n%10);
            n /= 10;
        }
        return newNum;
    }
public:
    bool isHappy(int n) {
        int slow = n, fast = getNext(n);

        while (slow != fast && fast != 1) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }n

        if (fast == 1) return true;
        return false;
    }
};
