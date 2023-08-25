#include <bits/stdc++.h>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    // TWO POINTER APPROACH 

    int i = 0;
    int j = nums.size() - 1;

    while (i < j){
        if (nums[i] >= 0){
            swap(nums[i], nums[j]);
            j--;
        }
        else{
            i++;
        }
    }
    return nums;
}
// TC- O(n)    // SC- O(1)

int main(){
    vector<int> nums = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    vector<int> ans = separateNegativeAndPositive(nums);
    for (auto i : ans){
        cout << i << " ";
    }
    return 0;
}