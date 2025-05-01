#include <iostream>
#include <string>
#include "cliente.h"
#include "contaBancaria.h"
using namespace std;

ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo){
    this->numero=numero;
    this->titular=titular;
    this->saldo=saldo;
}
void ContaBancaria::depositar(double valor){
    this->saldo+=valor;
}
void ContaBancaria::sacar(double valor){
    this->saldo-=valor;
    
}
//sobrecarga de metodos para transferir
void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if (this->saldo<valor){
        cout<<"Saldo insuficiente."<<endl;
    }else{
        destino.depositar(valor);
        this->saldo -= valor;
    }
}
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (this->saldo<valor){
        cout<<"Saldo insuficiente."<<endl;
    }else{
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);
        this->saldo -= valor;
    }
}
void ContaBancaria::exibirSaldo(){
    cout<<"R$"<<this->saldo<<endl;
}
void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getName() << endl;
    cout << "CPF: " << titular.getCpf() << endl;
    cout << "Número da Conta: " << numero << endl;
    exibirSaldo();

};