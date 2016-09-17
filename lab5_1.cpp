#include <iostream>
using namespace std;

struct Name{
       char fullname[30];
      
};

struct Student{
       int id;
       Name name;
       double grade[3];       
};

void newLine();

int main(){
    Student stud;
    double sum;
    
    cout << "Enter student record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.fullname, 29);
   
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.grade[i];  
			sum += stud.grade[i]/3;      
    }
    
    cout << "\n\n";
    cout << "Student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullname << endl;
    
    
   
    
    cout<<"Grades: "<<sum<<endl;
    cout<<"Remarks: ";
    
	if(sum>=75)
	{
	cout<<"Passed";
	
	}
    
    else 
    
    cout<<"Failed";
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}




