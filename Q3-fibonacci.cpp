#include<iostream>
using namespace std;
void itfib(int);
int refib(int,int,int);

//0 1 1 2 3 5 8 13 21
int main()
{
	int n,fibit,fibre;
	cin>>n;
	cout<<"iterative"<<endl;
	itfib(n);
	
	cout<<"recursive"<<endl;
	refib(n,0,1);
	
	
	return 0;
}

void itfib(int n)
{ 
   int a,b,s;
   a=0;b=1;s=0;
   for(;n>0;n--)
   {
   s=a+b;
   a=b;
   b=s;
   cout<<s<<endl;
   }
   
	
}

int refib(int n,int a,int b)
{  int s=0; 
   if(n>0)
  {
  	s=a+b;
  	cout<<s<<endl;
  	refib(n-1,b,s);
  }
  else return 0;	
}






