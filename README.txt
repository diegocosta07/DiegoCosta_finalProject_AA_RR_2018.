Trabalho da final da disciplina de Análise de Algoritmos.
Alunos: Diego Costa e Talles Bezerra.

Para execução do algoritmo de versão exata do problema SAT(sat-exata.c) basta compila-lo e executa-lo normalmente usando o gcc. 
Para fazer exeprimentos com ele basta alterar em seu código o valor da constante Xn para o valor da quantidade de variaveis desejada e alterar a expressao dentro de return da função expressao().
Exemplo:
#define Xn 3
int expressao(int vet[]){
	return (vet[0] || !vet[1]) && (vet[0] || vet[1] || vet[2]) && (!vet[0] || vet[2])
}

Os exemplos utilizados nos experimentos do algoritmo zChaff estão na pasta sat_samples.

Para compilar e executar o programa zchaf leia e siga as instruções do arquivo README que está dentro da pasta zchaff64.
Para mais informações sore esse algoritmo visite a página de onde ele retirado: https://www.princeton.edu/~chaff/zchaff.html