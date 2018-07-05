#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Xn 40

int formula(int vet[]){
	//return (vet[0] || !vet[1]) && (vet[0] || vet[1] || vet[2]) && (!vet[0] || vet[2]);
	//return (vet[0] && vet[1] && vet[2]) && (!vet[0] && !vet[1] && !vet[2]); //não tem solução
	return (vet[0] && vet[1] && vet[2] && vet[3] && vet[4] && vet[5] && vet[6] && vet[7] && vet[8] && vet[9] && vet[10] && vet[11] && vet[12] && vet[13] && vet[14] && vet[15] && vet[16] && vet[17] && vet[18] && vet[19] && vet[20] && vet[21] && vet[22] && vet[23] && vet[24] && vet[25] && vet[26] && vet[27] && vet[28] && vet[29]);
}

void satisfaz(int vet[], int quant_x){
    int i;
	for(i=0; i<quant_x; i++){
		printf("x%d = %d ", i+1,vet[i]);
	}
	printf("\n");
}


/*
forca_bruta(vetor com as variáveis, posição atual do vetor, última posição do vetor);
O algoritmo trabalha de maneira recursiva, primeiro verifica se pos_atual
é o último endereço do vetor, se for, vet[pos_atual] recebe 0 e verifica
se a fórmula é verdadeira, se for, mostra os valores das variáveis e para,
senão, recebe 1 e verifica novamente.

*/
int forca_bruta(int vet[], int pos_atual){
	/*	Caso base: só uma váriavel
		atribui 0, verifica se é válida, retorna 1;
		se não entrou no if, atribui 1, verifica se é válida, retorna 1;
		se não entrou em nenhum, não tem solução, retorna 0;
	*/
	if(pos_atual==0){
		vet[0] = 0;
		if(formula(vet)==1){
			return 1;
		}

		vet[0] = 1;
		if(formula(vet)==1){
			return 1;
		}
		return 0;
	}
	//Tem mais de uma váriavel
	else{
		/*Atribui 0 a atual, é chama forca_bruta passando o endereço da
		proxíma posição*/
		vet[pos_atual] = 0;
		if(forca_bruta(vet,pos_atual-1)==1){
            return 1;
		}
		/*Se não achou solução com essa variável valendo 0, entre nesse if
		para verificar se existe com 1*/
		vet[pos_atual] = 1;
		if(forca_bruta(vet,pos_atual-1)==1){
            return 1;
		}
		return 0;
	}
}

int main(){
	printf("Quantidade de variaveis: %d\n",Xn);
	int resp;
	int vet[Xn]; //Cada pos de vet é uma variavel: vet[0] = x0, vet[1] = x1....
	double inicio, fim, tempo;

	//printf("(x1 or ~x2) and (x1 or x2 or x3) and (~x1 or x3)\n");
	inicio = clock();
	resp = forca_bruta(vet,Xn-1);
	fim = clock();

	tempo = (fim-inicio)/(double)CLOCKS_PER_SEC;
	if(resp == 1){
		printf("Possui solucao\n");
		satisfaz(vet,Xn);
	}
	else{
		printf("Nao possui solucao\n");
	}
	printf("Tempo: %lf\n",tempo);

	return 0;
}
