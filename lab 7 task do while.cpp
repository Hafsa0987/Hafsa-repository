#include<iostream>
using namespace std;
int main()
{
	//5! 5*4*3*2*1=120
	int n;
	int i=1;
	long factorial=1.0;
	cout<<"Enter a positive integer"<<endl;
	cin>>n;
	if(n<0)
	cout<<"Error!factorail of a negative number does not exist"<<endl;
	else
	{
		do
		{
			factorial*=i;
			//f=f*i
			i++;
		}
		while(i<=n);
		cout<<"Factorial is"<<factorial<<endl;
	}
	return 0;
}