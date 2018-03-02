//
// Created by thiago on 02/03/2018.
//

#ifndef FILA_ESTRUTURADO_FILA_H
#define FILA_ESTRUTURADO_FILA_H

#include <iostream>
#include <deque>

using namespace std;

deque<int> adicionaNumeroNoFimDaFila(deque<int> numeros, int numero);
deque<int> removeNumeroDoTopo(deque<int> numeros);
int retornaObjDoTopo(deque<int> numeros);
bool estaVazia(deque<int> numeros);
void listaFila(deque<int> numeros);
int tamanhoDaFila(deque<int> numeros);

#endif //FILA_ESTRUTURADO_FILA_H
