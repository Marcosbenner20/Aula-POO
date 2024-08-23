#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;


int main(void){
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variaveis
    float GH,HT,IR, INSS, SDCT,SL,SB;
    cout << "\n";
    cout << "----Programa Salario----\n\n";

    //Leiura de dados do unuário
    cout << "Informe quanto voce ganha por hora\n";
    cin >> GH;
    cout << "Informe quantas horas voce trabalhou esse mês\n";
    cin >> HT;

    //calculo do salario bruto
    SB = GH * HT;

    //AUX equivale a 1 por cento do salario
    int AUX = SB / 100;


    //Agora será feito os calculos dos descontos

    //Imposto de Renda
    IR = (AUX * 11);
    //INSS
    INSS = (AUX * 8);
    //Sindicato
    SDCT = (AUX * 5);

    //Cálculo do Salário Liquido
    SL = SB - (IR + INSS + SDCT);

    //Apresentação dos Valores
    cout << "\n\n";
    cout << fixed; //define o uso dessas propriedades como fixas
    cout << setprecision(2); //uso de duas casas decimais
    cout << setiosflags(ios::showpoint); //mostrar pontos

    cout << "Salário Bruto..: R$" << SB <<endl;
    cout << "IR (11%).......: R$" << IR <<endl;
    cout << "INSS (8%)......: R$ " << INSS <<endl;
    cout << "Sindicato (5%).: R$ " << SDCT <<endl;
    cout << "Salario Líquido: R$ " << SL <<endl;
    cout << "\n";

    cout << "Tecle enter para finalizar";
    cin.get();

    return 0;

}
