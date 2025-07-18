/*
 * Check if an Array is Sorted
   Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.
   
   Note: Two consecutive equal values are considered to be sorted.
   
   Examples:
   
   Example 1:
   Input: N = 5, array[] = {1,2,3,4,5}
   Output: True.
   Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.
 */


#include<iostream>
#include<vector>
using namespace std;

int check_the_array_sorted(const vector<int> & arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {  // Use n - 1 to avoid accessing out of bounds
        if(arr[i] > arr[i + 1]) {
            return false; // Not sorted
        }
    }
    return true; // Sorted
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    bool check = check_the_array_sorted(nums); // Pass the vector as argument

    cout << "Sorted or not: " << check << endl;
}
