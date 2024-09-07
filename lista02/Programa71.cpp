#include <iostream>
#include <iomanip> // Para definir a precis�o das casas decimais
#include <clocale>
using namespace std;

// Programa para pre�os de uma lanchonete

int main(void) {
    setlocale(LC_ALL, "");

    // Cabe�alho
    cout << "\n";
    cout << "Programa n�mero 71 - Tabela de pre�os\n\n";

    int i, codigo, quantidade, opcao;
    float preco[107], totalItem, totalGeral = 0.0;

    // Inicializa os pre�os dos produtos
    for (i = 100; i <= 106; i++) {
        switch (i) {
            case 100: preco[i] = 7.50; break;
            case 101: preco[i] = 10.30; break;
            case 102: preco[i] = 12.50; break;
            case 103: preco[i] = 12.20; break;
            case 104: preco[i] = 10.30; break;
            case 105: preco[i] = 18.10; break;
            case 106: preco[i] = 11.00; break;
        }
    }

    do {
        // Exibe o menu principal
        cout << "### Menu Principal ###\n\n";
        cout << "[1] Fazer pedido\n";
        cout << "[2] Sair do programa\n\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        // Reinicializa o total para novos pedidos
        totalGeral = 0.0;

        switch (opcao) {
            case 1:
                cout << fixed;
                cout << setprecision(2);
                cout<<setiosflags(ios::showpoint);
                cout << "### Tabela de Pre�os ###\n\n";
                cout << "Descricao        " << "Codigo  " << "Preco\n";
                cout << "Cachorro quente  " << "100     " << preco[100] << endl;
                cout << "Bauru Simples    " << "101     " << preco[101] << endl;
                cout << "Bauru Com Ovos   " << "102     " << preco[102] << endl;
                cout << "Hamburger        " << "103     " << preco[103] << endl;
                cout << "Cheeseburger     " << "104     " << preco[104] << endl;
                cout << "X-Calango        " << "105     " << preco[105] << endl;
                cout << "Refrigerante     " << "106     " << preco[106] << endl;
                cout << endl;

                // L� o pedido do cliente
                cout << "Digite o c�digo do item (ou 0 para encerrar): ";
                cin >> codigo;
                //la�o ativo enquanto o cliente desejar fazer pedido
                while (codigo != 0) {

                    // Verifica se o c�digo � v�lido
                    if (codigo >= 100 && codigo <= 106) {
                        cout << "Digite a quantidade: ";
                        cin >> quantidade;

                        // Calcula o total por item
                        totalItem = preco[codigo] * quantidade;
                        cout << "Valor por " << quantidade << " unidade(s) do item " << codigo << ": R$ "  << totalItem << endl;

                        // Soma ao total geral
                        totalGeral += totalItem;
                    } else {
                        cout << "C�digo inv�lido! Tente novamente.\n";
                    }

                    // Solicita novo c�digo de item ou encerra
                    cout << "\nDigite o c�digo do item (ou 0 para encerrar): ";
                    cin >> codigo;
                }

                // Exibe o total geral do pedido
                cout << "\nTotal geral do pedido: R$ " << totalGeral << endl<<endl;
                break;

            case 2:
                cout << "Saindo do programa...\n";
                break;

            default:
                cout << "Op��o inv�lida! Tente novamente.\n";
        }

    } while (opcao != 2); // O loop se repete at� que o usu�rio escolha a op��o 2 (sair)

    return 0;
}
