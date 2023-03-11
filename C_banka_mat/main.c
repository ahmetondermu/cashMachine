#include <stdio.h>
#include <stdlib.h>



int main() {
	
	 //Deðiþkenleri tanýmla
	system("color 3");
		int secim,secim2,i,j,para_yatir,para_cek;
		float para=1253.45,eski_bakiye;
		
		
  // Döngü içinde kullanýcýyý yönlendir
	for(i=0;i<2;i++){
		
			printf("\nLutfen Yapmak istediginiz islemi tuslayiniz:\n\t<--*********************--> \n\n");
			printf("1-  Bakiye Goruntule\n2-  Para yatir\n3-  Para cek\n4-  Fatura ode\n5-  Cikis\n");
			scanf("%d",&secim);
	
       switch(secim)
	   {
	   	// Durumlara uygun koþullar
			case 1:
			system("CLS");
			printf("\n*****************************\n");
			printf("Guncel Bakiyeniz: %2.2f TL\n",para);
			i=0;
			break;
			
			case 2:
			system("CLS");
			printf("-->yatiracaginizi miktari giriniz: ");
			scanf("%d",&para_yatir);
			eski_bakiye=para;
			para+=para_yatir;
			printf("\nEski Bakiye: %2.2f\nGuncel Bakiye: %2.2f\n",eski_bakiye,para);
			i=0;
			break;
			
			case 3:
				
			system("CLS");
			printf("-->cekeceginiz miktari giriniz: ");
			scanf("%d",&para_cek);
			eski_bakiye=para;
			para-=para_cek;
			printf("\nEski Bakiye: %2.2f\nGuncel Bakiye: %2.2f\n",eski_bakiye,para);
			i=0;
			break;
			
			case 4:
			for(j=0;j<2;j++){
				
				system("CLS");
				printf("\nOdenecek Faturalar:\n<--*************-->\n\n1-  internet faturasi\n2-  elektrik faturasi\n3-  su faturasi\n4-  Cikis\n");
				printf("Giriniz:");
				scanf("%d",&secim2);
				
			        switch(secim2){
				
				    case 1:
				    	system("CLS");
				    	para-=200.56;
				    	printf("\ninternet faturaniz basariyla odendi.\nGuncel Bakiyeniz: %2.2f",para);
				    	j=4;
				    	break;
				    	
				    case 2:
				    	system("CLS");
				    	para-=120.34;
				    	printf("\nelektrik faturaniz basariyla odendi.\nGuncel Bakiyeniz: %2.2f",para);
				    	j=4;
				    	break;
				    	
				    case 3:
				    	system("CLS");
				    	para-=103.78;
				    	printf("\nelektrik faturaniz basariyla odendi.\nGuncel Bakiyeniz: %2.2f",para);
				    	j=4;
				    	break;
				    
				    case 4:
				    	system("CLS");
				        j=4;
				        break;
					default:
					printf("Lutfen gecerli bir islem giriniz!!");
					j=0;
					break;
			        }
			}
			i=0;
			break;
			
			
			case 5:
				system("CLS");
				printf("\n   iyi gunler dileriz\n***********************\n");
				i=10;
				break;
     
			default: 
			system("CLS");
			printf("Lutfen gecerli bir islem seciniz!!\n");
			i=0;
	   	    break;
	   }
   
    }
    system("pause");
	
	
	
	return 0;
}
