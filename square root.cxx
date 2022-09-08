#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	int i;
	float n,x1,x2,x;
	cin>>n;
	
	for( i =1;i<=n;i++)	
	{
		if ((i*i)>=n)
                	{	
                	cout<<i<<endl;
            		break;
            		}
		
	}
	
	x1=i-1;
	x2=i;
	
	x=(x1+x2)/2;
	
	do
{
	if((x*x)>n)
	x2=x;
	else
    x1=x;
    x=(x1+x2)/2;
	
	
} while (fabs(x1-x2)>0.00001);
	
	
	cout<<x;
	
	
	
	
	
	
	
	
	
	return 0;
}





