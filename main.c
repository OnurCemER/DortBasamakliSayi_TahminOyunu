#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    
	printf("Sayi bulmaca oyununa hosgeldiniz...\nBilgisayarin urettigi 4 haneli sayiyi tahmin etmeye calisacaksiniz.\n");
	printf("Sadece bildiginiz sayilar icin eksi, hem sayiyi hem yerini bilirseniz arti puan alacaksiniz.\n\n");

	int oyuncupuanlari[99];
	char oyuncuisimleri[20][20];

	int dongu=-1;
	for(;;){
	dongu++;
	printf("Isminizi giriniz: ");
	scanf("%s",&oyuncuisimleri[dongu][0]);
	int sayidizisi[4];
	int rastgele;
    int a,b,c;
	srand(time(NULL));
	rastgele=1+rand()%9;
	sayidizisi[0]=rastgele;
    int i,k;
	for(i=0;i<4;i++)
	{
		rastgele=rand()%10;
		for(k=0;k<i;k++)
		{
			if(rastgele!=sayidizisi[k])sayidizisi[i]=rastgele;
			else
			{
				i--;
				break;
			}
		}
	}
    int j;
	for(j=0;j<4;j++)
	{
		printf("%d\n",sayidizisi[j]);
	}

	int eksipuan,h;
	int artipuan;
	float toplamartipuan=0;
	float toplameksipuan=0;
	float puan=0;
	float hak=0;
	for(h=1;h<=10;h++)
	{
		hak+=1;
		artipuan=0;
		eksipuan=0;
		int tahmin;
		int tahmindizisi[4];
		bool donguyukir=false;
        int m,n;
		for(;;)
		{
		printf("\nTahmin yazin: ");
		scanf("%d",&tahmin);
		if((tahmin/1000<10 && tahmin/100>10))
		{
			tahmindizisi[3]=tahmin%10;
			tahmindizisi[2]=(tahmin%100)/10;
			tahmindizisi[1]=(tahmin%1000)/100;
			tahmindizisi[0]=tahmin/1000;

			for(m=0;m<3;m++)
			{
				for(n=1;n<4;n++)
				{
					if(tahmindizisi[m]==tahmindizisi[n])
					{
					  if(m!=n)donguyukir = true;
					  break;
					}
				}
			}
			if (donguyukir==true)
			{
				printf("Basamaklari birbirinden farkli bir sayi girin!!!\n");
				donguyukir=false;
				continue;
			}


			else break;

		}
		else
		{
			printf("4 haneli bir sayi girin!\n");
			continue;
		}
		}
		tahmindizisi[3]=tahmin%10;
		tahmindizisi[2]=(tahmin%100)/10;
		tahmindizisi[1]=(tahmin%1000)/100;
		tahmindizisi[0]=tahmin/1000;

		for(a=0;a<4;a++)
		{
			if(tahmindizisi[a]==sayidizisi[a])artipuan++;
			for(b=0;b<4;b++)
			{
				if(tahmindizisi[b]==sayidizisi[a])eksipuan++;
			}
		}
		eksipuan=eksipuan-artipuan;
		toplamartipuan+=artipuan;
		toplameksipuan+=eksipuan;

		printf("+%d -%d       Kalan hakkiniz:%.0f\n",artipuan,eksipuan,(10-hak));
		if(artipuan==4)
		{
			printf("Tebrikler! Bidiniz.");
			puan+= (10*toplamartipuan + 5*toplameksipuan + 1000/hak - (toplamartipuan*toplameksipuan)/(toplamartipuan+toplameksipuan));
			printf("Toplam puan: %.2f\n",puan);
			oyuncupuanlari[dongu]=puan;
			break;
		}
		if(hak==10)
		{
			printf("\nHakkiniz bitti. Kaybettiniz.\n");
			puan= 10*toplamartipuan + 5*toplameksipuan + 1000/hak - (toplamartipuan*toplameksipuan)/(toplamartipuan+toplameksipuan);
			printf("Toplam puan: %.2f\n",puan);
		}
	}
	for(c=0;c<=dongu;c++)
	{
	printf("%s oyuncusunun puani: %d\n",oyuncuisimleri[c],oyuncupuanlari[c]);
	}

}
	return 0;
	getch();
}
