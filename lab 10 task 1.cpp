#include<iostream>
using namespace std;
//function definition

void addition(int a,int b)
{
 int c1=a+b;
cout<<"addition is"	<<c1<<endl;
}
void mul(int a,int b)
{
int 	multiply=a*b;
	cout<<"multiplication is"<<multiply<<endl;
}
void sub(int a,int b)
{
	int subtraction=a-b;
	cout<<"subtraction is"<<subtraction<<endl;
}
int main()
{
	
	int a;
	cout<<"Enter a "<<endl;
	cin>>a;
	int b;
	cout<<"Enter b"<<endl;
	cin>>b;
	


	addition(a,b);
	mul(a,b);
	sub(a,b);
	
	return 0;
}
