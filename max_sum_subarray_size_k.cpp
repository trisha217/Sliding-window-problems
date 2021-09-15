#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &vec, int n, int k)
{
    int mx = INT_MIN;
    int sum = 0;
    int i = 0;
    int j = 0;
    while (j < n)
    {
        sum = sum + vec.at(j);
        if (((j - i) + 1) < k)
        {
            j++;
        }
        else if (((j - i) + 1) == k)
        {
            mx = max(mx, sum);
            sum = sum - vec.at(i);
            i++;
            j++;
        }
    }
    return mx;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cout <<"Maximum sum is: "<< find(vec, n, k) << endl;
    return 0;
}