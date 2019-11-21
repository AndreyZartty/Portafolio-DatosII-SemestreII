//
// Created by andreyzartty on 05/09/19.
//

#ifndef TE4_DATOSII_IIS_2019_CUADRICULA_H
#define TE4_DATOSII_IIS_2019_CUADRICULA_H

#include "Node.h"
#include <iostream>
#include <vector>
#include <algorithm>

///Se define el tamaño de la cuadricula
#define ZONE_SIZE 10

using namespace std;


/**
 * Header de Cuadricula
 *
 * @since 30/04/19
 */


class Cuadricula {

private:

    int size = ZONE_SIZE;
    Node* matriz [ZONE_SIZE][ZONE_SIZE];
    Node* nodoInicial;
    Node* nodoFinal;
    vector<int> verfifiedNotTowersIdList;
    vector<int> towerIdList;
    vector<int> posibleTowerIdList;


public:

    ///Constructor
    Cuadricula();

    ///Metodos
    void buildZone(int n);
    void generateFirstTowers();
    void calculateHeuristic();
    Node* getNode(int i, int j);
    Node* getNode(int id);
    void print();
    void printTorres();
    void addPosibleTowerIdList();
    void addToVerifiedNot(int evaluatingTower);
    void deleteTower(int evaluatingTower);
    void resetVerifiedNot();
    int newTower();

    ///Getters & Setters
    int getSize();
    Node* getNodoInicial();
    Node* getNodoFinal();
    vector<int> getTowerIdList();
    vector<int> getPosibleTowerIdList();
    vector<int> getVerfifiedNotTowersIdList();

};



#endif //TE4_DATOSII_IIS_2019_CUADRICULA_H
