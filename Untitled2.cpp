#include <stdio.h>
#include <locale.h>

	int main () {
		
		setlocale(LC_ALL, "Portuguese");
		int alt, base, area, perimetro;
		
		printf("Entre com a altura do retangulo: ");
		scanf("%d", &alt);
		
		printf("Entre com a base do retangulo: ");
		scanf("%d", &base);
	
		area = base * alt;
		perimetro = 2*base + 2*alt;
		printf("Valor da altura entrada: %d\n", alt);
		printf("Valor da base entrada: %d\n", base);
		printf("área = %d\n", area);
		printf("perímetro = %d\n", perimetro);
}
