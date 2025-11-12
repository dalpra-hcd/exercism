#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(const std::vector<std::string> &layers,
                    int time_per_layer) {
  return time_per_layer * layers.size();
}

amount quantities(const std::vector<std::string> &layers) {
  amount total{};
  for (const auto &layer : layers) {
    if (layer == "noodles") {
      total.noodles += 50;
    } else if (layer == "sauce") {
      total.sauce += 0.2;
    }
  }
  return total;
}

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::vector<std::string> &friend_list) {
  my_list.back() = friend_list.back();
}

std::vector<double> scaleRecipe(const std::vector<double> &recipe,
                                int portions) {
  std::vector<double> scaled_recipe;
  double factor = static_cast<double>(portions) / 2.0;
  for (const auto &ingredient : recipe) {
    scaled_recipe.push_back(ingredient * factor);
  }
  return scaled_recipe;
}

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::string &secret_ingredient) {
  my_list.back() = secret_ingredient;
}

} // namespace lasagna_master
