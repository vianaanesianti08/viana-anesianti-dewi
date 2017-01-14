#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
int n=10,i,a,total;
a=2;
cout<<a;
for(i=1;i<=n-1;i++)
{
a=a+2;
total=total+a;
cout<<"+"<<a;
}
cout<<"="<<total;
getch();
}
