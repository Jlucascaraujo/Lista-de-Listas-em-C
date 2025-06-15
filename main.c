//Arquivo de Treinamento em C
#include <stdio.h> //Biblioteca, permite o uso de funções exclusivas, como printf();

int main() { //Função principal;
    printf("Obi-Wan:\t \"Hello there!\"\n"); //Output com tab, aspas e quebra de linha;
    printf("General Grievous:\t \"General Kenobi!\"\n\n"); //Linha branca
    
    /* Isso
    é
    um
    comentário
    de
    múltiplas
    linhas */ //Introduzido no C99 de 1999;

    int myAge = 30;
    char my1stLetter1stName = 'J';
    char my1stLetter2ndName = 'L';
    float myHeight = 1.79f;
    //Tipos de dados em variáveis;

    printf("Minha idade é %d, e minhas iniciais são %c%c.\n", myAge, my1stLetter1stName, my1stLetter2ndName);
    printf("E meu peso é %f \n\n", 86.5f);
    //Usar especificadores de formação com e sem variaveis;

    double myWeight = 86.5;
    char asciiSymbol = 178;
    printf("My weight is %lf\n", myWeight); //Double output;
    printf("%c%c%c%c%c%c\n\n", asciiSymbol, asciiSymbol, asciiSymbol, asciiSymbol, asciiSymbol);
    //Símbolo ASCII como Char;


    int x = 5, y = 6, z = 50;
    printf("%d\n\n", x + y + z);
    //Output concateando a inicialização de variáveis em uma única linha;
    

    //return 0; //Retorno usado para finalizar o programa;

    printf("Press any key to close...\n");
    getchar();
    return 0;
}