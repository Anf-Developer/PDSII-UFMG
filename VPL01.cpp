// VPL 01: CONTADOR DE PALAVRAS
// Autor: André Nunes Fernandes
// Matéria: Programação e Desenvolvimento de Software II
// Curso: Engenharia de Controle e Automação

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string nome;
    string iniciais;
    int i = 0;
    cout << "====================" << endl;
    cout << "CONTADOR DE PALAVRAS" << endl;
    cout << "====================" << endl;
    cout << "Digite o seu nome completo: ";
    getline(cin, nome);

    stringstream nome_separado(nome);
    string silabas;

    while (nome_separado >> silabas) {
        iniciais = iniciais + silabas[0];

        i++;
    }
    if(i == 1){
        cout << "Invalido" << endl;
    }
    else{
        cout << i << endl;
        cout << iniciais << endl;
        cout << silabas << " " << iniciais[0] << "." << endl;
    }
    return 0;
}
