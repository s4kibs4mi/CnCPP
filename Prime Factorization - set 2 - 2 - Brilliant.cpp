Problem ::
Divide 3773 by the smallest possible positive integer a so that the result is the square of a positive integer b. What is a+b?

Solution ::

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,j,k,l;
	int n = (int) 3773 / 2;
	for(i=2;i<=n;i++)
	{
		if(3773%i==0)
		{
			k = 3773/i;
			l = sqrt(k);
			if(l*l==k) {
				j = i+l;
				break;
			}
		}
		
	}
	printf("%d",j);
	return 0;
}
