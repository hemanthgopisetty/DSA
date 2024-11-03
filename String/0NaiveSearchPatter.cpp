#include<iostream>
using namespace std;
//assuiming n>m s.size()>p.size()
//Naive Search O(n^2)
//From each index of s searching p ,in O(n*m)
void search(string&s,string&p)
{
	int n=s.size();
	int m=p.size();

	for(int i=0;i<n;i++)
	{
		int cnt=0;
		for(int j=0;j<m;j++)
		{

			if(p[j]!=s[i+j])
			{
				break;
			}
			cnt++;
		}
		if(cnt==m)
		{
			cout << "Pattern found at index " << i << endl;
		}
	}
}
void solve()
{
	string s = "AABAACAADAABAABA";
    string pat = "AABA";
    search(s,pat);
}
int main()
{
    solve();
}