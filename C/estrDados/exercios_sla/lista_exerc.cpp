//01

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int *p;
	scanf("%d", &n);
	p = (int *) malloc(n*sizeof(int));
	
	if (p == NULL) {
		printf("Erro ao alocar memoria!\n");
		return 1;
	}
	
	for (int i=0; i<n; i++){
		scanf("%d", &p[i]);
	}
	for(int q=0; q<n; q++){
		printf("%d\n", p[q]);
		
	}

	free(p);
	return 0;

}

*/


//02

#include <stdio.h>
#include <stdlib.h>

int main() {
	int soma=0, n, cont=0, maior=-9999, menor=9999;
	float media=0;
	int *p;
	scanf("%d", &n);
	p = (int *) malloc(n*sizeof(int));

	
	if (p == NULL) {
		printf("Erro ao alocar memoria!\n");
		return 1;
	}
	

	for (int i=0; i<n; i++){
		scanf("%d", &p[i]);
		if(p[i]>maior) maior = p[i];
		if(p[i]<menor) menor = p[i];
		soma+= p[i];
		cont++;

	}
	media = (float) soma/cont;
	cont=0;
	for (int i=0; i<n; i++){
		if (p[i]>media) cont++;
	}
	
	printf("Maior valor: %d\n", maior);
	printf("Menor valor: %d\n", menor);
	printf("Media aritmetica: %.2f\n", media);
	printf("Quantidade de numeros no vetor acima da media: %d\n", cont);
	
	free(p);
	
	return 0;

}

*/


#include <stdio.h>
#include <cstdlib>

int main(){
	int *vetor, pos, valMax;	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &valMax);
	vetor = (int *) calloc(valMax, sizeof(int));
	
	if (vetor == NULL) {
		printf("Erro ao alocar memoria!\n");
		return 1;
	}
	
	printf("Tamanho do vetor definico com sucesso!\n");

	while (1) {
		printf("Escolha uma posicao de 0 a %d (-999 para sair): ", valMax-1);
		scanf("%d", &pos);
		if(pos==-999) break;
		if (pos<0 || pos>=cap) printf("Erro: posicao invalida!\n");
		else{
			printf("Agora digite o valor: ");
			scanf("%d", &vetor[pos]);

			printf("Alteracao realizada com sucesso!\n");
			printf("{ ");
			for (int q=0; q<valMax; q++){
				printf("%d ", vetor[q]);
			}
			printf("}\n");
		}
	}
	free(vetor);

	return 0;
}
*/

//04

#include <stdio.h>
#include <cstdlib>

int main(){
	int cap=5, pos=0, cont=0;
	int *vetor;
	vetor = (int *) calloc(cap, sizeof(int));

	if (vetor == NULL) {
		printf("Erro ao alocar memoria!\n");
		return 1;
	}
	
	while(1){
		printf("Digite uma posicao de 0 a %d (-999 para sair): ", cap-1);
		scanf("%d", &pos);
		if(pos==-999) break;
		if (pos<0 || pos>=cap) {
			printf("Erro: posicao invalida!\n");
			continue;
		}

		printf("Digite um numero para a posicao %d: ", pos);
		scanf("%d", &vetor[pos]);		
		printf("Numero adicionado com sucesso!\n");
		cont++;
		if (cont==cap){
			printf("Capacidade de armazenamento de elementos atingida! Dobrando agora o tamanho do vetor\n");
			cap=cap*2;
			vetor = (int *) realloc(vetor, cap);
		}
	}
	printf("\n{ ");
	for (int q=0; q<cap; q++) {
		if (vetor[q]!=0) printf("%d ", vetor[q]);	
	}
	printf("}\n");
	printf("Numero de elementos armazenados: %d\n", cont);
	printf("Capacidade final do vetor: %d\n", cap);
	free(vetor);

	return 0;
}
*/


#include <stdio.h>
#include <cstdlib>

int main(){
	int cap=5, pos=0, cont=0, posRem;
	int *vetor;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &cap);

	vetor = (int *) malloc(cap*sizeof(int));

	if (vetor == NULL) {
		printf("Erro ao alocar memoria!\n");
		return 1;
	}	
	for (int q=0;q<cap;q++){
		printf("Digite um numero a ser inserido na posicao %d: ", q);
		scanf("%d", &vetor[q]);
	}

	printf("Digite uma posicao de 0 a %d a ser removida: ", cap-1);
	scanf("%d", &posRem);

	printf("Vetor: ");
	for (int q=0;q<cap; q++) printf("%d ", vetor[q]);
	printf("\n");

	printf("Posicao removida: %d\n", posRem);
	printf("Resultado: ");
	for(int q=0; q<cap-1; q++){
		if (q>=posRem){
			vetor = (int *) realloc(vetor, cap-1);
			vetor[q] = vetor[q+1];
		}
		printf("%d ", vetor[q]);
	}
	printf("\n");
	vetor = (int *) realloc(vetor, cap-1); 
	free(vetor);

	return 0;
}
*/

//06

#include <stdio.h>
#include <cstdlib>
#include <string.h>

void copia_string(char **copia, char fonte[]){
	int cont=0;
	while(fonte[cont]!='\0') cont++;
	cont++;
	*copia = (char *) malloc(cont*sizeof(char));
	for (int q=0; q<cont; q++){
		(*copia)[q] = fonte[q];
	}
}

int main(){
	char entrada[512];
	char *copia;
	printf("Digite uma string: ");
	fgets(entrada, 512, stdin);

	copia_string(&copia, entrada);

	printf("Copia realizada com sucesso!");
	printf("\nString copiada: %s", copia);
	free(copia);

	return 0;
}
*/

//07

#include <stdio.h>
#include <cstdlib>
#include <string.h>

void concatenar(char **string_conc, char str1[], char str2[]){
	int cont1=0, cont2=0, tam_max=0, cont=0;
	
	while(str1[cont1]!='\0') {
		if (str1[cont1]=='\n') str1[cont1]=' '; 
		cont1++;
	}
	
	while(str2[cont2]!='\0') {
		cont2++;
		if (str2[cont2]=='\n') str2[cont2]='\0';
		
	}
	tam_max=cont1+cont2;
	cont1--;
	cont2--;
	*string_conc = (char *) malloc(tam_max+1*sizeof(int));
	
	while (cont1>=0) {
		(*string_conc)[cont1] = str1[cont1];
		cont1--;
	}
	while (cont2>=0) {
		(*string_conc)[tam_max-cont2-1] = str2[cont];	
		cont2--;
		cont++;
	}
	(*string_conc)[tam_max] = '\0';
}

int main(){
	char entrada1[512];
	char entrada2[512];
	char *string_conc;
	
	printf("Digite a string 1: ");
	fgets(entrada1, 512, stdin);
	
	printf("Digite a string 2: ");
	fgets(entrada2, 512, stdin);
	
	concatenar(&string_conc, entrada1, entrada2);
	
	printf("String 1: %s\n", entrada1);
	printf("String 2: %s\n", entrada2);
	printf("String concatenada: %s\n", string_conc);
	free(string_conc);

	return 0;
}
*/

//08

#include <stdio.h>
#include <cstdlib>

int main(){
	int **matriz;
	int lin, col, maior, maior_x, menor_y;
	int *vetor_soma_lin;
	int *vetor_soma_col;
	

	printf("Digite o numero de linhas: ");
	scanf("%d", &lin);

	printf("Digite o numero de colunas: ");
	scanf("%d", &col);

	vetor_soma_lin = (int *) calloc(lin, sizeof(int));
	vetor_soma_col = (int *) calloc(col, sizeof(int));

	printf("Agora insira os valores na matriz!\n");
	matriz = (int **) malloc(lin*sizeof(int));
	for (int q=0; q<lin; q++){
		matriz[q] = (int *) malloc(col*sizeof(int));
		for (int i=0; i<col; i++){
			printf("Digite o numero na posicao [%d][%d]: ", q, i);
			scanf("%d", &matriz[q][i]);
			if (q==0 && i==0) {
				maior = matriz[q][i];
				maior_x = 0;
				menor_y = 0;
			}
			else {
				if (maior < matriz[q][i]) {
					maior = matriz[q][i];
					maior_x = q;
					menor_y = i;
				}  
			}
			vetor_soma_lin[q]+=matriz[q][i];
			vetor_soma_col[i]+=matriz[q][i];
		}
	}

	printf("=====================================\n");
	
	for (int q=0; q<lin; q++){
		for (int i=0; i<col; i++){
			printf("%d ", matriz[q][i]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i=0; i<col; i++){
			printf("Soma da linha %d: %d\n", i, vetor_soma_lin[i]);
	}
	printf("\n");

	for (int i=0; i<col; i++){
		printf("Soma da coluna %d: %d\n", i, vetor_soma_col[i]);
	}
	printf("\n");
	
	printf("Maior numero: %d\n", maior);
	printf("Posicao do maior numero: linha %d coluna %d\n", maior_x, menor_y);
	free(matriz);
	free(vetor_soma_lin);
	free(vetor_soma_col);
	
	return 0;
}
*/

//09

#include <stdio.h>
#include <cstdlib>

typedef struct {
	char nome[100];
	float nota1;
	float nota2;
} Aluno;


int main(){
	int tam_max, alunos_aprov=0;
	Aluno *info_alunos;
	float *medias;
	float media=0, maior_media=0;

	printf("Digite a quantidade de alunos a serem cadastrados: ");	
	scanf("%d", &tam_max);

	info_alunos = (Aluno *) malloc(tam_max*sizeof(Aluno));
	medias = (float *) malloc(tam_max*sizeof(float));
	printf("\n");
	for (int q=0; q<tam_max; q++){
		printf("Digite o nome do aluno %d: ", q+1);
		scanf("%s", info_alunos[q].nome);

		printf("Digite a nota 1 do aluno %d: ", q+1);
		scanf("%f", &info_alunos[q].nota1);

		printf("Digite a nota 2 do aluno %d: ", q+1);
		scanf("%f", &info_alunos[q].nota2);
		media= (info_alunos[q].nota1+info_alunos[q].nota2)/2;
		medias[q]= media;
		if(media>maior_media) maior_media=media;
		if(media>=6) alunos_aprov++;

		printf("\n");
	}
	printf("=============================================\n");
	for (int q=0; q<tam_max; q++){
		printf("Nome do aluno %d: %s\n", q+1, info_alunos[q].nome);
		printf("Media do aluno %d: %.2f\n", q+1, medias[q]);
		printf("\n");
	}
	printf("Maior media: %.2f\n", maior_media);
	printf("Quantidade de alunos com nota maior ou igual a 6: %d\n", alunos_aprov);

	free(info_alunos);
	free(medias);

	return 0;	
}
*/

//10
#include <stdio.h>
#include <cstdlib>
typedef struct {
	char *nome;
	char *telefone;
	char *email;
} Contato;

void copia_string(char **copia, char fonte[]){
	int cont=0;
	while(fonte[cont]!='\0') cont++;
	cont++;
	*copia = (char *) malloc(cont*sizeof(char));
	for (int q=0; q<cont; q++){
		(*copia)[q] = fonte[q];
	}
}

void cadastrar(Contato **contato, int *tam_max){
	char nome[512], tel[512], email[512];
	int cont=0;

	*contato = (Contato *) realloc(*contato, ((*tam_max)+1)*sizeof(Contato));

	printf("Digite o nome: ");
	fgets(nome, 512, stdin);

	printf("Digite o telefone: ");
	fgets(tel, 512, stdin);	

	printf("Digite o email: ");
	fgets(email, 512, stdin);

	copia_string(&(*contato)[*tam_max].nome, nome);
	copia_string(&(*contato)[*tam_max].telefone, tel);
	copia_string(&(*contato)[*tam_max].email, email);

	(*tam_max)++;
	printf("\nCadastro ocorrido com sucesso!\n\n");
}

void listar_contatos(Contato contatos[], int *tam_max){
	if (*tam_max==0) return;
	for (int q=0; q<*tam_max; q++){	
		printf("\nNome do contato %d: %s", q, contatos[q].nome);
		printf("Nome do contato %d: %s", q, contatos[q].telefone);
		printf("Nome do contato %d: %s\n", q, contatos[q].email);

	}
}

int buscar(Contato contatos[], int *tam_max){
	char entrada[512];
	printf("\nDigite o nome do contato: ");
	fgets(entrada, 512, stdin);

	for (int q=0; q<*tam_max; q++){
		for (int i=0; i<512; i++){
			if (entrada[i] == '\n' && contatos[q].nome[i] == entrada[i]) return q;
		}
	}
	return -1;
}

void remover(Contato **contatos[], int tam_max*){

	for(int q=0; q<cap-1; q++){
       if (q>=posRem){
           vetor = (int *) realloc(vetor, ta-1);
           vetor[q] = vetor[q+1];
       }
       printf("%d ", vetor[q]);
   	}
  	printf("\n");
   	vetor = (int *) realloc(vetor, cap-1);




}

int main(){
	int opt=0, tam_max=0, pos=-1;
	Contato *contatos;

	while(opt!=5){
		printf("Selecione uma das opcoes abaixo\n");
		printf("=========================================\n");
		
		printf("1 - Cadastrar contato\n");
		printf("2 - Listar contatos\n");
		printf("3 - Pesquisar contato pelo nome\n");
		printf("4 - Remover contato\n");
		printf("5 - Encerrar\n");

		printf("\nOPCAO: ");
		scanf("%d", &opt);
		getchar();

		switch (opt) {
			case 1:
				cadastrar(&contatos, &tam_max);
				break;
			case 2:
				listar_contatos(contatos, &tam_max);
				break;
			case 3:
				pos = buscar(contatos, &tam_max);
				if (pos!=-1) {
					printf("==================\n");
					printf("Nome: %s\n", contatos[pos].nome);
					printf("Telefone: %s\n", contatos[pos].telefone);
					printf("Email: %s\n", contatos[pos].email);
					printf("==================\n");					
				}
				else printf("Contato nao encontrado!\n");
				break;
			case 4:
				break;
			case 5:
				printf("Encerrando programa...\n");
				break;
			default:
				printf("Digite uma opcao valida!\n");
				break;
		}
		printf("=========================================\n");
	}


	free(contatos);
	return 0;
}