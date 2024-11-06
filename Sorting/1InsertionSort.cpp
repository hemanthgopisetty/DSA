#include <bits/stdc++.h>
using namespace std;
/**
 * Insertion sort is taking one element from unsorted list given and keeping it in the right place by assuming first element is sorted
 * 
 * 
 * pick an element , until that element is not so greater , keep moving all the elements to current picked element position
 */
void printarr(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
void fn()
{
    vector<int> nums{9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = nums.size();
    cout << "Before Sorting\n";
    printarr(nums);
    cout << "\nAfter Sorting\n";
    //assume first element is sorted
    //remaining part of given elements were un-sorted
    //pick first element of that unsorted element , let it be x
    //compare that x with sorted list elements <--- from backwards
    //keep moving elements to next one by one until x finds correct positon
    for(int i=0;i<n;i++)
    {
        int key = nums[i];
        int j = i-1;
        while(j>=0 and nums[j]>key)
        {
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }

    printarr(nums);
}
int main()
{
    fn();
    return 0;
}