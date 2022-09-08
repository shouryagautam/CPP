#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	
	float x,t,sin;
	cout<<"enter the angle";
	cin>>x;
	t=x;
	sin=x;
	
	for(int i=1;i<=n;i++)
	{
	t=(pow(-1,i)*(t*x*x))/((2*i)*((2*i)+1));
	sin=sin+t;
    }
    
	cout<<sin;
	return 0;
	
}