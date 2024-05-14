# Homework24_Manager_de_forme_geometrice


Tema cu polimorfism :     Tema 1: Manager de Forme Geometrice
Scop: Implementează un program în C++ care gestionează forme
geometrice diferite folosind polimorfismul.

Cerințe:

Creare Clase:
Creează o clasă abstractă Forma cu următoarele funcții virtuale: aria(), perimetrul(), și afiseaza().
Creează clase derivate: Cerc, Patrat, și Dreptunghi. Fiecare clasă derivată trebuie să implementeze metodele virtuale din Forma.
Implementarea Metodelor:
Cerc va avea un membru privat raza și constructor corespunzător.
Patrat va avea un membru privat latura și constructor corespunzător.
Dreptunghi va avea membri privați lungime și latime și constructor corespunzător.
Funcționalitate:
Funcția aria() va calcula și returna aria formei.
Funcția perimetrul() va calcula și returna perimetrul formei.
Funcția afiseaza() va afișa toate informațiile despre formă, inclusiv aria și perimetrul.
Testarea în Main:
Creează un vector de pointeri către Forma.
Adaugă instanțe ale Cerc, Patrat, și Dreptunghi în vector.
Iterează prin vector și apelează afiseaza() pentru fiecare formă.
