#include <iostream>
using namespace std;
struct StudentGrading {
    string name;
    string sapID;
    string address;
    string department;
    float marksSubject1;
    float marksSubject2;
    float maxMarks; 
};

void calculateMaxMarks(StudentGrading& student); 
void displayStudent(const StudentGrading& student);

int main() {
   
    StudentGrading student[5];

   
    for (int i = 0; i < 5; i++) {
        cout<<"\nEnter the details of student"<<i+1<<":\n";
	cout<<"Enter the students name  "<<endl;
	cin>>student[i].name;
	cout<<"Enter the sap id  ";
	cin>>student[i].sapID;
	cout<<"Enter the address  ";
	cin>>student[i].address;
	cout<<"Enter the department ";
	cin>>student[i].department;
	cout<<"Enter the marks for subject 1  ";
	cin>>student[i].marksSubject1;
	cout<<"Enter the marks for subject 2  ";
	cin>>student[i].marksSubject2;
	//clear the input buffer
	cin.ignore();
    }

    
    for (int i = 0; i < 5; i++) {
        calculateMaxMarks(student[i]); // Calculate maximum marks
        displayStudent(student[i]);   // Display student details
    }

    return 0;
}
void calculateMaxMarks(StudentGrading& student)
 {
    student.maxMarks = max(student.marksSubject1, student.marksSubject2);
}


void displayStudent(const StudentGrading& student)
{
    cout << "\nStudent Information:\n";
    cout << "Name " << student.name << endl;
    cout << "SAP ID " << student.sapID << endl;
    cout << "Address " << student.address << endl;
    cout << "Department " << student.department << endl;
    cout << "Marks in Subject 1 " << student.marksSubject1 << endl;
    cout << "Marks in Subject 2 " << student.marksSubject2 << endl;
    cout << "Maximum Marks " << student.maxMarks << endl;
}

