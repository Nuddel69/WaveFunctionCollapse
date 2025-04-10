#ifndef INCLUDE_INCLUDE_VEC2_H_
#define INCLUDE_INCLUDE_VEC2_H_

struct Vec2 {
  int y, x;

  bool operator==(const Vec2 &other) const {
    return x == other.x && y == other.y;
  }

  bool operator<(const Vec2 &other) const {
    return (y < other.y) || ((y == other.y) && (x < other.x));
  }

  Vec2 operator+(const Vec2 &other) const { return {y + other.y, x + other.x}; }
};

#endif // INCLUDE_INCLUDE_VEC2_H_
