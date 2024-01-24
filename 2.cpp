#include<iostream>
using namespace std;
class Mother{
	public :
		void get()
		{
			cout<<"THIS MASSAGE FROM MOTHER CLASS...."<<endl;
		}
};
class Daugther : public Mother{
	public :
		void get()
		{
			cout<<"THIS MASSAGE FOR DAUGHTER CLASS.... "<<endl;
		}
};
int main()
{
	Daugther d;
	d.get();
	d.get();
	return 0;
}
