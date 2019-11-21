//
// Created by andreyzartty on 05/09/19.
//

#ifndef TE4_DATOSII_IIS_2019_NODE_H
#define TE4_DATOSII_IIS_2019_NODE_H


class Node {

private:

    int fila;
    int columna;
    int id;
    Node* parent;
    float gCost;
    float hCost;
    float fCost;
    bool torre;
    bool inAStarPath;
    int zoneSize;
    int xCoord;
    int yCoord;


public:

    ///Constructores
    Node();
    Node(int _fila, int _columna, int _zoneSize);

    ///Métodos
    float ManhattanDistance(Node* endNode);
    float obtainF();

    ///Getters & Setters
    bool getTorre();
    void setTorre(bool _torre);
    int getFila();
    void setFila(int _fila);
    int getColumna();
    void setColumna(int _columna);
    int getId();
    void setId(int _id);
    Node* getParent();
    void setParent(Node* _parent);
    float getGCost();
    void setGCost(float _gCost);
    float getHCost();
    void setHCost(float _hCost);
    float getFCost();
    void setFCost(float _fCost);
    bool isInAStarPath();
    void setInAStarPath(bool _inAStarPath);
    int getZoneSize();
    void setZoneSize(int _zoneSize);
    int getXCoord();
    void setXCoord(int _xCoord);
    int getYCoord();
    void setYCoord(int _yCoord);

};


#endif //TE4_DATOSII_IIS_2019_NODE_H
