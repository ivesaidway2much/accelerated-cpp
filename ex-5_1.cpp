#include <iostream>
#include <string>
#include "Rotation.h"

main ()
{
  std::string line_string="q"; 
  std::string full_string="";
  std::string rotations_string="";
  int new_string_start=0;
  int new_string_end=0;
  size_t line_size;
  size_t string_size=full_string.size();
  Rotation new_rotation;
  std::vector<Rotation> rotation_vector;
  std::vector<Rotation> temp_rotate_vec;
  while (line_string.find_first_not_of(" \t\n\v\f\r") != std::string::npos)
    {// read in a string and then create a vector of rotations
    std::cout<< "Please enter in a line of text: "<<std::endl;
    std::getline (std::cin, line_string);
    line_size= line_string.size();
    full_string = full_string + " " + line_string;
    std::cout<< full_string<<std::endl;
    temp_rotate_vec=new_rotation.create_rotations(line_string);
    rotation_vector.insert(rotation_vector.end(), temp_rotate_vec.begin(), temp_rotate_vec.end())
  }

  
  
} 
