#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter any number to run aa loop:";
cin>>num;
if(num>0)
{
for( int i=0; i<=num;  i++){

cout<<"iterations"<<i<<endl;
}
}
else{
    cout<<"enter positive number"<<endl;

}



return 0;
}