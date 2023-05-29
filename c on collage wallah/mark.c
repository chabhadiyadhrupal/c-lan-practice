#include<stdio.h>
int main()
{
	printf(" @ Enter Your all subject marks to know your percentage and grade:-");
	float p,q,r,s,t,v;
	float u;
	//Marks:-
	printf("\nEnter english marks:");
	scanf("%f",&p);
	printf("Enter hindi marks:");
	scanf("%f",&q);
	printf("Enter gujrati marks:");
	scanf("%f",&r);
	printf("Enter science marks:");
	scanf("%f",&s);
	printf("Enter math's marks:");
	scanf("%f",&t);
    printf("Enter sosial science marks:");
	scanf("%f",&v);
    
	//Percentage :-
	u=((p+q+r+s+t+v)*100)/600;
	printf("Your percentage is:%f",u);
	//Grade:-
    if (u>75)
    printf("\nYou are Distinction.");
    else if ((u>60)&&(u<=75))	
    printf("\nYou are First class.");
    else if  ((u>50)&&(u<=60))
    printf("\nYou are Second class.");
    else if  ((u>35)&&(u<=50))
    printf("\nYou are Pass class.");
    else
    printf("\nYou are Fail.");
}
