#include <iostream>
#include <fstream>
#include <nivy_language/lexer/Lexer.h>
#include <nivy_language/lexer/Token.h>

std::string read_file(std::string path) {
  std::ifstream file_reader;
  file_reader.open(path);
  std::string buffer;
  char ch;
  while(file_reader.get(ch)) {
    buffer.push_back(ch);
  }

  return std::move(buffer);
}

int main(int argc, const char *argv[]) {
  // omega::Lexer lexer;

  if(argc >= 2) {
    std::string buffer = read_file(argv[1]);
    nivy_language::Lexer lex(buffer);
    std::expected<std::vector<nivy_language::Token>, std::string_view> vec = lex.tokenize();
    if(!vec.has_value()) {
      std::cerr << vec.error() << '\n';
      return 1;
    }
    for(auto tok: vec.value()) {
      std::cout << tok << '\n';
    }

  }
  
  
  return 0;
}
