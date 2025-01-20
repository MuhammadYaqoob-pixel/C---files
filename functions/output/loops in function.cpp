#include<iostream>
#include<string>
using namespace std;
void exam(int* i, int j)
{

j=j+5;
*i=*i+j;


}
int main(){
    int i=6; 
    int j=10;
    exam(&i, j);
    cout<<i+j;
// int inc(int i){
// static int count=0;
// count=count+i;
// return(count);


// }
// int main(){
// int i, j;
// for(i=0; i<=6; i++)
//  j=inc(i);
//  cout<<j;















    return 0;
}