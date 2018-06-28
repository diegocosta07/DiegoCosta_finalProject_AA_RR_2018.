#include <stdio.h>
#include <stdlib.h>


int f(int vet[]){
	int x = (vet[0] || !vet[1]) && (vet[0] || vet[1] || vet[2]) && (!vet[0] || vet[2]);
	return x;	
}

void satifaz(int vet[], int j){
	for(int i=0; i<j+1; i++){
		printf("x%d = %d ", i+1,vet[i]);
	}
	printf("\n");
}

void forca_bruta(int vet[], int i, int j){
	if(i==j){
		vet[i] = 0;
		if(f(vet)==1){
			satifaz(vet,j);
			exit(0);
		}

		vet[i] = 1;
		if(f(vet)==1){
			satifaz(vet,j);
			exit(0);
		}
	}
	else{
		vet[i] = 0;
		forca_bruta(vet,i+1,j);
		vet[i] = 1;
		forca_bruta(vet,i+1,j);
	}
}

int main(){
	int x;
	printf("Quantidade de variaveis: ");
	scanf("%d",&x);
	int vet[x];
	int i=0;
	printf("(x1 or ~x2) and (x1 or x2 or x3) and (~x1 or x3)\n");


	forca_bruta(vet,i,x-1);

}