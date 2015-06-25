#include "reactor/reactor.hpp"

namespace Reactor {
  void Reactor::run() {
    while(true) {
      m_matrix.reset();
      calculate_pagerank();
    }
  }

  void Reactor::calculate_pagerank() {
    m_matrix.pagerank();
  }
}
