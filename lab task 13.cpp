#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
//creating a file
 ofstream File("newfile.txt");
 File<<"Hello! My name is Hafsa";
 File.close();
 string Text;
 //Reading data from the file
 ifstream readFile("newfile.txt");
 while(getline(readFile,Text))
 {
 	cout<<Text;
 }
 readFile.close();
 return 0;
}