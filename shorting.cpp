#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int bubbleShot()
{
    int i, a, n;
    for (i = 1; i <= n - 1; i++)
    {
        int j = 0;
        int s = 0;
        while (i < (n - i))
        {
            if (a[j + 1] < a[j])
            {
                int t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
                s = 1;
            }
            j++ ;
        }
    }
}

int main()
{
    // your code goes here
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] <= a)
            {
                cout << 0 << endl;
            }
            // else if ()
        }
    }
    return 0;
}
