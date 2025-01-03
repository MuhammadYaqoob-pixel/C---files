#include<iostream>
using namespace std;
int Linearsearch( int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
        return -1;
    }

int main()
{
int arr[]={ 2,3,4,5,6,7};
int size=6;
int target=7;
cout<<Linearsearch(arr, size , target)<<endl;







// int marks[5]= {100, 55, 66, 77,99};
// int size=5;
// marks[0]=45;
// cointut<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// cout<<marks[4]<<endl;
// for(int i=0; i<size; i++)
// {
// cout<<marks[i]<<endl;

// }
// int nums[]={12,4,5,-14,12};
// int size=5;
// int smallest=INT16_MAX;
// for (int i=0; i<size; i++)
// {
// smallest=min(nums[i], smallest );
//     // if(nums[i]<smalest)
//     // {
//     //     smalest=nums[i];
//     // }
// }
// cout<<"smallest ="<< smallest<<endl;
    /* code */

// int nums[]={22,4,5,-14,12};
// int size=5;
// int LARGEST=INT16_MIN;
// for (int i=0; i<size; i++)
// {
// LARGEST=max(nums[i], LARGEST );


// }
// cout<<"LARGEST ="<< LARGEST<<endl;

return 0;
}