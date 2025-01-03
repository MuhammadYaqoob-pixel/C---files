#include<iostream>
#include<vector>
using namespace std;
int main()
{

//  vector<char>vec ={'a', 'b', 'c', 'd', 'e', 'f', 'g'};
//  cout<<"size="<<vec.size()<<endl;
//  for(char val:vec)
//  cout<<val<<endl;
 vector<int>vec;
 cout<<"size="<<vec.size()<<endl;
 vec.push_back(25);
 vec.push_back(30);
 vec.push_back(35);
 vec.pop_back();
 cout<<"size of vector after push back="<<vec.size()<<endl;
 for(char val:vec)
 cout<<val<<endl;











    return 0;
}