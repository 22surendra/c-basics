#include<stdio.h>
void main()
{
	int length,width,area,perimeter;
	printf("enter length of rectangle\n");
	printf("enter width o rectangle\n");
	scanf("%d%d",&length,&width);
	area=(length*width);
	printf("area of rectangle=%d",area);
	perimeter=2*(length+width);
	printf("perimeter of rectangle=%d",perimeter);
	return 0;
}


	
	


