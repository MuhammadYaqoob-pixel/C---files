#include<iostream>
using namespace std;
int main()
{
	int money;
	cout<<"i have money:"<<endl;
	cin>>money;
	if(money>=1000)
{
	cout<<"coffee at straw bruks"<<money<<endl;
	}	
	else if(money>=700)
	{
		cout<<"coffee at CCD:"<<money<<endl;
	}
	else if(money>=500)
	{
		cout<<"coffe at normal shop:"<<money;
		
	}
	else
	{
		cout<<"buy sachets and make coffee at home"<<money<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}