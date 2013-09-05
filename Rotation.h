#ifndef GUARD_Rotation
#define GUARD_Rotation

// `Rotations.h' header file
#include <iostream>
#include <string>
#include <vector>

struct Rotation {
  std::string name;
  std::size_t endpos, startpos, rotationpos;
  std::vector<Rotation> create_rotations(const std::string&);
  bool compare(const Rotation&, const Rotation&);
  std::string rotation_word(/*const Rotation&*/) const;
  std::string rotation_string(const Rotation&);
  
};

#endif
