#include <bits/stdc++.h>
using namespace std;
int main()
{
    int wt[] = {1, 3, 4, 7};
    int val[] = {1, 4, 5, 7};
    int limiting = 7;
    int dp[5][8];

    // jab zero element ho then max it can maximum can  make zero only.
    // when we have to form zero maximum all element acan make
    for (int i = 0; i < 5; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i < 8; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            // ;
            if (j >= wt[i - 1])
            {

                if (dp[i - 1][j - wt[i - 1]] + val[i - 1] > dp[i - 1][j])
                {
                    dp[i][j] = dp[i - 1][j - wt[i - 1]] + val[i - 1];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
            else
            {

                dp[i][j] = dp[i - 1][j];
            }
        }
    }
   
    cout<<dp[4][7];
    return 0;
}