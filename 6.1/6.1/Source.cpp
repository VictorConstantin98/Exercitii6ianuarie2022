#include <iostream>
#include<math.h>
using namespace std;

void main()
{
	int v[5];
	v[0] = 2;
	v[1] = -2;
	v[2] = -7;
	v[3] = 8;
	v[4] = 20;
	for (int i = 0; i < 5; i++)
	{
		cout << "Valoarea pozitiei " << i << " " << v[i] << endl;
	}

	int n;
	int v2[100];
	cout << "N= ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "v[" << i << "] =";
		cin >> v2[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	//////Afisare de la coada la cap

	for (int i = n - 1; i >= 0; i--)
	{
		cout << v2[i] << " ";
	}

	char vectorDeCaractere[12];
	for (int i = 0; i < 12; i++)
	{
		cin >> vectorDeCaractere[i];
	}
	for (int i = 0; i < 12; i++)
	{
		cout << vectorDeCaractere[i];
	}


	string text;
	cin >> text;
	cout << text;
	int n = 20;
	int v[20] = { 5,4,3,6,3,6,7,4,5,6,9,1,-12,34,66,-20,87,99,90,20};
	int suma;
	suma = v[0] + v[1] + v[2] + v[3] + v[4];
	cout << suma << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << "Valoarea pozitiei " << i << " " << v[i] << endl;
	}
	suma = 0;
	for (int i = 0; i < 20; i++)
	{
		suma = suma + v[i];
	}
	cout << suma << endl;

	//Media

	int media;
	media = suma / n;
	cout << media << endl;
	int min;
	min = v[0];
	for (int i = 1; i < 20; i++)
	{
		if (v[i] < min)
		{
			min = v[i];
		}
		cout << "Minimul intermediar " << min << endl;
	}
	cout << "Minimul final " << min << endl;
	
	int max;
	max = v[0];
	for (int i = 1; i < 20; i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
	cout << "Maximul final este " << max << endl;

	//Afiseaza toate elementele care sunt mai mici decat 30

	int n2 = 1;
	cout << "Numerele mai mici decat 30 sunt ";
	for (int i = 0; i < n; i++)
	{
		if (v[i] < n2)
		{
			cout << v[i] << " ";
		}
	}
	cout << endl;
	
	//Afiseaza cate numere sunt mai mici decat 30

	int contorNrSubN2 = 0;
	int contorNrMaiMariN2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] < n2)
		{
			contorNrSubN2++;
		}
		else
		{
			if (v[i] > n2)
			{
				contorNrMaiMariN2++;
			}
		}
	}
	cout << "Numere mai mici decat "<< n2 <<": " << contorNrSubN2 << endl;
	cout << "Numere mai mari decat " << n2 << ": " << contorNrMaiMariN2 << endl;
	if (contorNrSubN2 < contorNrMaiMariN2)
	{
		cout << "Sunt mai multe numere mai mari decat " << n2 << endl;
	}
	else
	{
		cout << "Sunt mai multe numere mai mici decat " << n2 << endl;
	}
	
	//Homework
	//Ex1

	int v[10] = { 2,5,7,3,-5,12,-10,43,87,-20 };
	cout << "Vectorul afisat de la cap la coada este: " << " ";
	int suma = 0;
	int sumaNrNegative = 0;
	int sumaNrPozitive = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << " ";
		suma += v[i];
		if (v[i] < 0)
		{
			sumaNrNegative += v[i];
		}
		else
		{
			sumaNrPozitive += v[i];
		}
	}
	cout << endl;
	cout << "Vectorul afisat de la coada la cap este: " << " ";
	for (int i = 9; i >= 0; i--)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "Suma vectorului este: " << suma << endl;
	cout << "Suma numerelor negative ale vectorului este egala cu: " << sumaNrNegative << endl;
	cout << "Suma numerelor pozitive ale vectorului este egala cu: " << sumaNrPozitive << endl;
	if ((sumaNrNegative / -1) > sumaNrPozitive)
	{
		cout << "Suma numerelor negative este mai mare decat suma numerelor pozitive" << endl;
	}
	else
	{
		cout << "Suma numerelor negative este mai mica decat suma numerelor pozitive" << endl;
	}

	//Ex 2

	int n;
	cout << "n=";
	cin >> n;
	int sumaSeriei = 0;
	int v[6];
	v[0] = 1 * 1;
	v[1] = 2 * 2;
	v[2] = 3 * 3;
	v[3] = 4 * 4;
	v[4] = 5 * 5;
	v[5] = n * n;
	for (int i = 0; i < 6; i++)
	{
		cout << "Valoarea pozitiei " << i << " este " << v[i] << endl;
		sumaSeriei += v[i];
	}
	cout << "Suma seriei este: " << sumaSeriei << endl;

	int n;
	cout << "n=";
	cin >> n;
	int sumaSeriei = 0;
	for (int i = 1; i <= n; i++)
	{
		sumaSeriei += (i * i);
		cout << "Produsul termenilor=" << i * i << endl;
	}
	cout << "Suma seriei este egala cu: " << sumaSeriei << endl;

	//Ex 3

	int n;
	cout << "Sa se calculeze suma seriei:1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+4+...+n)" << endl;
	cout << "Valoarea lui n este:";
	cin >> n;
	int suma;
	int sumaTotala = 0;
	for (int i = 1;i <= n;i++)
	{
		suma = 0;
	}
		

	//Ex 4

	int n;
	int suma = 0;
	cout << "n=";
	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		suma = suma + i;
	}
	cout << "Suma primelor " << n << " numere naturale este: " << suma << endl;

	//Ex 5

	int n;
	int cub = 0;
	cout << "N=";
	cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cub = i * i * i;
	}
	






































}