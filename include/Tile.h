#ifndef INCLUDE_INCLUDE_TILE_H_
#define INCLUDE_INCLUDE_TILE_H_

#include <string>

struct Tile {
  std::string id;

  bool operator==(const Tile &other) const { return id == other.id; }

  bool operator<(const Tile &other) const { return id < other.id; }
};

#endif // INCLUDE_INCLUDE_TILE_H_
