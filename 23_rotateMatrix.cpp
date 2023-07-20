/*
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16

13  9   5  1
14  10  6  2
15  11  7  3
16  12  8  4
*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size(), i=0;
        while(i<n/2)
        {
            int a=i, b=i, c=n-i-1, d=n-i-1, temp;
            while(d>i)
            {
                temp = matrix[b][n-i-1];
                matrix[b][n-i-1] = matrix[i][a];

                swap(temp, matrix[n-i-1][c]);
                swap(temp, matrix[d][i]);
                swap(temp, matrix[i][a]);

                a++, b++, c--, d--;
            }
            i++;
        }
    }
};