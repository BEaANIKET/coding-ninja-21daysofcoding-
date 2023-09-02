#include <bits/stdc++.h> 
bool checkDiff(int *arr, int N, int K) {
    std::sort(arr, arr + N); // Sort the input array in ascending order

    for (int i = 0; i < N; i++) {
        // Use binary search to find the element with an absolute difference of K
        int target = K + arr[i];
        int left = i + 1, right = N - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target)
                return true;
            else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return false;
}
