#include<iostream>
using namespace std;
int recursivegcd(int a ,int b)
{
	if(b==0)
	return a;
	else 
	return recursivegcd(b,a%b);
}
int  gcd(int a,int b)
{
	int temp=0;
	while(b!=0)
	{
		temp=a;a=b;
		b=temp%b;
	}
	return a;
}
int recursive_pow(int a,int b)
{
	if(b==0)
	return 1;
	else 
	return a*recursive_pow(a,b-1);
}
int pow(int a,int b)
{
	int res=a;
	for(int i=1;i<b;i++)
	res*=a;
	return res;
}
int recursive_fib(int n)
{
	if((n==1)||(n==0))
	return n;
	else
	return (recursive_fib(n-1)+recursive_fib(n-2));
}
void fib(int n)
{
	int x=0,y=1,z;
	cout<<x<<" "<<y<<" ";
	for(int i=2;i<n;i++)
	{
	z=x+y;
	cout<<z<<" ";
	x=y;
	y=z;}
}
int rec_fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*rec_fact(n-1);}
	
int fact(int n)
{ int fact=1;
 for(int i=n;i>0;i--)
 {
 	fact*=i;
 }return fact;
	}	
int main()
{
	int x,y;
	cout<<"enter the values for finding gcd\n";
	cin>>x>>y;
	int gcd1=recursivegcd(x,y);
	int gcd2=gcd(x,y);
	cout<<"gcd by recursion "<<gcd1<<"\n"<<"gcd by iteration "<<gcd2<<endl;
	cout<<"\nenter values for power function\n";
	cin>>x>>y;
	int pow1=recursive_pow(x,y);
	int pow2=pow(x,y);
	cout<<"power by recursion "<<pow1<<"\npower by iteration "<<pow2<<endl;
	int n;
	cout<<"\nenter input for fibonacci function\n";
	cin>>n;
	fib(n);
	cout<<endl; 
	int i=0;
	while(i<n)
	{cout<<" "<<recursive_fib(i);
	i++;
	}
	cout<<"\nenter input for factorial function\n";
	cin>>n;
	int fact1=rec_fact(n);
	int fact2=fact(n);
	cout<<" factorial by recusrion "<<fact1<<" \nfactorial by iteration "<<fact2<<" "<<endl;
	return 0;
	}	
	

