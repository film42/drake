#include <iostream>
#include "reactor.hpp"

void reactor_loop_init() {
  Reactor::Reactor reactor;
  reactor.run();
}

void print_arguments() {

  std::cout << "USAGE: drake" << std::endl;
  std::cout << "ARG: -d --depth = Max number of follow links for smaller examples" << std::endl;
  std::cout << "ARG: -s --seed-base-url = Spider origin" << std::endl;
}

int main(int argc, char ** argv) {
  print_arguments();


  std::cout << "Starting Reactor" << std::endl;

  reactor_loop_init();

  return 0;
}
