#include<stdio.h>

main(){
	
	int sayi,tabanx,donusumtabany,sonuc,kalan,uslusayisonucu;
	printf("pozitif bir tam sayi giriniz: \n");
	scanf("%d",&sayi);
	printf("taban(x) icin x giriniz: \n");
	scanf("%d",&tabanx);
	printf("donusum taban icin y giriniz: \n");
	scanf("%d",&donusumtabany);
	int sayac=0;
	int olcu=0;
	
	//taban bulmaya geçelim
	
	  while (sayi>0) 
	  {
	  	int uslusayisonucu=1;
	
	  	int uslusayi=sayac;
	  	
	  while (uslusayi>0)
	  {
	  	
	  	uslusayisonucu=uslusayisonucu*tabanx;
	  	uslusayi=uslusayi-1;
	  }
	  	kalan=sayi%10;
	  	olcu=uslusayisonucu*kalan+olcu;
	  	sayi=sayi/10;
	  	sayac=sayac+1;
	  	
	  }
	   
	   int carpmasonucu=1;
	   while(olcu>=donusumtabany)
	     {
			int basamak=olcu%donusumtabany;
	     	olcu=olcu/donusumtabany;
			sonuc=sonuc+basamak*carpmasonucu;
	     	carpmasonucu=carpmasonucu*10;
	     	
	     }
	     
	     sonuc=olcu*carpmasonucu+sonuc;
	     printf("sonuc=%d \n",sonuc);
	     
	
	main();
	
}
