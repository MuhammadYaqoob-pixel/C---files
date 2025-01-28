#include<iostream>
using namespace std;
int main()
{

	int inc=50000;
	int income, age;
	cout<<"enter your age"<<endl;
	cin>>age;
	
	if(age >= 18)
	{
			cout<<"enter your income"<<endl;
	cin>>income;
if(income>=inc){

			cout<<"you are eligible for loan"<<endl;}
			else{
					cout<<" your income is low you are not eligible"<<endl;
	

			}
		}
		else{
			cout<<"your age is low you are not elegible"<<endl;
			
        }
        return 0;
}