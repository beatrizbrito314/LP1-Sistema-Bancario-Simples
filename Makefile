# cores
ROSA=35
VERDE=32
AMARELO=33
CIANO=36

all:
	@echo "\e[$(CIANO)m----------------------------------------\e[0m"
	@echo "\e[$(ROSA)mIniciando a compilação...\e[0m"
	@echo "\e[$(AMARELO)mCompilando main.cpp ...\e[0m"
	g++ -Wall -c main.cpp
	@echo "\e[$(AMARELO)mCompilando contaBancaria.cpp ...\e[0m"
	g++ -Wall -c contaBancaria.cpp
	@echo "\e[$(AMARELO)mCompilando cliente.cpp ...\e[0m"
	g++ -Wall -c cliente.cpp
	@echo "\e[$(ROSA)mLinkando arquivos...\e[0m"
	g++ -o sistemaBancario main.o contaBancaria.o cliente.o
	@echo "\033[1;$(VERDE)mCompilação realizada com sucesso!:)\033[0m"
	@echo "\e[$(CIANO)m----------------------------------------\e[0m"
