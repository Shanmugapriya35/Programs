#include<iostream>
using namespace std;
int main()
{
         int N,num,a=0,Sum=0;
         cout<<"\nEnter the Number\n";
         cin>>N;
         num=N;
                  while(N>0)
                  {
                           a=(a*10)+(N%10);
                           N=N/10;
                  }
                  cout<<"\n The reverse of the Number is\n";
                  cout<<a;
                  cout<<"\n The sum is\n";
                  Sum=num+a;
                  cout<<Sum;
                  return 0;
}
