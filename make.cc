#include <iostream>

void printIf(unsigned long int intlimit) {
  
  std::cout << "\tif (number == 0) {\n\t\tstd::cout << \"Even!\";\n\t}\n";

  for (unsigned long int i = 1; i <= intlimit; i = i + 2) {

      std::cout << "\telse if (number == " << i << ") {\n\t\tstd::cout << \"Odd!\";\n\t}\n";
      std::cout << "\telse if (number == " << i + 1 << ") {\n\t\tstd::cout << \"Even!\";\n\t}\n";

  }

  std::cout << "\telse {\n\t\tstd::cout << \"Invalid!\";\n\t\treturn 1;\n\t}";

} 

int main() {

  unsigned long int intlimit {30000};

  std::cout << "#include <iostream>\n\nint main() {\n\n\tunsigned long int number;\n\n\tstd::cout << \"Enter Number: \";\n\tstd::cin >> number;\n\tstd::cout << '\\n';\n\n";
  
  printIf(intlimit);

  std::cout << "\n\n\treturn 0;\n\n}";

}
