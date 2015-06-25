#ifndef REACTOR_REACTOR_HPP
#define REACTOR_REACTOR_HPP

#include "deps/pagerank/table.hpp"

namespace Reactor {

  class Reactor {
  public:
    Reactor() {}

    void run();
    void calculate_pagerank();

  private:
    PageRank::Table m_matrix;
  };

} // namespace Reactor

#endif /* REACTOR_REACTOR_HPP */
