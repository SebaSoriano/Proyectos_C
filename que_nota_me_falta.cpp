#include<stdio.h>
#include <unistd.h>

int main(){
	
	float nota2, nota3, nota4, nota5, nota6, nota7, nota8, notax, prom; /*Define las notas*/
	float pond2, pond3, pond4, pond5, pond6, pond7, pond8, pondx; /*Define las ponderaciones*/
	int op1, ola, resp; /*Define los niveles de opciones para los switch*/
	ola=1;
	
	while (ola!=0){
		
		printf("Cuantas notas tiene tu ramo?\n");
		printf("Ingresa un numero del 2 al 8\n");
		do { /*Validacion de entrada op1*/
			scanf("%d", &op1);
			if(op1<1 || op1>8){
				printf("Ingresa una opcion valida\n");
			}
		} while (op1<1 || op1>8); /*Fin validacion entrada op1*/
		
		switch(op1){ /*switch para la cantidad de notas*/
			case 2:
				
					printf("Ingresa tu nota\n"); /*Ingreso de la unica nota*/
					do { /*Validacion de la entrada nota2*/
						scanf("%f", &nota2);
					} while (nota2<1 || nota2>7);
					
					printf("Ingresa la ponderacion de la nota anterior\n");
					do { /*Validacion de pond2*/
						scanf("%f", &pond2);
						if(pond2<=0 || pond2>99){
							printf("Ingresa una ponderacion valida\n");
						}
					} while (pond2<=0 || pond2>99);
					
					pondx=(100-pond2)/100; /*Calculo de la ponderacion faltante*/
					printf("La ponderacion de la segunda nota debe ser de: %.1f\n", pondx*100);
					
					notax=((4-(nota2*(pond2/100)))/pondx);
					printf("Con un %.1f pasas el ramo\n", notax);
					
				break;
				
			case 3:
				
				break;
				
			case 4:
					
				break;
				
			case 5:
					
				break;
			
			case 6:
				
				break;
			
			case 7:
				
				break;
				
			case 8:
			
				break;
				
			default:
			printf("Ocurrio un error\n");	
				break;
		}/*Fin switch grande*/
		
		printf("Quieres calcular otra nota?\n");
		printf("Ingresa 1 para si y 0 para no\n");
		scanf("%d", &resp);
		if(resp = 1){
			ola=1;
		} else {
			ola=0;
		}	
	}/*Fin while principal*/
	
	return(0);
}