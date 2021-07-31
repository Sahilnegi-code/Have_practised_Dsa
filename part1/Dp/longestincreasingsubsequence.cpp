#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 7, 2, 1,0};
    int dp[5];
    for (int i = 1; i < 5; i++)
    {
        dp[i] = 0;
    }
    dp[0] = 1;
    int max;
    for (int i = 1; i <= 4; i++)
    {

        for (int j = 0; j < i; j++)
        {
            max = 0;
            if (arr[i] > arr[j])
            {
                if (dp[j] > max)
                {
                    max = dp[j];

                }

            }

        }
        dp[i]=max+1;
    }


    int lss = dp[0];
    for(int i =1;i<5;i++){
if(dp[i]>lss){
   lss = dp[i];
}
    }
    cout<<lss;
    return 0;
}