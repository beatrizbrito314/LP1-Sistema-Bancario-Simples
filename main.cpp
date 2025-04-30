#include <iostream>
#include <string>
using namespace std;

class Cliente{
private:
    string nome;
    string cpf;
public:
//construtor para inicializar nome e cpf
    Cliente(){};//construtor para usar na contaBancaria
    Cliente(string nome, string cpf){
        this->nome=nome;
        this->cpf=cpf;
    }
    //acessar o nome
    const::string& getName(){
        return nome;

    };
    //acessar o cpf
    const::string& getCpf(){
        return nome;
    }
};
class ContaBancaria{
private:
    int numero;
    double saldo;
    Cliente titular;
public:
//usando 0 para iniciar pois alguns clientes n passam saldo como parametro
    ContaBancaria(int numero, Cliente titular, double saldo=0){
        this->numero=numero;
        this->titular=titular;
        this->saldo=saldo;
    }
    void depositar(double valor){
        double valorDeposito=valor;

    }
    void sacar(double valor){
        double valorSacar=valor;
        
    }
    //sobrecarga de metodos para transferir
    void transferir(double valor, ContaBancaria &destino){
    }
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
        
    }
    void exibirSaldo(){

    }
    void exibirInformacoes(){

    }

};

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
    conta1.transferir(200.0, conta2);

    //Ana transfere R$ 300.0 diviidos entre Bruno e Carla
    conta1.transferir(300.0, conta2, conta3);

    //exibição dos saldos finais
    cout<<endl;
    conta1.exibirInformacoes();
    conta2.exibirInformacoes();
    conta3.exibirInformacoes();
}
