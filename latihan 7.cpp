#include <stdio.h>
#include <conio.h>
#include <iostream.h>


main()
{
float tugas,absen,uts,uas,na;


cout <<"Masukan Nilai Mahasiswa"<<endl;
cout <<"***********************"<<endl;
cout <<"Masukan Nilai Tugas      :",cin>>tugas;
cout <<"Masukan Nilai absen      :",cin>>absen;
cout <<"Masukan Nilai UTS        :",cin>>uts;
cout <<"Masukan Nilai UAS        :",cin>>uas;

na=(0.1*tugas)+(0.2*absen)+(0.3*uts)+(0.5*uas);

cout<<"\n\n========Hasil Akhir=============="<<na<<endl;

cout << "Nilai Akhir Anda adalah :" <<na<<endl;


getch();
}
