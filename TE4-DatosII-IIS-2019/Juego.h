//
// Created by andreyzartty on 05/09/19.
//

#ifndef TE4_DATOSII_IIS_2019_JUEGO_H
#define TE4_DATOSII_IIS_2019_JUEGO_H


#include "Gladiador.h"
#include "Cuadricula.h"
#include "AStar.h"


/**
 * Header de Juego
 *
 * @since 30/04/17
 */

/**
 * Constructor de Juego;;
 */

class Juego {
private:

    Cuadricula* cuadricula;
    AStar* aStarAlgorithm;
    Node* nodoInicio;
    Node* nodoFinal;
    Gladiador* gladiador1;


public:

    ///Constructor
    Juego();

    ///Metodos
    void doAStar();
    void generateTowers(int ctt);

    ///Getters & Setters
    Cuadricula* getCuadricula();
    void setCuadricula(Cuadricula* _cuadricula);
    AStar* getAStarAlgorithm();
    void setAStarAlgorithm(AStar* _aStarAlgorithm);
    Gladiador* getGladiador1();
    void setGladiador1(Gladiador* _gladiador1);

};



#endif //TE4_DATOSII_IIS_2019_JUEGO_H
