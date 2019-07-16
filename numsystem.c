#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void decimal1(int n);
void decimal2(int n);
void decimal3(int n);
void binary(int n);
void octal(int n);
void hexa(int n);
void main()
{

int n,opt1,opt2,x,y,z;
printf("Enter the opion indicated in which you want to enter the number\n");
//scanf("%d",&n);
printf("1. Decimal\n2. Binary\n3. Octal\n4. Hexadecimal");
scanf("%d",&opt1);
switch(opt1)
{
case 1:
	printf("\nEnter the number\n");
        scanf("%d",&n);	
	printf("To which number system do you want to convert your number?\n");
	printf("1. Binary\n2. Octal\n3. Hexadecimal");
	scanf("%d",&opt2);
	
        switch(opt2)
	{
	case 1:
		binary(n);
		break;
	case 2:
		octal(n);
		break;
	case 3:
		hexa(n);
		break;
	default:
		exit(opt2);
	}
break;

case 2:
	printf("\nEnter the number\n");
        scanf("%d",&n);	
	printf("To which number system do you want to convert your number?\n");
	printf("1. Decimal\n2. Octal\n3. Hexadecimal");
	scanf("%d",&opt2);
        
	switch(opt2)
	{
		case 1:
			decimal1(n);
			break;
		case 2:
			octal(n);
			break;
		case 3:
			hexa(n);
			break;
			default:
			exit(opt2);
	}
break;

case 3:
	printf("\nEnter the number\n");
        scanf("%d",&n);	
	printf("To which number system do you want to convert your number?\n");
	printf("1. Binary\n2. Decimal\n3. Hexadecimal");
	scanf("%d",&opt2);
	switch(opt2)
	{
		case 1:
			binary(n);
			break;
		case 2:
			decimal2(n);
			break;
		case 3:
			hexa(n);
			break;
		default:
			exit(opt2);
	}
break;

case 4:
	printf("\nEnter the number\n");
        scanf("%d",&n);
        printf("To which number system do you want to convert your number?\n");
	printf("1. Binary\n2. Octal\n3. Decimal");
	scanf("%d",&opt2);
	switch(opt2)
	{
		case 1:
			binary(n);
			break;
		case 2:
			octal(n);
			break;
		case 3:
			decimal3(n);
			break;
		default:
			exit(opt2);
	}
break;

default:
	exit(opt1);

}
}

void binary(int n)
{
	int i,b,temp,a[10],g;
	temp=n;
	i=0;
	while(temp!=0)
	{
		b=temp%2;
		a[i]=b;
		temp=temp/2;
		i++;
		g=i-1;
	}

	printf("\nThe binary conversion of the number is : ");
	for(i=g;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
}

void octal(int n)
{
        int i,b,temp,a[10],g;
        temp=n;
        i=0;
        while(temp!=0)
        {
                b=temp%8;
                a[i]=b;
                temp=temp/8;
                i++;
                g=i-1;
        }

        printf("\nThe octal conversion of the number is :  ");
        for(i=g;i>=0;i--)
                printf("%d",a[i]);
	printf("\n");
}

void hexa(int n)
{
        int i,b,temp,g;
        char a[10];
        temp=n;
        i=0;
        while(temp!=0)
        {
                b=temp%16;
                if(b<10)
                  a[i]= b + 48;
                else 
                  a[i]= b + 55;
                temp=temp/16;
		i++;
                g=i-1;
        }

        printf("\nThe binary conversion of the number is\n");
        for(i=g;i>=0;i--)
                printf("%c",a[i]);
	printf("\n");
}

void decimal1(int n)
{
 int temp,i,b,c,a[20];
 temp=n;
 i=0,c=0;
 while(temp!=0)
 {
    b=temp%10;
    c = c + b*pow(2,i);
    temp=temp/10;
    i++;
 }

 printf("%d\n",c);
}

void decimal2(int n)
{
 int temp,i,b,c,a[20];
 temp=n;
 i=0,c=0;
 while(temp!=0)
 {
    b=temp%10;
    c = c + b*pow(8,i);
    temp=temp/10;
    i++;
 }

 printf("%d\n",c);
}

void decimal3(int n)
{
 int temp,i,b,c,a[20];
 temp=n;
 i=0,c=0;
 while(temp!=0)
 {
    b=temp%10;
    c = c + b*pow(16,i);
    temp=temp/10;
    i++;
 }

 printf("%d\n",c);
}
