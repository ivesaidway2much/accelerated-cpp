#include "Rotation.h"

using std::iostream;
using std::vector;
//using std::endl;

bool Rotation::rot_compare(const Rotation& foo, const Rotation& bar)
{//compare two rotations
  return foo.rotation_word() < bar.rotation_word();
}

std::string Rotation::rotation_word(/*const Rotation& foo*/) const
{//returns the word that the line is being rotated around
  std::string ret_string="";
  std::string rot_string=this->name;
  std::size_t nxt_spc=rot_string.find_first_of(" ", this->rotationpos+1);
  //std::cout<< "Next Space is "<<nxt_spc<< "  Rotation pos is "<< this->rotationpos<< std::endl;
  if (nxt_spc > rot_string.size())
    {//checking if this is the end of one line
    ret_string=rot_string.substr(this->rotationpos, this->name.size() - this->rotationpos);
    //std::cout<<"return1 "<<ret_string<<std::endl;
  }else
  {
    ret_string=rot_string.substr(this->rotationpos, nxt_spc - this->rotationpos);
    //std::cout<<"return2 "<<ret_string<<std::endl;
  }
  return ret_string;
}

std::vector<Rotation> Rotation::create_rotations(const std::string& rot_string)
{//return a vector of rotations based on the string
  
  std::vector<Rotation> rotations;
  Rotation temp_rotation;
  std::size_t str_sz=rot_string.size();
  std::size_t found=rot_string.find_first_of(" ");
  temp_rotation.startpos=0;
  temp_rotation.rotationpos=0;
  temp_rotation.endpos=str_sz;
  
  temp_rotation.name=rot_string;
  rotations.push_back(temp_rotation);
  std::string rot_word="";

  while (found < str_sz)
  {// create a rotation for each word in the string, and then add that rotation to the rotations vector.
    //loop invariant all spaces prior to the string position = size_t found have been located
    
    //std::cout<< rot_string.substr(found, str_sz - found)<<" "<<found<<std::endl;    
    temp_rotation.rotationpos=found;
    //std::cout<<temp_rotation.rotation_string(temp_rotation)<<std::endl;
    //rot_word=temp_rotation.rotation_word();
    //std::cout<<"Here is the rotation word: "<<rot_word<<std::endl;
    rotations.push_back(temp_rotation);
    
    found=rot_string.find_first_of(" ", found+1);
  }
  if (str_sz != 0)
  {//add the final i.e the full string
    temp_rotation.rotationpos=temp_rotation.endpos;
    rotations.push_back(temp_rotation);
    //std::cout<<temp_rotation.rotation_string(temp_rotation)<<std::endl;
    
  }
  for (vector<Rotation>::const_iterator citer = rotations.begin(); citer != rotations.end(); ++citer)
  {
    std::cout<<"String: " << (*citer).rotation_word(/**citer*/) << " Rotaion position: "<< (*citer).rotationpos<< std::endl;
  }
  std::sort(rotations.begin(), rotations.end(), rot_compare);
  for (vector<Rotation>::const_iterator citer = rotations.begin(); citer != rotations.end(); ++citer)
  {
    std::cout<<"Sort: " << (*citer).rotation_word(/**citer*/) << " Rotaion position: "<< (*citer).rotationpos<< std::endl;
  }
  return rotations;    
  
}

std::string Rotation::rotation_string(const Rotation& foo) const
{//print out the rotation
  //std::cout<<foo.name.size()<<" and "<<foo.rotationpos<<std::endl;

  std::string return_string = foo.name.substr(0, foo.rotationpos) + "\t" + foo.name.substr(foo.rotationpos, foo.name.size() - foo.rotationpos);
  return return_string;
}
