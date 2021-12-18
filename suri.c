#include<stdio.h>
main()
{
	int time, min,hours;
	
	scanf("%d",&time);
	min=time%60;

	hours=time/60;
	printf("%d hours %dmin", hours, min);
}
	
	


