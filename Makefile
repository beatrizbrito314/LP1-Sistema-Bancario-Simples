# cores
ROSA=35
VERDE=32
AMARELO=33
CIANO=36

#alvo
all:
	@echo "\033[$(CIANO)m----------------------------------------\033[0m"
	@echo "\033[$(ROSA)mIniciando a compilação...\033[0m"
	@echo "\033[$(AMARELO)mCompilando main.cpp ...\033[0m"
	g++ -Wall -c main.cpp
	@echo "\033[$(AMARELO)mCompilando contaBancaria.cpp ...\033[0m"
	g++ -Wall -c contaBancaria.cpp
	@echo "\033[$(AMARELO)mCompilando cliente.cpp ...\033[0m"
	g++ -Wall -c cliente.cpp
	@echo "\033[$(ROSA)mLinkando arquivos...\033[0m"
	g++ -Wall -o sistemaBancario main.o contaBancaria.o cliente.o
	@echo "\033[1;$(VERDE)mCompilação realizada com sucesso!:)\033[0m"
	@echo "\033[$(CIANO)m----------------------------------------\033[0m"

clean:
	@echo "\033[$(ROSA)mLimpando arquivos...\033[0m"
	rm -f *.o sistemaBancario
	@echo "\033[1;$(VERDE)mLimpeza realizada com sucesso!\033[0m"