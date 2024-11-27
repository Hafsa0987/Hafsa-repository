#include<iostream>
using namespace std;
struct Book{
	char BookTitle[20];
	char Author[20];
	double numberOfpages;
	double yearOfpublication;
	
};
int main()
{
	Book b1[5];
	for(int i=0;i<5;i++)
	{
	cout<<"\nEnter the details of Books"<<i+1<<":\n";
	cout<<"Enter the Book name"<<endl;
	cin.getline(b1[i].BookTitle,20);
	cout<<"Enter thr author name";
	cin>>b1[i].Author,20;
	cout<<"Enter the number of pages";
	cin>>b1[i].numberOfpages;
	cout<<"Enter the year of publication";
	cin>>b1[i].yearOfpublication;
	//clear the input buffer
	cin.ignore();
}

for(int i=0;i<5;i++)
{
	cout<<"\nBooks Information:\n";
	cout<<"Book name"<<b1[i].BookTitle<<endl;
	cout<<"Author name"<<b1[i].Author<<endl;
	cout<<"number of pages"<<b1[i].numberOfpages<<endl;
	cout<<"year of publication"<<b1[i].yearOfpublication<<endl;
	
	}	
	
	
	return 0;
}