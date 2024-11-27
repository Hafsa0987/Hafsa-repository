#include<iostream>
using namespace std;
struct user{
	string username;
	int password;
};
int main()
{
	user u1;
	int pass=9876;
	cout<<"Enter the username"<<endl;
	cin>>u1.username;
	cout<<"Enter the password"<<endl;
	cin>>u1.password;
		cin.ignore();
		if (u1.password==pass)
	{
		 cout << "Login successful! Welcome, " << u1.username << "!" << endl;
    } else {
        cout << "Login failed. Incorrect password." << endl;
    }
	return 0;
}
	
	