#pragma once

#include "lve_model.hpp"

#include <vector>

namespace lve {
class Sierpinski {
   public:
     void getSierpinskiVertices(std::vector<LveModel::Vertex> &vertices,
                                int depth, glm::vec2 left, glm::vec2 right,
                                glm::vec2 top);
};
} // namespace lve
