// This problem was asked by IBM.

// Given an integer, find the next permutation of it in absolute order. For example, given 48975, the next permutation would be 49578.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k, i;
    cin >> n;

    vector<int> mal;
    k = n;
    while (k)
    {
        mal.push_back(k % 10);
        k = k / 10;
    }

    int p = mal.size();
    for (i = 0; i < p; i++)
    {
        cout << mal[i] << " ";
    }

    for (i = 0; i < p - 1; i++)
    {

        if (mal[i] > mal[i + 1])
        {
            break;
        }
    }
    if (i == p - 1)
    {
        cout << "No Larger Number Possible";
        return 0;
    }
    if (i != p - 1)
    {
        i++;
    }

    for (int j = 0; j <= i; j++)
    {
        if (mal[i] < mal[j])
        {
            swap(mal[i], mal[j]);
            break;
        }
    }

    reverse(mal.begin(), mal.begin() + i);

    for (int i = p - 1; i >= 0; i--)
    {
        k = k * 10 + mal[i];
    }
    cout << k << "\n";
    return 0;
}