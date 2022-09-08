#include<iostream>
using namespace std;
int itfact(int);
int refact(int);

int main()
{
	int n,factit,factre;
	cin>>n;
	
	factit=itfact(n);
	cout<<factit<<endl;
	
	factre=refact(n);
	cout<<factre;
	
	return 0;
}

int itfact(int n)
{ 
   int s=1;
   for(;n>0;n--)
   s=s*n;
   
   return s;
	
}

int refact(int n)
{    
    int s;
    if(n>1)
	s=n*refact(n-1);
    else return s;	
}


















