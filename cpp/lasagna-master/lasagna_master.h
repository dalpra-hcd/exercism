#pragma once

#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
  int noodles;
  double sauce;
};

int preparationTime(const std::vector<std::string> &layers,
                    int time_per_layer = 2);

amount quantities(const std::vector<std::string> &layers);

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::vector<std::string> &friend_list);

std::vector<double> scaleRecipe(const std::vector<double> &recipe,
                                int portions);

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::string &secret_ingredient);

} // namespace lasagna_master
