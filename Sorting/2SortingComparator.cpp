#include "bits/stdc++.h"
using namespace std;

void printarr(vector<int>&nums)
{
	for(int i=0;i<(int)nums.size();i++)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
}
//Sorting with comparator 
void solve()
{
   vector<int>nums{9,8,7,6,5,4,3,2,1};
   cout<<"Before Sorting\n";
   printarr(nums);
   sort(nums.begin(),nums.end(),[](int a,int b){
   	// True if re arrangement is not required else false 
   	// if a should come before b return true
   	// if a should not come before b return false
   	
   		return a>b;
   });
   cout<<"After Sorting\n";
   printarr(nums);
}

int main()
{
    solve();
    return 0;
}