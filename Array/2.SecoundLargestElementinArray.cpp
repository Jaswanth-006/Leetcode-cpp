// Secound Largest number in the given array //

// take an array arr[] = 


/*
## Brute Force

sort the given array and the secound last index in the sorted array 
will the secound largest element if there is no duplicate of largest element  in the given array

if the largrest number have dupilicate in the given array 


largest = last element of sorted array arr[n-2]
for(i=n-2;i>0;;i--){
   if(arr[i] != largest){
    secound largest = arr[i];
    break;
}
}

# Time complexity for brute force is ------->>> O(nlogn) + n

*/


/*
## better soolution

have two pass one for largest and other for secound largest

#first pass for largest 

largest = arr[0] assuming all the elements in the array is positive
for(i=0;i<n;i++){
   if(arr[i] > largest){
     largest = arr[i];
   }
}
 
#secound pass for secound largest


slargest = -1  
for(i=0;i<n;i++){
   if(arr[i] > slargest || arr[i] < largest){
     slargest = arr[i]
   }

}


# Time complexity for the better approach O(n+n) = O(2n)
*/


//## Optimal solution

#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(const vector<int>& a) {
    int largest = -1;
    int slargest = -1;

    int n = a.size();

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }

    return slargest;
}

int main() {
    vector<int> nums = {1, 2, 4, 7, 7, 5};

    int secondLargest = findSecondLargest(nums);

    cout << "Second largest is: " << secondLargest << endl;

    return 0;
}


// time complexity of optimal solution is ---->> O(n)





