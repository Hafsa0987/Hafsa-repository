#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout<<"Enter the rows";
	cin>>rows;
	cout<<"Enter the columns";
	cin>>cols;
	int array[rows][cols];
	cout<<"Enter the array elements";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<"Elementn["<<i<<"]["<<j<<"]:";
			cin>>array[i][j];
		}
	}
	
	//display 2D array
	int sum=0;
	int i=0;
	int j=0;
	cout<<"\nThe 2D array is:\n";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout<<array[i][j]<<" ";
			sum=sum+array[i][j];
		}
		cout<<endl;
}
cout<<"the sum of array is"<<sum;
double average=sum/(rows*cols);
cout<<"the average of array is"<<average;
cout<<endl;
return 0;
}