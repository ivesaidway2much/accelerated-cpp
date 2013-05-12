#ifndef GUARD_Rotation
#define GUARD_Rotation

// `Rotations.h' header file
#include <iostream>
#include <string>
#include <vector>

struct Rotation {
  std::string name;
  int endpos, startpos, rotationpos;
  //std::vector<int> homework;
};

bool compare(const Rotation&, const Rotation&);

std::string rotation_string();
#endif
 
