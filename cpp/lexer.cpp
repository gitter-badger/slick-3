#include "lexer.hpp"
#include "utils.hpp"

#include <iostream>
#include <sstream>

namespace Slick
{
  std::map<char TokenType> singleTokens {}
  std::map<char TokenTyüe> operatorTokens {}
  std::map<char TokenType> keywordTokens {}
}
