/*
Sample Input
2
40 20
20 40
Sample Output
30 10
impossible
*/
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a1=0,a2=0;
		cin>>a1>>a2;
		if(a1>a2&&(a1+a2)%2==0&&(a1-a2)%2==0)
		{
			cout<<(a1+a2)/2<<" "<<(a1-a2)/2<<endl;
		}
		else
		{
			cout<<"impossible"<<endl;
		}
	}
return 0;
}

