//Largest Element in an Array

/*
 ## Brute Force

 sort the Array anf the last inedex will be target element that is largest element in the array

 Time  complexity will be ------>> O(nlogn) bceause if sorting the arry 
 space  complexity will be ------>> O(1)

 */

 
 // ## Optimal soltuion


 #include<iostream>

#include<vector>

using namespace std;

int findlargest(const vector<int> &a){
    int largest = a[0];
    int n = a.size();

    for(int i =1 ; i<n;i++ ){
        if(a[i] > largest){
            largest = a[i];
        }
    }
    return largest;
}

int main(){
    vector<int> nums = {3,2,1,5,2};

    int largest = findlargest(nums);

    cout << "largest amount is: " << largest <<  endl;

    return 0;
}
