//
// Created by thiago on 02/03/2018.
//

#include "fila.h"

deque<int> adicionaNumeroNoFimDaFila(deque<int> numeros, int numero) {
    numeros.push_back(numero);
    return numeros;
}

deque<int> removeNumeroDoTopo(deque<int> numeros) {
    int numero = numeros.front();
    numeros.pop_front();
    cout << "Voce eliminou o primeiro elemento da fila: " << numero << endl;
    return numeros;
}

int retornaObjDoTopo(deque<int> numeros) {
    return numeros.front();
}

bool estaVazia(deque<int> numeros) {
    return numeros.empty();
}

void listaFila(deque<int> numeros) {
    cout << "-------------" << endl;

    for (deque<int>::iterator it = numeros.begin(); it != numeros.end(); ++it ) {
        cout << " " << *it;
    }

    cout << endl << "-------------" << endl << endl;
}

int tamanhoDaFila(deque<int> numeros) {
    return numeros.size();
}