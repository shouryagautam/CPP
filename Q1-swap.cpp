#include<iostream>
using namespace std;
int main()
{   int a,b;
	cin>>a>>b;
	cout<<"a="<<a<<"and b="<<b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
    cout<<"a="<<a<<"and b="<<b;
    return 0;
    
}