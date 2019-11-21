//
// Created by andreyzartty on 05/09/19.
//

#include "Juego.h"

/**
 * Representa el Juego
 *
 * @since 30/04/19
 */


/**
 * Constructor de Juego
 */
Juego::Juego() {

    cuadricula = new Cuadricula();
    cuadricula->addPosibleTowerIdList();
    nodoInicio = cuadricula->getNodoInicial();
    nodoFinal = cuadricula->getNodoFinal();
    aStarAlgorithm = new AStar(cuadricula);


    gladiador1 = poblacion1->getMejor();

    gladiador1->setCuadricula(cuadricula);
}


///Metodos


/**
 * Inicia el algoritmo A*.
 */
void Juego::doAStar() {

    ///Repone sus booleans
    aStarAlgorithm->setInitializedStartGoal(false);
    aStarAlgorithm->setFoundGoal(false);

    ///Busca el camino
    aStarAlgorithm->findPath(nodoInicio, nodoFinal);

    ///Se rota el path
    aStarAlgorithm->rotatePath();
    ///Ingresa el path a su respectivo gladiador
    gladiador1->setPathToGoal(aStarAlgorithm->getPathToGoal());
    ///Se generara una matriz con los hits que le hacen las torres y sus respectivos tipos
    gladiador1->generateHits();

}


/**
 * Inicia ambos algoritmos y previamente establece todas sus condiciones de inicio
 */
void Juego::generateTowers(int ctt) {

    cout << "Generating Towers\n" << endl;

    ///Se crea un contador
    int c = 0;

    ///Cantidad de Torres
    int ct = ctt;

    while (c < ct) {

        ///Genera las Torres
        int evaluatingTower = cuadricula->newTower();

        ///Se evalua si hay mas posibilidades para colocar torres
        if (evaluatingTower == -1) {
            cout << "No se pueden asignar mas torres" << endl;
            c=ct;
        }
        else {

            ///Imprime solo las torres
            cuadricula->printTorres();

            for (int i = 0 ; i < cuadricula->getSize() ; i++) {
                for (int j = 0 ; j < cuadricula->getSize() ; j++) {

                    int id = ((i) * (cuadricula->getSize()) + (j));

                    cuadricula->getNode(id)->setInAStarPath(false);

                }

            }

            ///Hace el algortimo A*
            doAStar();
            aStarAlgorithm->showPath();


            ///Verificacion de si el algortimo A* ha sido completado
            if (aStarAlgorithm->isFoundGoal()) {
                cout << "A* Completed" << endl;
            } else {
                ///Rechaza la torre evaluada
                cout << "A* Failed" << endl;
                cout << "La torre de id "<< evaluatingTower << " bloquea el camino" << endl;
                cuadricula->addToVerifiedNot(evaluatingTower);
                cuadricula->deleteTower(evaluatingTower);
            }

            ///Verificacion de si el algortimo Backtracking ha sido completado

        }

    }

    cuadricula->resetVerifiedNot();

    ///Imprime los caminos
    cuadricula->printTorres();

    ///IMPRIMIR VECTOR DE TORRES
    cout << "Tower Id's: ";
    for (int i = 0; i < cuadricula->getTowerIdList().size(); i++) {

        if (i == 0) {
            cout << "[" << cuadricula->getTowerIdList()[i] << ", ";
        } else if (i == cuadricula->getTowerIdList().size() - 1) {
            cout << cuadricula->getTowerIdList()[i] << "]\n" << endl;
        } else {
            cout << cuadricula->getTowerIdList()[i] << ", ";
        }

    }

    ///IMPRIMIR VECTOR DE POSIBLES TORRES

    cout << "PosibleTower Id's: ";
    for (int i = 0; i < cuadricula->getPosibleTowerIdList().size(); i++) {

        if (i == 0) {
            cout << "[" << cuadricula->getPosibleTowerIdList()[i] << ", ";
        } else if (i == cuadricula->getPosibleTowerIdList().size() - 1) {
            cout << cuadricula->getPosibleTowerIdList()[i] << "]\n" << endl;
        } else {
            cout << cuadricula->getPosibleTowerIdList()[i] << ", ";
        }

    }

}


///Getters & Setters


/**
 * Getter de Cuadricula de Juego.
 * @return Cuadricula
 */
Cuadricula* Juego::getCuadricula() {
    return cuadricula;
}

/**
 * Setter de Cuadricula de Juego.
 * @param _cuadricula
 */
void Juego::setCuadricula(Cuadricula* _cuadricula) {
    cuadricula = _cuadricula;
}

/**
 * Getter de aStarAlgorithm de Juego.
 * @return A*
 */
AStar* Juego::getAStarAlgorithm(){
    return aStarAlgorithm;
}

/**
 * Setter de aStarAlgorithm de Juego.
 * @param _aStarAlgorithm
 */
void Juego::setAStarAlgorithm(AStar* _aStarAlgorithm) {
    aStarAlgorithm = _aStarAlgorithm;
}


/**
 * Getter del Gladiador1 de Juego.
 * @return _gladiador1
 */
Gladiador* Juego::getGladiador1() {
    return gladiador1;
}

/**
 * Setter del Gladiador1 de Juego.
 * @param _gladiador1
 */
void Juego::setGladiador1(Gladiador* _gladiador1) {
    gladiador1 = _gladiador1;
}
