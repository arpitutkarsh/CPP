#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//We are given with an integer array bloomDay, an integer m and an integer k.
//Here m is the number of buquets  and k is the number of adjacent flowers required 
//The array's elements will consist of number of blooming days for n flowers
//bloomDay = {7,7,7,7,13,11,2,7}
//The flower present at the 0th index will bloom at the 7th day and before that it hasnt bloomed
//For all the flowers to bloomed is only possible on the 13th day
//We know that the Answer will range from 7 to 13 as 7 is minimum element of the array and 13 is the maximum element of the array



#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int day, int m, int k) {
    int n = arr.size(); //size of the array
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}
int roseGarden(vector<int> arr, int k, int m) {
    long long val = m * 1ll * k * 1ll;
    int n = arr.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    //apply binary search:
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(arr, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
}

int main()
{
    vector<int> arr = {1,10,3,10,2};
    int m = 3;
    int k = 1;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}

