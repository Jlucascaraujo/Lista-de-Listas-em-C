// Arquivo de Treinamento em C
#include <stdio.h> //Biblioteca, permite o uso de funções exclusivas, como printf();

int main()
{                                                          // Função principal;
    printf("Obi-Wan:\t \"Hello there!\"\n");               // Output com tab, aspas e quebra de linha;
    printf("General Grievous:\t \"General Kenobi!\"\n\n"); // Linha branca

    /* Isso
    é
    um
    comentário
    de
    múltiplas
    linhas */
    // Introduzido no C99 de 1999;

    int myAge = 30;
    char my1stLetter1stName = 'J';
    char my1stLetter2ndName = 'L';
    float myHeight = 1.79f;
    // Tipos de dados em variáveis;

    printf("Minha idade é %d, e minhas iniciais são %c%c.\n", myAge, my1stLetter1stName, my1stLetter2ndName);
    printf("E meu peso é %f \n\n", 86.5f);
    // Usar especificadores de formação com e sem variaveis;

    double myWeight = 86.5;
    char asciiSymbol = 178;
    printf("My weight is %lf\n", myWeight); // Double output;
    printf("%c%c%c%c%c%c\n\n", asciiSymbol, asciiSymbol, asciiSymbol, asciiSymbol, asciiSymbol);
    // Símbolo ASCII como Char;

    int x = 5, y = 6, z = 50;
    printf("%d\n\n", x + y + z);
    // Output concateando a inicialização de variáveis em uma única linha;

    float piFloat = 3.14;
    double piDouble = 3.14;

    printf("%.1f", piFloat);
    printf("%.2f", piFloat);

    printf("%.1lf\n", piDouble);
    printf("%.2lf\n\n", piDouble);
    // Podemos definir a quantidade de decimais serão mostradas no resultado da função printf() no terminal;

    printf("%zu\n", sizeof(myAge));
    printf("%zu\n", sizeof(myHeight));
    printf("%zu\n\n", sizeof(piDouble));
    // Usamos o operador "sizeof" para saber o tamanho que um tipo de variável ocupa na memória do computador;

    float sumNoExplicitConverion = 5 / 2; // sem conversão explícita
    printf("%f\n", sumNoExplicitConverion); // 2.000000

    float sumExplicitConversion = (float)5 / 2; // com conversão explícita
    printf("%f\n\n", sumExplicitConversion); // 2.500000
    //Isso mostra a necessidade de atenção extra na hora de executar conversos de tipos de dados

    // return 0; //Retorno usado para finalizar o programa;

    printf("Press any key to close...\n");
    getchar();
    return 0;
}