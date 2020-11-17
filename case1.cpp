#include <iostream>
using namespace  std;
int main()
{
	int i,j,count=8;
	for (i = 1; i < count; i++)
	{
		for (j = 1; j < i; j++)
		{
			cout<<" ";
		}
		for (j = i; j <count ; j++)
		{
			cout<<j<<" ";
		}
	cout<<" "<<endl;
	}
	
for(i=count-1;i>0;i--)
{
	for (j = 1; j < i; j++)
	{
		cout<<" ";

	}
	for (j = i; j <count ; j++)
		{
			cout<<j<<" ";
		}
	cout<<" "<<endl;
}
return 0;

}