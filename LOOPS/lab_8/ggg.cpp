#include<iostream>
using namespace std;
int main()
{
/*{
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
        cout<<"*"<<endl;
        }
cout<<endl;
    }*/
// {
//     int i=1;
//     while(i<=3)
//     {
//         int j=1;
//         while(j<=3)
//         {
//             cout<<endl<<j;
//             j++;
//         }
//         i++;
//     }

for(int i=1; i<=5; i++){
    for(int j=5; j>=i;  j--)
    {
        cout<<j;
    }
    cout<<endl;
}
return 0;
}
