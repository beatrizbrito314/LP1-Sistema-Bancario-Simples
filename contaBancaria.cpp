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
        this->saldo -= valor;

        cout<<"Transferido: R$ "<<valor<<" da conta "<<this->numero
        <<" para a conta "<<destino.numero<<endl;
    }
}
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (this->saldo<valor){
        cout<<"Saldo insuficiente."<<endl;
    }else{
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);
        this->saldo -= valor;

        cout<<"Transferido: R$ "<<valor<<" para cada conta ("<<destino1.numero
        <<" e "<<destino2.numero<<")"<<" da conta "<<this->numero<<endl;
    }
}
//método para exibir saldo
void ContaBancaria::exibirSaldo(){
    cout<<"Saldo atual da conta "<<this->numero<<": R$ "<<this->saldo<<endl;
}
//metodo para exibir informações
void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getName()
    <<", CPF: " << titular.getCpf()<< endl;
    cout << "Número da Conta: " << numero 
    <<", Saldo: R$ "<<saldo<<endl;

};