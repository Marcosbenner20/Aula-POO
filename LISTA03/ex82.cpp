#include <iostream>
using namespace std;

// Utilizando a notração Big-O e considerando o pior dos casos, calcule a complexudade e encontre o tempo
// de execução do fragmento de código listadfo abaixo.

int teste(int n) {

    int i, j, k, m;  // Declaração de variáveis

    i = 0;
    m = 0;

    // Primeiro bloco de laços aninhados (laço dentro de laço)
    // Complexidade: O(n²)
    while(i < n) {   // Este laço externo é executado 'n' vezes
        j = 0;       // Inicializa j
        while(j < n) {   // Este laço interno é executado 'n' vezes para cada iteração de i
            m++;    // Operação constante, executada n*n vezes no total
            j++;    // Incrementa j até atingir n
        }
        i++;        // Incrementa i até atingir n
    }

    // Neste momento o laço externo executa n vezes, e o laço interno também executa n vezes para cada iteração do laço externo.
    // Porisso o número total de iterações de `m++` é n * n, resultando em uma complexidade de O(n²).

    i = 0;  // Reinicializa i para o segundo laço

    // Segundo bloco de laço
    // Complexidade: O(n)
    while (i < n) {  // Este laço é executado 'n' vezes
        // Aqui poderia haver outra operação constante
        i++;        // Incrementa i até atingir n
    }

    // Este laço percorre apenas 'n' iterações, então sua complexidade é O(n).
    // No entanto, a complexidade geral do código é dominada pelo termo de maior grau, que é O(n²).
}

int main() {
    int n = 5;  // Exemplo: Testando com n = 5
    teste(n);   // Chama a função
    return 0;
}

