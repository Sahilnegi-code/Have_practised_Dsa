#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[], int students, int mid)
{
    int sum = 0;
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            if (count > students)
            {

                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}
int main()
{
    int arr[] = {20, 10, 30, 40};
    int arrsize = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    int min = INT_MIN;

    for (int x : arr)
    {
        sum = sum + x; // sum +=x
        if (x > min)
        {
            min = x;
        }
    }
  
    int students = 3;
    int low = min;
    int high = sum;
    int ans = 0;
if(students>arrsize){
cout<<"no ans";

}
else if (students== arrsize){
cout<<low ;
}
else{

    while (low <= high)
    {
        int mid = (low + high)  / 2;
        if (ispossible(arr, students, mid) == true)
        {
            ans = mid;
            cout<<ans<<endl;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<<ans;
}
    


    return 0;
}
