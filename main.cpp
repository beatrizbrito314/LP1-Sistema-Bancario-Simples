#include <iostream>
#include <string>
#include "cliente.h"
#include "contaBancaria.h"

using namespace std;

int main(){
    //criação dos clientes
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    //criação das contas bancarias
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);
    
    //exibir saldo inicial da conta de Ana
    conta1.exibirSaldo();

    //Ana transfere R$ 200.0 para Bruno
    conta1.transferir(200000.0, conta2);

    //Ana transfere R$ 300.0 diviidos entre Bruno e Carla
    conta1.transferir(30000.0, conta2, conta3);

    //exibição dos saldos finais
    cout<<endl;
    conta1.exibirInformacoes();
    conta2.exibirInformacoes();
    conta3.exibirInformacoes();
}
