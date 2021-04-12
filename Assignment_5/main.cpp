#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements to generate: ";
    cin >> n;
    int arr[n];

    cout << endl;
    cout << "Randomly generated array: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 50 + 1;
        cout << arr[i] << " ";
    }

    int dp[n][2];

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;  //minimum length 1
        dp[i][1] = -1; //not part of a subsequence yet
    }
    int ma = 1;
    for (int i = 1; i < n; i++)
    {
        int len = 1;
        int dec = -1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                dec = 1;
                if (dp[j][0] >= dp[i][0])
                {
                    if (dp[j][1] == -1 || dp[j][1] == 0) //was lesser than its previous element
                    {
                        len = max(len, dp[j][0] + 1);
                    }
                }
            }
            else if (arr[j] > arr[i])
            {
                dec = 0;
                if (dp[j][0] >= dp[i][0])
                {
                    if (dp[j][1] == -1 || dp[j][1] == 1) //was greater than its previous element
                    {
                        len = max(len, dp[j][0] + 1);
                    }
                }
            }
        }
        dp[i][1] = dec;
        dp[i][0] = len;
        ma = max(ma, dp[i][0]);
    }

    cout << "\nLength of longest subsquence is: " << ma << endl;
    return 0;
}