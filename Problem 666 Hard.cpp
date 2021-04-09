// This problem was asked by Microsoft.

// Given an array of positive integers, divide the array into two subsets such that the difference between the sum of the subsets is as small as possible.

// For example, given [5, 10, 15, 20, 25], return the sets {10, 25} and {5, 15, 20}, which has a difference of 5, which is the smallest possible difference.


//  The Brute Force Approach is to create all possible subsets and find smallest difference.
//  This can be done by Bitmasking Time Complexity would be O(2^n).

// Another approach 

#include <bits/stdc++.h>
using namespace std;
 
// Returns the minimum value of the difference of the two sets.
int findMin(int arr[], int n)
{
    // Calculate sum of all elements
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    
}
 
int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The minimum difference between 2 sets is "
         << findMin(arr, n);
    return 0;
}