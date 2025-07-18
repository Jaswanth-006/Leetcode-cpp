/*
   Q. Write a program to remove duplicates from Sorted Array and Return K where K is the Last position of distinct element.
 * Example 1: 

   Input: arr[1,1,2,2,2,3,3]
   
   Output: arr[1,2,3,_,_,_,_]
   
   Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.
   
   Example 2: 
   
   Input: arr[1,1,1,2,2,3,3,3,3,4,4]
   
   Output: arr[1,2,3,4,_,_,_,_,_,_,_]
   
   Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

 */


// import the set function #include <set>


//brute force method for removing  duplicate from an sorted Array


#include <iostream>

#include <set>
#include <vector>

using namespace std;

int Removeduplicate(vector<int>& arr){

    set<int> st;

    /* 
        // BruteForce 

        Time complexity : O(n) 
        Space complexity : O(n)
    */


    // for(int num:arr){
    //     st.insert(arr[num]);
    // }
    
    // int index = 0;
    // for(int val:st){
    //     arr[index++] = val; 
    // }

    // return index;


    /*

    // Optimal or better Approach

    Time complexity : O(n)
    space complexity : O(1)   
    */

    int i =0;

    for(int j=1; j<arr.size(); j++)



}


int main(){
    vector<int> nums = {1,1,2,2,2,3,3};

    int newSize = Removeduplicate();

    cout << "array after removing duplicated:";
    for(int i=0;i <newSize;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

}