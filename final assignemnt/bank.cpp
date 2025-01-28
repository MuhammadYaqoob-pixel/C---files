#include<iostream>
using namespace std;

int main(){
	double balance=0.0;
	int choice;
	do{
	
		cout<<"1=Deposite"<<endl;
		cout<<"2=Check Balance"<<endl;
		cout<<"3=With Draw"<<endl;
		cout<<"4=Exit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>choice;
		
		if(choice == 1)
		{
			double amount;
			cout<<"enter amount to deposite"<<endl;
			cin>>amount;
			balance+=amount;
			cout<<"deposite successfully. New balance ="<<balance<<endl;	
		}
		else if(choice ==2 )
		{
			double amount;
			cout<<"enter amount to with draw"<<endl;
			cin>>amount;
		if(amount>balance){
			cout<<"insufficient balance. withdrawl failed"<<endl;
		}
		else{
			balance-=amount;
			cout<<"withdrawl successful. new balance"<<balance<<endl;
		}
		}else if(choice==3){
			cout<<"current balance="<<balance<<endl;
		}else if(choice==4){
			cout<<"existing program. good bye"<<endl;
		}
		else{
			cout<<"invalid choice please try again"<<endl;
		}}
		
		
		
		
		
		
		
		
		
		
		while(choice!=4);
}