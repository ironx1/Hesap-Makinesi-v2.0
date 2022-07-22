/*
	Name: Calculator 2.0.3
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
	printf("\n-Toplama(+)-\n-Çıkarma(-)-\n-Çarpma(*)-\n-Bölme(/)-\n-Çıkış(q)-\n-Temizle(t)-\n");
	printf("\nİlk Sayı: ");
	scanf("%lf",&sayi);
	while(islem[0]!='q') { //işlem[0] değeri q değerine eşit olmadığı sürece program çalışacak
		printf("\nİşlem seçiniz: ");
		scanf("%s",&islem[0]);
		switch(islem[0]) {
			case '+':
				printf("\nBir Sayı Giriniz: ");
				scanf("%lf",&sayi2);
				sayi += sayi2;
				printf("\nSonuç=%.2lf\n",sayi);
				
			break;
			case '-':
				printf("\nBir Sayı Giriniz: ");
				scanf("%lf",&sayi2);	
				sayi -= sayi2;
				printf("\nSonuç=%.2lf\n",sayi);
			break;
			case '*':
				printf("\nBir Sayı Giriniz: ");
				scanf("%lf",&sayi2);	
				sayi *= sayi2;
				printf("\nSonuç=%.2lf\n",sayi);
			break;
			case '/':
				printf("\nBir Sayı Giriniz: ");
				scanf("%lf",&sayi2);
				if(sayi2==0) {
					printf("Tanımsız");
					
				}
				else{
					sayi /= sayi2;
					printf("\nSonuç=%lf\n",sayi);
				}	
				
			break;		
			default:
				if(islem[0]=='q'){
					printf("\nÇıkış Yapılıyor...\n");
				}
				else if(islem[0]='t'){
					printf("\nTemizleniyor...\n");
				}
				else {
					printf("\nHatalı giriş yaptınız.\n");
				}
		if (islem[0]=='t'){
			sayi = 0;
			sayi2 = 0;
			printf("\nİlk Sayı: ");
			scanf("%lf",&sayi);
		}		
					
		}
	}
	
	return 0;
}
