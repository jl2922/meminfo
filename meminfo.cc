#include "meminfo.h"

#include <fstream>

size_t MemInfo::get_mem_total() { return get_from_meminfo("MemTotal"); }

size_t MemInfo::get_mem_available() { return get_from_meminfo("MemAvailable"); }

size_t MemInfo::get_from_meminfo(const std::string& key) {
  std::ifstream meminfo("/proc/meminfo");
  std::string token;
  size_t value;
  while (meminfo >> token) {
    if (token == key + ":") {
      if (meminfo >> value) {
        return value;
      } else {
        return 0;
      }
    }
  }
  return 0;
}
