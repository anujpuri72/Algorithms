#include<stdio.h>
int main()
{
int n;
cout<<"enter no. of elements";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{ 
   for(int j=i+1;j<n;j++)
   {
 if(a[j]>a[i]) //for descending order ,for ascending order change  to a[i]>a[j]
   int temp =a[i]; //swapping
   a[i] =a[j];
   a[j]= temp;
     }
 }  
 for(int i=0;i<n;i++)
 cout<<a[i];
 return 0;
 }
