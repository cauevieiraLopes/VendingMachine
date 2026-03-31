#include <iostream>

int main()
{
	int produto=0, pagamento=0, senha=1234, teste;
	
	do
	{
		std::cout<<"===== MAQUINA DE BEBIDAS ====="<<std::endl;
		std::cout<<"Produtos disponiveis:\n1. Coca-Cola\t\t-R$ 5.00\n";
		std::cout<<"2. Guaraná\t\t-R$ 4.50\n";
		std::cout<<"3. Suco de uva\t\t-R$ 6.00\n";
		std::cout<<"4. Água sem gás\t\t-R$ 2.00\n";
		std::cout<<std::endl; 
		std::cout<<"Escolha uma opção (1-4):";
		std::cin>>produto;
	}while(produto > 4 || produto < 1);
	
	switch (produto)
	{
		case 1:
			std::cout<<"Você escolheu: Coca-Cola (R$ 5.00)\n";
			break;
		case 2:
			std::cout<<"Você escolheu: Guaraná (R$ 4.50)\n";
			break;
		case 3:
			std::cout<<"Você escolheu: Suco de uva (R$ 6.00)\n";
			break;
		case 4:
			std::cout<<"Você escolheu: Água sem gás (R$ 2.00)\n";
			break;
	}
	std::cout<<std::endl<<std::endl;
	
	do
	{
		std::cout<<"- - - FORMA DE PAGAMENTO - - -\n";
		std::cout<<"1. Cartão\n2 Pix\n";
		std::cout<<"Escolha uma opção (1 ou 2): ";
		std::cin>>pagamento;
		if(pagamento > 2 || pagamento < 1)
		{
			std::cout<<"Opção invalida! Este sistema aceita apenas Cartão ou Pix.\n";
		}
		
	}while(pagamento > 2 || pagamento < 1);
	
	
	switch(pagamento)
	{
		case 1:
			std::cout<<"[CARTÃO selecionado]"<<std::endl;
			break;
		case 2:
			std::cout<<"[PIX selecionado]"<<std::endl;
			break;
	}
	
	std::cout<<"Digite sua senha de 4 números inteiros: ";
	std::cin>>teste;
	
	if(teste != senha)
	{
		do
		{
			std::cout<<"Senha inválida! Digite exatamente 4 números inteiros: ";
			std::cin>>teste;
		}while(teste != senha);
	}
	
	std::cout<<"Senha aceita. Processando pagamento..."<<std::endl;
	
	if(pagamento == 1)
	{
		std::cout<<"Pagamento no Cartão confirmado!";
	}
		else if(pagamento == 2)
		{
			std::cout<<"Pagamento no Pix confirmado!";
		}

	
	return 0;
}
