#include <iostream>
#include <clocale>
using namespace std;


//Escreva um programa que pe�a a entrada de N valores inteiros. em seguida, o programa deveexibir
//O menor valor, o maior valor e a soma dos valores.

int main(void){
    setlocale(LC_ALL, "Portuguese");


    //cabe�alho do programa
    cout << "\n";
    cout << "------Programa n�mero 58------\n\n";

    //declarado variaveis;
    int num, menor, maior, soma = 0;


    //
    cout << "Qantos n�meros voc� deseja inserir\n";
    cin >> num;

    //criando um array para armazenar os numeros
    int matriz[num];

    //la�o para a entrada de dados
    cout << "digite "<< num << " n�meros inteiros\n";
    for(int i = 0; i < num; i++){
        cin >> matriz[i];

        soma += matriz[i];

        //definindo o primeiro valor inserido como menor e maior valor
        if(i == 0){
            menor = matriz[i];
            maior = matriz[i];
        }

        //verificar se � maior
        if(matriz[i] > maior){
            maior = matriz[i];
        }
        //verificar menor
        if(matriz[i] < menor){
            menor = matriz[i];
        }
    }

    //Mostrar os resultados
    cout << "Menor valor " << menor <<endl;
    cout << "maior valor " << maior <<endl;
    cout << "A soma de todos os numenos = " << soma;
    cout <<endl<<endl;

    cout << "tecle enter para finalizar ";
    cin.get();

    //finalizar programa
    return 0;



}
