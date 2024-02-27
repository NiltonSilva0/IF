#include <string.h>
#include <locale.h>Permite o uso de acentos
dentro do main setlocale(LC_ALL, "Portuguese");

strcpy(<destino>, <origem>);
Atribuição de strings usa o strcpy não =

strcat(<destino>, <origem>);
Concatenação de strings

strlen(<string>);
length de strings

strcmp(<string1>, <string2>);
Compara estritamente igual string1 == string2
se sim retorna 0