2.odev_2013
===========
#include<stdio.h>
#include<conio.h>

int a, b, c, d,e,r,t,y;

void main()

{
	printf("Bir sayi giriniz:");
	scanf_s("%d", &a);
	b = a / 1000; // binlik sayısı
	c = a - (b * 1000); 
	d = c / 100; //yüzlük sayısı
	e = c - (d * 100);
	r = e / 10; // onluk sayısı
	t = e - (r * 10); // birlik sayısı


	printf("Binlik sayisi:%d\n",b);
	printf("Yuzluk sayisi:%d\n", d);
	printf("Onluk sayisi:%d\n", r);
	printf("Birlik sayisi:%d\n", t);



	_getch();

	











}
