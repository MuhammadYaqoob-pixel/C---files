#include<iostream>
using namespace std;
int main(){

// for(int i=10; i>=0; i--){
//     cout<<i<<endl;
// }

// int num;
// int range;
// cout<<"enter your number that you want to see:"<<endl;
// cin>>num;
// while (range<=10)
// {
//     /* code */
//     cout<<num<<"*"<<range<<"="<<num*range<<endl;
//     range++;
//     }
int num=4;
int guess;
do
{
  cout<<"enter guess number betwwen 1and 5:"<<endl;
  cin>>guess;
    /* code */
} 
while(guess!=num);
return 0;
}