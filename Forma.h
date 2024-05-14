#pragma once
#include <string>
#include <iostream>

const double PI = 3.14159265359; 


class Forma
{
private: 
	std::string descriere; 

protected: 
	const std::string& get_description() const;

public: 
	Forma(std::string_view descriere);
	virtual ~Forma() = default; 

	virtual double arie() const; 
	virtual double perimetru() const; 
	virtual void afiseaza() const; 
};


class Cerc : public Forma //Avem protected inheritance fiindca metodele din clasa de baza nu vor fi necesare
{							 //inafara ei sau inafara claselor derivate
private: 
	double raza; 
public: 
	Cerc(std::string_view descriere, const double& raza); 
	~Cerc() = default; 

	double arie() const override;
	double perimetru() const override;
	void afiseaza() const override;
};

class Dreptunghi : public Forma
{
private: 
	double latime; 
	double lungime; 
public: 
	Dreptunghi(std::string_view descriere, const double& latime, const double& lungime); 
	~Dreptunghi() = default; 

	double arie() const override;
	double perimetru() const override;
	virtual void afiseaza() const override;
};

class Patrat : public Dreptunghi
{ 
public: 
	Patrat(std::string_view descriere, const double& latura); 
	~Patrat() = default; 

	void afiseaza() const override; 
};


//class Patrat : public Forma
//{
//private: 
//	double latura; 
//public: 
//	Patrat(std::string_view descriere, const double& latura); 
//	~Patrat(); 
//
//	double arie() const override;
//	double perimetru() const override;
//	void afiseaza() const override;
//};

