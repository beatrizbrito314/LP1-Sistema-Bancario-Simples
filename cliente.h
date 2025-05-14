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
        ~Cliente();
        std::string  getName();
        std::string  getCpf();
    };
#endif