// This problem was asked by Amazon.

// Given n numbers, find the greatest common denominator between them.

// For example, given the numbers [42, 56, 14], return 14.

//  Here, First take 2 numbers find gcd between them? It's easy right?
//  But, when we have 3 numbers how to find gcd for all of them?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,min1=1000000,gcd=1;
    cin >> n;

    vector<int> mal(n);

    for(int i=0;i<n;i++){
        cin>>mal[i];
    }
    for(auto i : mal){
        if(min1 > i){
            min1 = i;
        }
    }

    for(int i=2;i<=min1;i++){
        for(auto j: mal){
            if(j%i != 0){
                break;
            }
            gcd = i;
        }
    }

    cout<<gcd;

    return 0;
    
}