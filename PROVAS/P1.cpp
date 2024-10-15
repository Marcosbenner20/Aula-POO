//exibir valor de numero e o valor de colunas
#include <iostream>
#include <clocale>
#include <vector>
using namespace std;

void imprimirTabuleiro(){

    int op;

    cout << "Quantos valores vc quer seu historograma\n";
    cin >> op;
    cout <<endl;

    int matriz[op];

    //array para armazenar
    cout << "escreva os valores\n";
    for(int i = 0; i < op; i++){
        cin >> matriz[i];
    }
    cout<<endl;
    cout <<"Apresentando Histograma\n\n";

    //Laço para imprimir
    for(int i = 0; i < op; i++){
        cout << i +1 <<"| ";
        for(int m = 0; m < matriz[i]; m++){
            cout  <<" * ";
        }
        cout <<endl;
    }
    for(int i = 0; i <= op; i++){
        if(i == 0){
            cout << " + ";
        }else{
            cout<< " - ";
        }
    }
    cout<<endl;

    //Laço para formatação
    for(int i =0; i <= op; i++){
        if(i == 0){
            cout <<" "<< i<< " ";
        }else{
            cout << " "<<i << " ";
        }
    }

}


int main(void){
    cout <<"\n";
    cout << "Primeira prova de POO \n\n";
    cout << "Histograma Horizontral\n\n";

    imprimirTabuleiro();

    cout<< "\n\n";
    cout << ">> Fim: Prova P1";
    return 0;

}

