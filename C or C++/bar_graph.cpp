#include <bits/stdc++.h>
/*
 * Problem Statement:
 * Given a bar graph with some given heights.
 * Remove exactly k bars such that the max difference between the heights of 2 any consecutive bars is minimized.
 *
 * INPUT: number of test cases t
 *        next t lines contain: an integer n on the first line denoting the number of bars
 *                              n integers on the second line denoting the height of the bars
 * 
 * OUTPUT: Print the max. difference between the heights of 2 consecutive bars after the removal of k bars
 *
INPUT: 

2
9 3
1 1 2 4 3 4 6 6 5
9 4
1 6 2 6 4 4 5 3 1

OUTPUT:
3
2

Solution: Time = O(nlogn); Space: O(1)
 */
using namespace std;
const int MX = 400000;
int a[MX];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        int mn=INT_MAX;
        for(int j=0;j < k+1;j++)
            mn = min(a[j+(n-k-1)] - a[j], mn);
        cout << mn << "\n";
    }
    return 0;
}
