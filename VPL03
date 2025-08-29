// VPL 02: PONTEIROS E REFERÊNCIAS
// Autor: André Nunes Fernandes
// Matéria: Programação e Desenvolvimento de Software II
// Curso: Engenharia de Controle e Automação

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Usuario {
    string nome;
    int idade;
    float salario;
};

void mostraBool(bool valor) {
    if (valor) {
        cout << "True";
    } else {
        cout << "False";
    }
}

bool comparaPonteiros(Usuario* a, Usuario* b) {
    return (a == b);
}

void aumentoSalario(float& salario, float taxa) {
    salario += salario * taxa;
}

int main() {
    Usuario user;
    cin >> user.nome >> user.idade >> user.salario;

    Usuario* p1 = &user;
    Usuario* p2 = &user;
    string* p3 = nullptr;
    float* p4 = nullptr;

    cout << "p1->nome =" << p1->nome << endl;
    cout << "(*p2).idade =" << (*p2).idade << endl;
    cout << "Comparando p1 == p2:";
    mostraBool(comparaPonteiros(p1, p2));
    cout << endl;

    cin >> p2->salario;
    cout << fixed << setprecision(2);
    cout << "Novo salario " << p1->nome << " " << p1->idade << " " << p1->salario << endl;

    p2 = p1;
    cin >> p1->idade;
    cout << "nova idade atraves de p2 -> " << p2->idade << endl;
    cout << "Comparando p1 == p2:";
    mostraBool(comparaPonteiros(p1, p2));
    cout << endl;

    Usuario outro;
    outro.nome = "VPL2";
    outro.idade = 1;
    outro.salario = 5.0f;

    p1 = &outro;
    cout << "Comparando p1 == p2:";
    mostraBool(comparaPonteiros(p1, p2));
    cout << endl;

    cout << "Imprimindo os nomes para verificar desigualdade" << endl;
    cout << p1->nome << endl;
    cout << p2->nome << endl;

    p3 = &p1->nome;
    cout << "Imprimindo o conteudo de p3 " << *p3 << endl;

    string novoNome;
    cin >> novoNome;
    *p3 = novoNome;

    cout << "Imprimindo atraves de p1 o nome alterado por p3 " << p1->nome << endl;

    p4 = &p1->salario;
    cout << *p4 << endl;

    float fator;
    cin >> fator;
    aumentoSalario(*p4, fator);
    cout << *p4 << endl;

    return 0;
}
