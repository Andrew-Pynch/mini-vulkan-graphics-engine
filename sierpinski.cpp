#include "sierpinski.hpp"
#include "lve_model.hpp"

#include <vector>

namespace lve {

void Sierpinski::getSierpinskiVertices(std::vector<LveModel::Vertex> &vertices,
                                       int depth, glm::vec2 left,
                                       glm::vec2 right, glm::vec2 top) {
     if (depth <= 0) {
          vertices.push_back({top});
          vertices.push_back({right});
          vertices.push_back({left});
     } else {
          auto leftTop = 0.5f * (left + top);
          auto rightTop = 0.5f * (right + top);
          auto leftRight = 0.5f * (left + right);
          getSierpinskiVertices(vertices, depth - 1, left, leftRight, leftTop);
          getSierpinskiVertices(vertices, depth - 1, leftRight, right,
                                rightTop);
          getSierpinskiVertices(vertices, depth - 1, leftTop, rightTop, top);
     }
}
} // namespace lve
