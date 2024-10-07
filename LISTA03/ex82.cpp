#include <iostream>
using namespace std;

// Utilizando a notra��o Big-O e considerando o pior dos casos, calcule a complexudade e encontre o tempo
// de execu��o do fragmento de c�digo listadfo abaixo.

int teste(int n) {

    int i, j, k, m;  // Declara��o de vari�veis

    i = 0;
    m = 0;

    // Primeiro bloco de la�os aninhados (la�o dentro de la�o)
    // Complexidade: O(n�)
    while(i < n) {   // Este la�o externo � executado 'n' vezes
        j = 0;       // Inicializa j
        while(j < n) {   // Este la�o interno � executado 'n' vezes para cada itera��o de i
            m++;    // Opera��o constante, executada n*n vezes no total
            j++;    // Incrementa j at� atingir n
        }
        i++;        // Incrementa i at� atingir n
    }

    // Neste momento o la�o externo executa n vezes, e o la�o interno tamb�m executa n vezes para cada itera��o do la�o externo.
    // Porisso o n�mero total de itera��es de `m++` � n * n, resultando em uma complexidade de O(n�).

    i = 0;  // Reinicializa i para o segundo la�o

    // Segundo bloco de la�o
    // Complexidade: O(n)
    while (i < n) {  // Este la�o � executado 'n' vezes
        // Aqui poderia haver outra opera��o constante
        i++;        // Incrementa i at� atingir n
    }

    // Este la�o percorre apenas 'n' itera��es, ent�o sua complexidade � O(n).
    // No entanto, a complexidade geral do c�digo � dominada pelo termo de maior grau, que � O(n�).
}

int main() {
    int n = 5;  // Exemplo: Testando com n = 5
    teste(n);   // Chama a fun��o
    return 0;
}

