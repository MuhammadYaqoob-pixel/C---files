#include<iostream>
using namespace std;
int jumble(int a, int b){
 a=2*a+b;

return a;




}
int main()
{
int a=2, b=5;
b=jumble(b,a);
a=jumble(b,a);

cout<<a;





    return 0;
}
