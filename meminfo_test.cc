#include "meminfo.h"
#include <iostream>

int main() {
  const size_t mem_total = MemInfo::get_mem_total();
  const size_t mem_available = MemInfo::get_mem_available();
  std::cout << "Mem Total: " << mem_total << " KB" << std::endl;
  std::cout << "Mem Available: " << mem_available << " KB" << std::endl;
  return 0;
}
