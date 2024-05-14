#include "Forma.h"

//Implementari pentru metode din clasa Forma
Forma::Forma(std::string_view descriere) : descriere(descriere)
{
}


double Forma::arie() const
{
    return 0.0;
}

double Forma::perimetru() const
{
    return 0.0;
}

void Forma::afiseaza() const
{ 
    std::cout << "Perimetrul formei: " << perimetru() << std::endl
              << "Aria formei: " << arie() << std::endl
              << "Descriere: " << get_description() << std::endl;
}

const std::string& Forma::get_description() const
{
    return this->descriere; 
}


//Implementari pentru metode din clasa Cerc
Cerc::Cerc(std::string_view descriere, const double& raza) : Forma(descriere), raza(raza)
{
}


double Cerc::arie() const
{
    return PI * raza * raza; 
}

double Cerc::perimetru() const
{
    return 2 * PI * raza;
}

void Cerc::afiseaza() const
{
    std::cout << "Perimetrul cercului: " << perimetru() << std::endl
              << "Aria cercului: " << arie() << std::endl
              << "Descriere: " << get_description() << std::endl;
}

//Implementari pentru metode din clasa Dreptunghi
Dreptunghi::Dreptunghi(std::string_view descriere, const double& latime, const double& lungime)
    : Forma(descriere), latime(latime), lungime(lungime)
{
}

double Dreptunghi::arie() const
{
    return latime * lungime;
}

double Dreptunghi::perimetru() const
{
    return 2 * (latime + lungime);
}

void Dreptunghi::afiseaza() const
{
    std::cout << "Perimetrul dreptunghiului: " << perimetru() << std::endl
        << "Aria dreptunghiului: " << arie() << std::endl
        << "Descriere: " << get_description() << std::endl; 
}

//Implementari pentru metode din clasa Patrat ce mosteneste din Dreptunghi
Patrat::Patrat(std::string_view descriere, const double& latura)
    : Dreptunghi(descriere, latura, latura)
{
}

void Patrat::afiseaza() const
{
    std::cout << "Perimetrul patratului: " << perimetru() << std::endl
        << "Aria patratului: " << arie() << std::endl
        << "Descriere: " << get_description() << std::endl;
}



//Implementari pentru metode din clasa Patrat ce mosteneste din Forma
//Patrat::Patrat(std::string_view descriere, const double& latura)
//    : Forma(descriere), latura(latura)
//{
//}
//
//Patrat::~Patrat()
//{
//}
//
//double Patrat::arie() const
//{
//    return pow(latura, 2);
//}
//
//double Patrat::perimetru() const
//{
//    return latura * 4;
//}
//
//void Patrat::afiseaza() const
//{
//    std::cout << "Perimetrul patratului: " << perimetru() << std::endl
//        << "Aria patratului: " << arie() << std::endl
//        << "Descriere: " << get_description() << std::endl;
//}

