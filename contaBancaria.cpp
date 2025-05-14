#include <iostream>
#include <string>
#include "cliente.h"
#include "contaBancaria.h"
using namespace std;

//implementação dos metodos e construtores dda classe ContaBancaria

//Construtor para inicializar o numero da conta, titular da conta e saldo
ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo){
    this->numero=numero;
    this->titular=titular;
    this->saldo=saldo;
}
//destrutor
ContaBancaria::~ContaBancaria() {}

//pegar numero
int ContaBancaria::getNumero(){
    return numero;
}

//pegar saldo
double ContaBancaria::getSaldo(){
    return saldo;
}

//método para realizar deposito
void ContaBancaria::depositar(double valor){
 if(valor<0.0){
         cout<<"Informe um valor válido"<<endl;
    }else{
        this->saldo+=valor;
}
}

//método para realizar saque
void ContaBancaria::sacar(double valor){
    if(valor<0.0){
         cout<<"Informe um valor válido"<<endl;
    }else{
         if (this->saldo<valor){
        cout<<"Saldo insuficiente."<<endl;
    }else{
        this->saldo-=valor;
    }
    }
}
//sobrecarga de metodos para transferir
void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if (this->saldo<valor){
        cout<<"Saldo insuficiente."<<endl;
    }else{
        destino.depositar(valor);
        sacar(valor);

        cout<<"Transferido: R$ "<<valor<<" da conta "<<getNumero()
        <<" para a conta "<<destino.getNumero()<<endl;
    }
}
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (this->saldo<valor){
        cout<<"Saldo insuficiente."<<endl;
    }else{
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);
        sacar(valor);

        cout<<"Transferido: R$ "<<valor/2<<" para cada conta ("<<destino1.getNumero()
        <<" e "<<destino2.getNumero()<<")"<<" da conta "<<getNumero()<<endl;
    }
}
//método para exibir saldo
void ContaBancaria::exibirSaldo(){
    cout<<"Saldo atual da conta "<<getNumero()<<": R$ "<<this->getSaldo()<<endl;
}
//metodo para exibir informações
void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getName()
    <<", CPF: " << titular.getCpf()<< endl;
    cout << "Número da Conta: " << getNumero() 
    <<", Saldo: R$ "<<getSaldo()<<endl;

};