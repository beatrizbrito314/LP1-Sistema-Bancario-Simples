#include <iostream>
#include <string>
#include "cliente.h"
using namespace std;
//implementação dos metodos e construtores dda classe cliente

//construtor para usar na contaBancaria
 Cliente::Cliente(){};
 //construtor para inicializar nome e cpf
 Cliente::Cliente(string nome, string cpf){
        this->nome=nome;
        this->cpf=cpf;
 }
 //metodo para acessar o nome
 string Cliente::getName(){
     return nome;
 };
 //metodo para acessar o cpf
 string Cliente::getCpf(){
     return cpf;
 }

    