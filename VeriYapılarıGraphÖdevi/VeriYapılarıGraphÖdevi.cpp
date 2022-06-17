//BERK AKIN 191307012
#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;
//DI�ARDA B� D�Z� TANIMLADIM
int dizi[7][7];
//D�Z�N�N ELEMANLARINI YAZMAK ���N FONKS�YON
void Yaz(int de�er)
{ 
	cout<<"  ";
	for(int q=0;q<de�er;q++)
	{
		cout<<" "<<q;
	}
	cout<<endl<<endl;
	for(int i=0;i<de�er;i++)
	{
		cout<<i<<"  " ;
		for(int j=0;j<de�er;j++)
		{
			cout<<dizi[i][j]<<" ";
		}
		cout<<endl<<endl;
	}
}
//D�Z� ELEMANLARI ARASINA KENAR EKLEMEK ���N FONKS�YON
void KenarEkle(int de�er1,int de�er2)
{
	dizi[de�er1][de�er2]=1;
}
//D�Z�DE NERELERDE OUTDEGREE OLDU�UNU BULMAK ���N FONKS�YON
void Outdegree(int de�er)
{ 
	for(int i=0;i<de�er;i++)
	{
		for(int j=0;j<de�er;j++)
		{
			if(dizi[i][j]==1)
			{
				cout<<i<<" -> "<<j<<" OutDegree"<<endl;
			}
		}
	}
}
//D�Z�DE NERELERDE �NDEGREE OLDU�UNU BULMAK ���N FONKS�YON
void Indegree(int de�er)
{ 
	for(int i=0;i<de�er;i++)
	{
		for(int j=0;j<de�er;j++)
		{
			if(dizi[j][i]==1)
			{
				cout<<i<<" <- "<<j<<" InDegree"<<endl;
			}
		}
	}
}
//D�Z�DEK� D���MLERDE BULUNAN �NDEGREE VE OUTDEGREE SAYILARI ���N FONKS�YON
void IndegreeOutdegreeSay�s�(int dizi[][7])
{
	cout<<"D���m "<<"Indegree "<<"Outdegree "<<endl<<endl;
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


	IndegreeOutdegreeSay�s�(dizi);

	cout<<endl;
	return 0;
}
