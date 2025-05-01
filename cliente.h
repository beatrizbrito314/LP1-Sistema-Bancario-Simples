#ifndef CLIENTE_H
#define CLIENTE_H

//estrutura da classe
class Cliente{
    private:
        std::string nome;
        std::string cpf;
    public:
        //assinatura dos métodos e construtores
        Cliente();
        Cliente(std::string  nome, std::string  cpf);
        //acessar o nome
        std::string  getName();
        //acessar o cpf
        std::string  getCpf();
    };
#endif