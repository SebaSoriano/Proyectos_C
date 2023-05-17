#include <stdio.h>
#include <string.h>
#define p 5

int main(){
	char palabra[p];
	int i, n, cont;
	cont = 0;
	
	printf("Ingrese una palabra\n");
	scanf("%s", palabra);
	
	for (i=0; i<p; i++){
		for (n=p-1; n>=0; n--){
			if (palabra[i] == palabra[n] && n!=i){ //compara las letras y las posiciones de las letras para definir si cont aumenta
				cont++;
			}
		}	//for pequeno
	}	//for grande
	
	if (cont > 1){
		printf("No es un isograma\n");
	} else {
		printf("Es un isograma\n");
	}
	return(0);
} //int main()