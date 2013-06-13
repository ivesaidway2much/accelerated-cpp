#ifndef GUARD_Rotation
#define GUARD_Rotation

// `Rotations.h' header file
#include <iostream>
#include <string>
#include <vector>

struct Rotation {
  std::string name;
  std::size_t endpos, startpos, rotationpos;
  //std::vector<int> homework;
};

bool compare(const Rotation&, const Rotation&);

std::vector<Rotation> create_rotations(const std::string&);

std::string rotation_string();
#endif
 
