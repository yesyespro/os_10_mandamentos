#include <stdio.h>
#include "lib/util.h"

// Criado por yesyespro

static char * mandamentos[] = {"Amar a Deus sobre todas as coisas", "Não tomar seu santo nome em vão", "Guardar domingos e festas de guarda", "Honrai pai e mãe", "Não matar", "Não pecar contra a castidade", "Não furtar", "Não levantar falsos testemunhos", "Não desejar a mulher do proximo", "Não cobiçar as coisas alheias"};

int main(void){
	printf("Responda todos os 10 mandamentos- mandamentos de deus pra lembrar\n");

	char * man;
	int x = 0;

	for(int i = 0; i < 10; i++){
		x += 1;
		printf("mandamento %d ::: ", x);
		man = input();
		if(cmp(man, mandamentos[i])){
			printf("Você acertou\n");
		}else{
			printf("Você errou: correto -> %s\n", mandamentos[i]);
		}
	}

}
