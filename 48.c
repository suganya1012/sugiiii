#include<stdio.h>

#include<conio.h>

void main()

{

     int ar[100],n,i,sum=0;

     float avg;

      

     printf("Enter the size of the array \n");

     scanf("%d",&n);

      

     printf("Enter the elements of the array to find their average \n");

     for(i=0;i<n;i++)

     {

           scanf("%d",&ar[i]);

           sum=sum+ar[i];

     }

      

     avg=(float)sum/n;

     printf(" Average is %f",avg);

     getch();

}
