// 1. 

#include<stdio.h>

float area(int);  //Q.1
float simpleInterest(float,float,int);  //Q.2
int isEvenorOdd(int);  //Q.3
void printN(int);  //Q.4
void printNodd(int);  //Q.5
int factorial(int);  //Q.6
int ncr(int,int);  //Q.7
int ncr(int,int);  //Q.8

int main()
{
    // //Q.1
    // int y;
    // printf("Enter radius: ");
    // scanf("%d",&y);
    // printf("\nArea of circle is: %f",area(y));

    // //Q.2
    // int t;
    // float p,r;
    // printf("Enter Principle amount,Rate of Interest and Time: ");
    // scanf("%f%f%d",&p,&r,&t);
    // printf("\nSimple Interest = %f",simpleInterest(p,r,t));

    // //Q.3
    // int num,var;
    // printf("Enter a number: ");
    // scanf("%d",&num);
    // isEvenorOdd(num);
    // if(var)
    //     printf("\nOdd");
    // else
    //     printf("\nEven");

    // //Q.4
    // int num;
    // printf("Enter a number: ");
    // scanf("%d",&num);
    // printf("1st %d natursl nnumbers are:\n",num);
    // printN(num);

    // //Q.5
    // int num;
    // printf("Enter a number: ");
    // scanf("%d",&num);
    // printf("1st %d odd natural nnumbers are:\n",num);
    // printNodd(num);

    // //Q.6
    // int num;
    // printf("Enter a number: ");
    // scanf("%d",&num);
    // printf("Factorial of %d = %d",num,factorial(num));
    
    // //Q.7
    // int n,r;
    // printf("Enter the vale of n and r: ");
    // scanf("%d%d",&n,&r);
    // printf("%dC%d = %d",n,r,ncr(n,r));
    
    // //Q.8
    // int n,r;
    // printf("Enter the vale of n and r: ");
    // scanf("%d%d",&n,&r);
    // printf("%dP%d = %d",n,r,npr(n,r));


    return 0;
}

float area(int r)  ///Q.1
{
    return 3.14*r*r;
}

float simpleInterest(float P,float R,int T)  //Q.2
{
    return P*R*T/100;
}

int isEvenorOdd(int a)  //Q.3
{
    return a%2==0;
}
void printN(int n)  //Q.4
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}

void printNodd(int n)  //Q.5
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",2*i+1);
}

int factorial(int n)  //Q.6
{
    int m=1;
    for(;n!=0;n--)
        m=m*n;
    return m;
}

int ncr(int n,int r)  //Q.7
{
    int i,fN=1,fD1=1,fD2=1;
    for(i=n;i>=1;i--)
        fN=fN*i;
    for(i=r;i>=1;i--)
        fD1=fD1*i;
    for(i=n-r;i>=1;i--)
        fD2=fD2*i;
    return fN/(fD1*fD2);
}

int npr(int n,int r)  //Q.8
{
    int i,fN=1,fD=1;
    for(i=n;i>=1;i--)
        fN=fN*i;
    for(i=n-r;i>=1;i--)
        fD=fD*i;
    return fN/fD;
}