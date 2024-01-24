#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	public :
		int id;
		char name[100];
		public :
			void set(){
				cout<<"Enter id = "<<endl;
				cin>>id;
				cout<<"Enter name = "<<endl;
				cin>>name;
			
			}
			
};
class Employee1{
	public :
		char role[100];
		int salary;
		public :
			void set1(){
				cout<<"Enter role = "<<endl;
				cin>>role;
				cout<<"Enter salary = "<<endl;
				cin>>salary;
			
		
		
	}
};
class Employee2 : public Employee1 , public Employee{
	public :
		char contact[10];
	    public :
	    	void print(){
	    		cout<<"Enter contact = "<<endl;
	    		cin>>contact;
	    		cout<<"====================="<<endl;
	    			cout<<"Employee is = "<<id<<endl;
				  cout <<"Employee name = "<<name<<endl;
				  	cout<<"Enter role = "<<role<<endl
				    <<"Enter salary = "<<salary<<endl;
	    			cout<<"Enter contact = "<<contact<<endl;
			}
			
			
};
int main()
{
	Employee2 e;
	e.set();
	e.set1();
	e.print();
	return 0;
}
