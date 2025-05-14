#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include "cliente.h"
//estrutura da classe
class ContaBancaria{
    private:
        int numero;
        double saldo;
        Cliente titular;
    public:
        //assinatura dos métodos e construtores
        ContaBancaria(int numero, Cliente titular, double saldo=0.0);
        ~ContaBancaria();
        int getNumero();
        double getSaldo();
        bool verificar(double valor);
        void depositar(double valor);
        void sacar(double valor);
        void transferir(double valor, ContaBancaria &destino);
        void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
        void exibirSaldo();
        void exibirInformacoes();
    };
#endif