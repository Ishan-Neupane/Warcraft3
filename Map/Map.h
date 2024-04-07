#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>

#include "../Tools/Vec2.h"
#include "Graph.h"
#include "Terrain.h"

class Map {
 public:
  Map();

  void TurnMatrixToGraph();
  std::vector<Node *> GetClosestDestNode(Vec2 &coord, Vec2 &dest);
  void UpdateTerrain(Living &);
  Terrain &GetTerrainAtCoordinate(Vec2);
  std::vector<Living *> GetObjectsAtTerrain(Vec2);

 public:
  std::vector<std::vector<Terrain>> terrain;

 private:
  std::vector<Node *> GetAllNodes();
  Graph graph;
};

#endif
