#include <algorithm>

namespace targets {

class Alien {
private:
  int health_{3};

public:
  int x_coordinate{}, y_coordinate{};

  Alien(int x, int y) : x_coordinate(x), y_coordinate(y) {}

  int get_health() { return health_; }

  bool hit() {
    health_ = std::max(0, health_ - 1);
    return true;
  }

  bool is_alive() { return health_ > 0; }

  bool teleport(int new_x, int new_y) {
    x_coordinate = new_x;
    y_coordinate = new_y;
    return true;
  }

  bool collision_detection(Alien other) {
    return (x_coordinate == other.x_coordinate) &&
           (y_coordinate == other.y_coordinate);
  }
};

} // namespace targets
