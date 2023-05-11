#include <stdio.h>
#include <unistd.h>

int main(){
	float x, n, uni, dec, cen, umi, atg_umi, atg_cen, atg_dec;
	int resp, ola;
	ola=1;
	atg_umi = (umi*umi*umi*umi)+(cen*cen*cen*cen)+(dec*dec*dec*dec)+(uni*uni*uni*uni);
	atg_cen = (cen*cen*cen)+(dec*dec*dec)+(uni*uni*uni);
	atg_dec = (dec*dec)+(uni*uni);
	
	while (ola!=0){
		printf("Calculadora de numero de armstrong\n");
		printf("Ingrese un numero positivo menor a 10000\n");
		do { //validacion de datos
			scanf("%f", &x);
			if(x<=0){
				printf("Por favor ingrese un numero entero positivo\n");
			}
		} while (x<=0);
	
		n=x; //le asigno a n los valores de x, ya que los voy a modificar mas adelante
	
		while (n<=9999 && n>=1000){
			n = n-1000;
			umi = umi+1;
		}//resta 1000 hasta que n sea menor a 1000
	
		while (n<=999 && n>=100){
			n = n-100;
			cen = cen+1;
		}//resta 100 hasta que n sea menor a 100
	
		while (n<=99 && n>=10){
			n = n-10;
			dec = dec+1;
		}//resta 10 hasta que n sea menor a 10
	
		while (n<=9 && n>=1){
			n = n-1;
			uni = uni+1;
		}//resta 1 hasta que n sea menor a 1
	
		/*printf("Unidades: %.0f\n", uni);
		printf("Decenas: %.0f\n", dec);
		printf("Centenas: %.0f\n", cen);
		printf("Unidades de mil: %.0f\n", umi);*/
	
		if (umi>0 && atg_umi == x){
			printf("%.0f es un numero de Armstrong\n", x);
		} else {
			if (cen>0 && atg_cen == x){
				printf("%.0f es un numero de Armstrong\n", x);
			} else {
				if (dec>0 && atg_dec == x){
					printf("%.0f es un numero de Armstrong\n", x);
				} else {
						printf("%.0f es un numero de Armstrong\n", x);
				}
			} 
		}
		
		printf("\nQuieres evaluar otro numero?\n");
		printf("Ingresa 1 para si y 0 para no\n");
		scanf("%d", &resp);
		if(resp == 1){
			ola=1;
			system("cls"); // for Windows
    		/*system("clear"); for Linux and macOS*/
		} else {
			if (resp == 0){
			ola=0;	
			} else {
				printf("No ingresaste una respuesta valida\n");
			}
		}
		
	}//fin while principal

	
	return(0);
}//fin int main
