#include <stdio.h>
#include <locale.h>

void printMsg(void);

int main () {
	setlocale(LC_ALL, "Portuguese");
	printf("\n---Inicio do Programa 01---");
	
	printMsg();
	
	printf("\n---Fim do Programa 01---");
	return 0;
}

void printMsg(void) {
	printf("\nHello World...");
}
