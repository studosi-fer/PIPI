#include<stdio.h>
#define pi 3.14159268
int main()
{		
			int n,i;
			double sum=0,pi1;
			do
			{
					scanf("%d",&n);
					}while(n<1 && n>1000);
				
					for(i=1;i<n;i++)
					sum+=1./((4*i-1)(4*i+1);
					pi1=4-8*sum;
					printf("Izra�unali smo pi %f s pogre�kom %f",pi1,pi1/pi);
					return 0;
}
					
					