#include<iostream>
using namespace std;
#include<math.h>
int n,d,i,next,a[20],ch;
int main()
{
int getdata();
int arith();
int vary();
int geo();
do
{
cout<<"\n1.Arithmatic Series\n2.Varying difference Series\n3.Geometric Series";
cout<<"\n Enter Your choice";
cout<<"\n Enter -1 to quit";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n Enter the arithmatic Series";
getdata();
arith();
break;
case 2:
cout<<"\n Enter the varying difference Series";
getdata();
vary();
break;
case 3:
cout<<"\n Enter the Geometric Series";
getdata();
geo();
break;
default:
if(ch==-1)
cout<<"\n Bye!";
else
cout<<"\n Enter the Correct choice";
break;
}
}
while(ch!=-1);
return 0;
}
int getdata()
{
cout<<"\n Enter the value of n";
cin>>n;
cout<<"\nEnter the series";
for(i=0;i<n;i++)
{
cin>>a[i];
}
}
int arith()
{
if(n!=0)
{
i=0;
d=a[i+1]-a[i];
next=a[n-1]+d;
cout<<"\n The next number in series is\n";
cout<<next;
}
}
int vary()
{
if(n!=0)
{
i=0;
d=a[n-1]-a[n-2];
d=d+1;
next=a[n-1]+d;
cout<<"\n The next number in series is\n";
cout<<next;
}
}
int geo()
{
if(n!=0)
{
i=0;
next=2*a[n-1];
cout<<"\n The next number in series is\n";
cout<<next;
}
}
