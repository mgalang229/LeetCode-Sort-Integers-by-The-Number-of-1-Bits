class Solution {
    int count_bits(int x) {
        int bits = 0;
        while (x > 0) {
            bits += x % 2;
            x /= 2;
        }
        return bits;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](const int& x, const int& y) {
            if (count_bits(x) == count_bits(y)) {
                return x < y;
            }
            return count_bits(x) < count_bits(y);
        });
        return arr;
    }
};
