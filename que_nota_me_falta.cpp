#include <stdio.h>
#include <unistd.h>

int main(){
	
	float nota2, nota3, nota4, nota5, nota6, nota7, nota8, notax, prom; /*Define las notas*/
	float pond2, pond3, pond4, pond5, pond6, pond7, pond8, pondx; /*Define las ponderaciones*/
	int op1, ola, resp; /*Define los niveles de opciones para los switch*/
	ola=1;
	
	while (ola!=0){
		printf("Que nota te falta para pasar el ramo?\n");
		printf("\nIngresa las notas que tiene tu ramo (un numero del 2 al 8)\n");
		do { /*Validacion de entrada op1*/
			scanf("%d", &op1);
			if(op1<2 || op1>8){
				printf("Ingresa una opcion valida\n");
			}
		} while (op1<2 || op1>8); /*Fin validacion entrada op1*/
		
		switch(op1){ /*switch para la cantidad de notas*/
			case 2:
				
				printf("Ingresa tu nota: "); /*Ingreso de la unica nota*/
				do { /*Validacion de la entrada nota2*/
					scanf("%f", &nota2);
					if (nota2<1 || nota2>7){
						printf("Ingresa una nota valida\n");
					}
				} while (nota2<1 || nota2>7);
					
				printf("Ingresa la ponderacion de la nota: ");
				do { /*Validacion de pond2*/
					scanf("%f", &pond2);
					if(pond2<=0 || pond2>99){
						printf("Ingresa una ponderacion valida\n");
					}
				} while (pond2<=0 || pond2>99);
					
				pondx=(100-pond2)/100; /*Calculo de la ponderacion faltante*/
					
				notax=((4-(nota2*(pond2/100)))/pondx);
				printf("Con un %.1f pasas el ramo\n", notax);
					
				break;
				
			case 3:
				
				printf("Ingresa tus primeras notas y sus ponderaciones\n"); /*Ingreso de la unica nota*/
				do { /*Validacion de la entrada nota2*/
					printf("Nota 1: ");
					scanf("%f", &nota2);
					printf("Ponderacion 1: ");
					scanf("%f", &pond2);
					printf("Nota 2: ");
					scanf("%f", &nota3);
					printf("Ponderacion 2: ");
					scanf("%f", &pond3);
					if(nota2<=0 || nota2>99 || nota3<=0 || nota3>99){
						printf("Parece que una nota no es valida\n");
					}
					if(pond2<=0 || pond2>99 || pond3<=0 || pond3>99){
						printf("Parece que una ponderacion no es valida\n");
					}
				} while (nota2<1 || nota2>7 || nota3<1 || nota3>7 || pond2<=0 || pond2>99 || pond3<=0 || pond3>99);
					
				pondx=(100-pond2-pond3)/100; /*Calculo de la ponderacion faltante*/
					
				notax=(4-(nota2*(pond2/100))-(nota3*(pond3)/100))/pondx;
				if(notax<=1){
					printf("Con un 1 pasas el ramo\n");
				} else {
					printf("Con un %.1f pasas el ramo\n", notax);	
				}
				
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
		}/*Fin switch grande*/
		
		printf("\nQuieres calcular otra nota?\n");
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
	}/*Fin while principal*/
	
	return(0);
}
