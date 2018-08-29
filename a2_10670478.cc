#include<string>
#include<iostream>
using namespace std;
int n; 
int i;
bool isPrime=true;
int  main()
{ 
cout<<"Enter a positive integer"<<endl;
cin>>n;
for(i=2; i<=n/2; i++)
{
if(n%i==0)
{
isPrime=false;
break;
}
}
if(isPrime)
cout<<"Number is prime"<<endl;
else
cout<<"Number is not prime"<<endl;
return 0;
}
