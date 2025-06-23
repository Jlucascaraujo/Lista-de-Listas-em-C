// Arquivo de Treinamento em C
#include <stdio.h> //Biblioteca, permite o uso de funções exclusivas, como printf();
#include <locale.h>

int main()
{                                                          // Função principal;
    setlocale(LC_ALL, "pt_BR");
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

    x = 10; //Fazendo overwrite dos valores de x e y;
    y = 5;
    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d\n\n", x / y);
    //Operações aritméticas básicas em C;

    printf("%d\n", x % 2);
    printf("%d\n", x++); //Incremento pós fixado
    printf("%d\n", --x);
    printf("%d\n\n", x--);
    //Operação aritmética intermediária;

    int testNumber = 10;
    printf("Valor Original: %d\n", testNumber);
    testNumber += 4;
    printf("x += y é igual a x = x + y: %d\n", testNumber);
    testNumber -= 2;
    printf("x -= y é igual a x = x - y: %d\n", testNumber);
    testNumber *= 10;
    printf("x *= y é igual a x = x * y: %d\n", testNumber);
    testNumber /= 2;
    printf("x /= y é igual a x = x / y: %d\n\n", testNumber);
    testNumber %= 2;
    //Operações de Atribuções;

    int testNumber2 = 15;
    printf("O 0 é não.\nO 1 é sim!\n");
    printf("O X é igual ao Y? %d\n", testNumber == testNumber2);
    printf("O X é diferente do Y? %d\n", testNumber != testNumber2);
    printf("O X é maior que Y? %d\n", testNumber > testNumber2);
    printf("O X é menor do Y? %d\n", testNumber < testNumber2);
    printf("O X é maior ou igual à Y? %d\n", testNumber >= testNumber2);
    printf("O X é menor ou igual à Y? %d\n\n", testNumber <= testNumber2);
    //Operações de Comparação;

    printf("O X e o Y são maiores que 1? %d\n", testNumber > 1 && testNumber2 > 1);
    printf("O X e o Y são menores que 100? %d\n", testNumber < 100 && testNumber2 < 100);
    printf("O X e o Y são números negativos? %d\n\n", !(testNumber < 1 || testNumber2 < 1));
    //Operadores Lógicos;

    if (testNumber == testNumber2)
    {
        printf("Os números X e Y são iguais!\n\n");
    } else {
        printf("Os números X e Y não são iguais!\n\n");
    }
    
    if (testNumber > testNumber2)
    {
        printf("X é maior que Y\n\n");
    } else if (testNumber < testNumber2)
    {
        printf("X é menor que Y\n\n");
    } else {
        printf("ERROR X001\n\n");
    }
    //

    // return 0; //Retorno usado para finalizar o programa; //DEPRECATED: Versão 1 sem user input;

    printf("Aperte qualquer tecla para fechar...\n"); 
    getchar();
    return 0; // Finalizando o programa versão 2: com user input para o terminal não apenas fechar sozinho;
}