/*
Procedure code 
	Algorith(int Arr):
		for i=0 to length(Arr):
			Minimum_element = Arr[0]
			for each unsorted element:
				if element < Minimum_element.
				element = New_minimum.
				swap (Minimum_element, first unsorted position)
		end Selection_sort.
*/
#include<iostream>
using namespace std;
void algorithm(int ar[],int n)
{	
	int i,j,temp,min;
	for (i=0;i<(n-1);i++)
	{
		min=i;
		for (j=i+1;j<n;j++)
		{
			if (ar[min]>ar[j])
			min=j;
		}
		if (min!=1)
		{
			temp=ar[i];
			ar[i]=ar[min];
			ar[min]=temp;
		}
	}
	cout<<"Sorted Array:";
	for (i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
int main()
{
	int arr[]={4,5,3,6,7,13};
	int n=sizeof(arr)/sizeof(arr[0]);
	algorithm(arr,n);
	return 0;
}
