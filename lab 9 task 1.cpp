#include<iostream>
using namespace std;
int main()
{
	int arr[5]={10,20,30,40,50};
	int sum=0;
	cout<<"Elements of the array are";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
		sum=sum+arr[i];
	}
	cout<<"the sum of arr is"<<sum;
	cout<<endl;
	return 0;
}