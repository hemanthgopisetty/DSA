#include <iostream>
#include <vector>
using namespace std;
/**
 * Bubble Sorting 
 * Repeating Swap larger number to last makes first elements sorted
 */
void printarr(vector<int>&nums)
{
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}
void fn()
{
    vector<int>nums{9,8,7,6,5,4,3,2,1};
    int n=nums.size();
    cout<<"Before Sorting\n";
    printarr(nums);
    cout<<"\nAfter Sorting\n";
    //n-1 is for to avoid last check as last element is always sorted
    for(int i=0;i<n-1;i++)
    {
        //we move the largest elements to the last if ascending vice versa for descending
        //n-i-1 is for to avoid redundant checks
        for(int j=0;j<n-i-1;j++)
        {
     
            if(nums[j]>nums[j+1])swap(nums[j],nums[j+1]);

        }
    }
    printarr(nums);
}

int main()
{
    fn();
    return 0;
}