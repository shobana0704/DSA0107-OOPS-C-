#include<iostream>

using namespace  std;

int main()
{
	int a,b;
	
	cout<< "enter two numbers:";
	cin>>a>>b;
	
	cout<<"addition = "<<a+b<<endl;
	cout<<"subtraction ="<<a-b<<endl;
	cout<<"multiplication = "<<a*b<<endl;
	if(b!=0)
	 cout<<"division = "<<a/b<<endl;
	 else
	 cout<<"divison is not possible";
	 
	 return 0;

}