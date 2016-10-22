#include<iostream>
#include <fstream>
using namespace std;


int main(){
	
	
	int num1;
	int num2;	
	int arr[4]={1,2,4,3};	
	int i;
	
	ifstream f("input.txt");
	
	
	
	while (f>>num1>>num2){
	
	
	for(i=0;num1<=num2;i++){
	
	cout<<num1<<" ";		   
	
	num1=num1+arr[i%4];		
	
	}
	}	
}
	
		
