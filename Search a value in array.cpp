#include<iostream>
using namespace std;
int main()
{
	int array[5],value,first=0,mid,last=4;

	mid=(first+last)/2;
	
	cout<<"Enter array elements: ";
	for(int i = 0; i < 5; i++)
		cin>>array[i];
		
	cout<<"Enter the value to be searched: ";      // must be sorted
	cin>>value;
	
	while(first<=last)
	{
		if(value==array[mid])
		{
			cout<<"Value found at index "<<mid;
			break;
		}
		else if(value>array[mid])
		first=mid+1;
		else
		last=mid-1;
		mid=(first+last)/2;
	}
	if(first>last)
	cout<<"Value not found";
	return 0;
}
