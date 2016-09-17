#include <iostream>
#include<cstring>
using namespace std;



struct Name{
	
	
	char lastName[20];
	char firstName[20];
	
};
struct Item{
	
	char ID;
	char itemName[20];
	int itemPrice;
	
	
		
};


struct Order{
	
		int quantity;
		Item item;
			
};


struct Customer{
	
	
	Order order;
	Name name;

	
};

void newLine();

int main(){
	
	
	Customer customer[3];
	char contactNo;
	char day,month,year;
	
	int i;
	
	for(i=0;i<3;i++){
		
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cout<<"First name: ";
		cin.getline(customer[i].name.firstName, 19);
		cout<<"Last name: ";
		cin.getline(customer[i].name.lastName, 19);
		cout<<"Contact No.: ";
		cin>>contactNo;
		
		newLine();

		cout<<"Order Date "<<endl;
		cout<<"Day: ";
		cin>>day;
		cout<<"\nMonth: ";
		cin>>month;
		newLine();
		cout<<"\nYear: ";
		cin>>year;
		
		newLine();
		
		cout<<"\nEnter 3 items \n";
		
		for(int items=0;items<3;items++)
		{
		cout<<"ID: ";
		cin>>customer[i].order.item.ID;
		cout<<endl<<"Name: ";
		cin.getline(customer[i].order.item.itemName,19);
		cout<<endl<<"Price: ";
		cin>>customer[i].order.item.itemPrice;
		newLine();
		cout<<"Quantity: ";
		cin>>customer[i].order.quantity;
		newLine();
		}
		
		
		
		
		
		/*first name
		last name
		contact no
		order date
		day
		month
		year
		enter 3 items
		id
		name
		price
		quantity
		id
		name
		banana
		price
		quantity*/		
		
	}
	
	
	
}

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}









