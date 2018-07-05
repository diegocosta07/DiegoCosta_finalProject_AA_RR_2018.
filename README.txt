Trabalho da final da disciplina de An�lise de Algoritmos.
Alunos: Diego Costa e Talles Bezerra.

Para execu��o do algoritmo de vers�o exata do problema SAT(sat-exata.c) basta compila-lo e executa-lo normalmente usando o gcc. 
Para fazer exeprimentos com ele basta alterar em seu c�digo o valor da constante Xn para o valor da quantidade de variaveis desejada e alterar a expressao dentro de return da fun��o expressao().
Exemplo:
#define Xn 3
int expressao(int vet[]){
	return (vet[0] || !vet[1]) && (vet[0] || vet[1] || vet[2]) && (!vet[0] || vet[2])
}

Os exemplos utilizados nos experimentos do algoritmo zChaff est�o na pasta sat_samples.

Para compilar e executar o programa zchaf leia e siga as instru��es do arquivo README que est� dentro da pasta zchaff64.
Para mais informa��es sore esse algoritmo visite a p�gina de onde ele retirado: https://www.princeton.edu/~chaff/zchaff.html