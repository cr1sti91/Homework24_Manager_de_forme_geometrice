#include "Forma.h"
#include <vector>
#include <memory>


static void afisareForme(const std::vector<std::shared_ptr<Forma>>& forme)
{
	for (std::shared_ptr<Forma> ptr : forme)
	{
		ptr->afiseaza();
		std::cout << std::endl;
	}
}

int main()
{
	size_t count{ 0 }; 
	std::vector<std::shared_ptr<Forma>> forme; 

	std::cout << "Cate forme doriti sa aveti: "; 
	std::cin >> count; 
	std::cin.ignore(); 

	for (size_t i{}; i < count; i++)
	{
		system("CLS"); 

		std::cout << "Ce forma doriti pentru pozitia [" << i << "]: "; 
		std::string raspuns; 
		std::getline(std::cin, raspuns); 

		if (raspuns == "cerc")
		{
			std::string descriere; 
			std::cout << "Introdu descrierea cercului: "; 
			std::getline(std::cin, descriere); 

			double raza; 
			std::cout << "Introdu raza cercului: "; 
			std::cin >> raza; 
			std::cin.ignore(); 

			forme.push_back(std::make_shared<Cerc>(descriere, raza)); 
		}
		else if (raspuns == "dreptunghi")
		{
			std::string descriere;
			std::cout << "Introdu descrierea dreptunghiului: ";
			std::getline(std::cin, descriere);

			double latime;
			std::cout << "Introdu latimea dreptunghiului: ";
			std::cin >> latime;
			double lungime;
			std::cout << "Introdu lungimea dreptunghiului: ";
			std::cin >> lungime;

			forme.push_back(std::make_shared<Dreptunghi>(descriere, latime, lungime));
		} 
		else if (raspuns == "patrat")
		{
			std::string descriere;
			std::cout << "Introdu descrierea patratului: ";
			std::getline(std::cin, descriere);

			double latura;
			std::cout << "Introdu latura patratului: ";
			std::cin >> latura;
			std::cin.ignore();

			forme.push_back(std::make_shared<Patrat>(descriere, latura));
		}
	}

	std::cout << std::endl;
	afisareForme(forme); 
}