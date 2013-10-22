1.odev_2013
===========
#include <stdio.h>
#include <conio.h>
#include <string>
#include <iostream>
void main()


{
        int y, z, i, x,p,o,u ;
        x = 100000;

        char a[30];
        printf("Hosgeldiniz.\n");
        printf("Kullanici Adinizi Giriniz: ");
        gets_s(a);
        printf("Sifrenizi Giriniz:");
        scanf_s("%d", &u);
        printf("Hosgeldiniz ");

        puts(a);
        printf(" Bakiye Goruntulemek icin 1\n");
        printf(" Para cekmek icin         2\n");
        printf(" Para yatirmak icin       3\n");
        printf(" Havale icin              4\n");
        i=_getch();

        switch (i)
        {
        case 1:
                printf("Bakiyeniz:%d\n", x);
                break;
        case 2:
                printf("Miktari giriniz: ");
                scanf_s("%d", &y);
                if (x < y)
                {
                        printf("Miktar Hesap bakiyesinden buyuk olamaz.");
                }
                else
                {
                        z = x - y;
                        printf("Bakiyeniz:%d\n", z);
                }

                break;
        case 3:
                printf("Miktari giriniz: ");
                scanf_s("%d", &y);
                z = x + y;
                        printf("Bakiyeniz:%d\n", z);
                        break;

        case 4:
                printf("Havale yapmak istediginiz hesap numarasi:");
                scanf_s("%d",&o);
                printf("Havale yapmak istediginiz miktar: ");
                scanf_s("%d", &p);
                if (x < p)
                {
                        printf("Miktar Hesap bakiyesinden buyuk olamaz.");
                }
                else{
                
                z = x - p;
                printf("Bakiyeniz:%d\n", z);
                
                }
                
                break;

                
                
        default:
                printf("Hatali giris yaptiniz program kapatilacak...");







        }


        _getch();

}
