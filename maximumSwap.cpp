class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++) {
            if (str[i] < str[i + 1]) {
                int temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                break;
            }
        }
        int n = stoi(str);
        return n;
    }
};
