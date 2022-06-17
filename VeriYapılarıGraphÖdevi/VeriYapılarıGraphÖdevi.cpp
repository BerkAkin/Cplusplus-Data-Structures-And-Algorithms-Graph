//BERK AKIN 191307012
#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;
//DIÞARDA BÝ DÝZÝ TANIMLADIM
int dizi[7][7];
//DÝZÝNÝN ELEMANLARINI YAZMAK ÝÇÝN FONKSÝYON
void Yaz(int deðer)
{ 
	cout<<"  ";
	for(int q=0;q<deðer;q++)
	{
		cout<<" "<<q;
	}
	cout<<endl<<endl;
	for(int i=0;i<deðer;i++)
	{
		cout<<i<<"  " ;
		for(int j=0;j<deðer;j++)
		{
			cout<<dizi[i][j]<<" ";
		}
		cout<<endl<<endl;
	}
}
//DÝZÝ ELEMANLARI ARASINA KENAR EKLEMEK ÝÇÝN FONKSÝYON
void KenarEkle(int deðer1,int deðer2)
{
	dizi[deðer1][deðer2]=1;
}
//DÝZÝDE NERELERDE OUTDEGREE OLDUÐUNU BULMAK ÝÇÝN FONKSÝYON
void Outdegree(int deðer)
{ 
	for(int i=0;i<deðer;i++)
	{
		for(int j=0;j<deðer;j++)
		{
			if(dizi[i][j]==1)
			{
				cout<<i<<" -> "<<j<<" OutDegree"<<endl;
			}
		}
	}
}
//DÝZÝDE NERELERDE ÝNDEGREE OLDUÐUNU BULMAK ÝÇÝN FONKSÝYON
void Indegree(int deðer)
{ 
	for(int i=0;i<deðer;i++)
	{
		for(int j=0;j<deðer;j++)
		{
			if(dizi[j][i]==1)
			{
				cout<<i<<" <- "<<j<<" InDegree"<<endl;
			}
		}
	}
}
//DÝZÝDEKÝ DÜÐÜMLERDE BULUNAN ÝNDEGREE VE OUTDEGREE SAYILARI ÝÇÝN FONKSÝYON
void IndegreeOutdegreeSayýsý(int dizi[][7])
{
	cout<<"Düðüm "<<"Indegree "<<"Outdegree "<<endl<<endl;
	int in=0;
	int out=0;
	for(int i=0;i<7;i++)
	{
		in=0;
		out=0;
		for(int j=0;j<7;j++)
		{
			if(dizi[j][i]==1)
			{
				in++;
			}
			if(dizi[i][j]==1)
			{
				out++;
			}
		}
		cout<<i<<"       "<<in<<"        "<<out<<endl;
	}
}
int main()
{
	setlocale(LC_ALL,"Turkish");

	int r = 7;
	KenarEkle(0,1);KenarEkle(3,2);KenarEkle(3,0);KenarEkle(1,1);KenarEkle(2,5);
	KenarEkle(4,1);KenarEkle(5,6);KenarEkle(6,0);KenarEkle(6,3);KenarEkle(5,5);
	KenarEkle(5,6);KenarEkle(1,4);KenarEkle(2,2);KenarEkle(6,6);KenarEkle(0,3);
	KenarEkle(0,4);KenarEkle(4,6);KenarEkle(4,4);KenarEkle(5,0);

	Yaz(r);
	cout<<"------------------------------------------"<<endl;

	Outdegree(r);
	cout<<"------------------------------------------"<<endl;

	Indegree(r);
	cout<<"------------------------------------------"<<endl;


	IndegreeOutdegreeSayýsý(dizi);

	cout<<endl;
	return 0;
}
