#ifndef JL2922_MEMINFO_H
#define JL2922_MEMINFO_H

#include <cstddef>
#include <string>

class MemInfo {
 public:
  static size_t get_mem_total();

  static size_t get_mem_available();

 private:
  static size_t get_from_meminfo(const std::string& key);
};

#endif
