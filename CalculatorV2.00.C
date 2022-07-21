/*
	Name: Calculator 2.0.0
	Copyright: 
	Author: ironx1
	Date: 22.07.22 00:01
	Description: İşlem kısıtı olmadan hesaplamalar yapabilen hesap makinesi.
*/

#include <stdio.h>
#include <locale.h>
int main() {
	double sayi,sayi2;//iki değişkene ihtiyacımız var
	char islem[0];
	setlocale(LC_ALL, "Turkish");
	printf("bir sayı giriniz: ");
	scanf("%lf",&sayi);
	printf("\n-Toplama(+)-\n-Çıkarma(-)-\n-Çarpma(*)-\n-Bölme(/)-\n-Sonuç(q)-\n");
	while(islem[0]!='q') { //işlem[0] değeri q değerine eşit olmadığı sürece program çalışacak
		printf("\nİşlem seçiniz: ");
		scanf("%s",&islem[0]);
		switch(islem[0]) {
			case '+':
				printf("Bir Sayı Giriniz: ");
				scanf("%lf",&sayi2);
				sayi += sayi2;
			break;
			case '-':
				printf("Bir Sayı Giriniz: ");
				scanf("%lf",&sayi2);	
				sayi -= sayi2;
			break;
			case '*':
				printf("Bir Sayı Giriniz: ");
				scanf("%lf",&sayi2);	
				sayi *= sayi2;
			break;
			case '/':
				printf("Bir Sayı Giriniz: ");
				scanf("%lf",&sayi2);	
				sayi /= sayi2;
			break;		
			default:
				if(sayi<0){
					printf("Sonuç = -%.2lf",sayi);
				}
				else{
					printf("Sonuç = %.2lf", sayi);
				}	
		}
	}
	
	return 0;
}
