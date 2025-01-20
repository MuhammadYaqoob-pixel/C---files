#include<iostream>
using namespace std;
int inc(int i){
static int count=0;
count=count+i;
return(count);


}
int main(){
int i, j;
for(i=0; i<=6; i++)
 j=inc(i);
 cout<<j;















    return 0;
}