#include <stdio.h>
#include <conio.h>
#include <iostream.h>


main()
{
int a,t,keliling;
float luas;


cout<<"Masukan alas  :",cin>>a;
cout<<"Masukan tinggi  :",cin>>t;

luas=0.5*a*t;
keliling=a+a+a;

cout<<"Hasil luas adalah : "<<luas<<endl;
cout<<"hasil keliling adalah : "<<keliling<<endl;

getch();
}
