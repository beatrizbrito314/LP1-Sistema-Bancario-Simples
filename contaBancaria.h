#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include "cliente.h"

class ContaBancaria{
    private:
        int numero;
        double saldo;
        Cliente titular;
    public:
        ContaBancaria(int numero, Cliente titular, double saldo=0);
        void depositar(double valor);
        void sacar(double valor);
        void transferir(double valor, ContaBancaria &destino);
        void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
        void exibirSaldo();
        void exibirInformacoes();
    };
#endif