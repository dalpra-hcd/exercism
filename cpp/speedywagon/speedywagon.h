#pragma once

#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
  int activity{};
  std::string location{};
  std::vector<int> data{};
};

int uv_light_heuristic(std::vector<int> *data_array);

auto connection_check(const pillar_men_sensor *sensor) -> bool;
auto activity_counter(const pillar_men_sensor sensor_array[], int size) -> int;
auto alarm_control(const pillar_men_sensor *sensor) -> bool;
auto uv_alarm(const pillar_men_sensor *sensor) -> bool;

} // namespace speedywagon
