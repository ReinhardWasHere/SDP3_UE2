// $Workfile: Main.cpp $
// $Revision: 3 $
// $Author: Pkulczyc $
// $Date: 24.03.00 22:20 $
//
// Description: ---
// Remarks:     ---


// --------------------
// Project Header Files
// --------------------

#include <iostream>
#include <fstream>
#include "scanner.h"


// --------------------
// Function Definitions
// --------------------

int main () {

// Function
// --------
	std::ifstream file("Input.txt");
	scanner scan(file);

   while (!scan.symbol_is_eof ()) {
             if (scan.symbol_is_assign    ()) { std::cout << "Assign\n";
      } else if (scan.symbol_is_colon     ()) { std::cout << "Colon\n";
      } else if (scan.symbol_is_comma     ()) { std::cout << "Comma\n";
      } else if (scan.symbol_is_division  ()) { std::cout << "Division\n";
      } else if (scan.symbol_is_lpar      ()) { std::cout << "LPar\n";
      } else if (scan.symbol_is_minus     ()) { std::cout << "Minus\n";
      } else if (scan.symbol_is_multiply  ()) { std::cout << "Multiply\n";
      } else if (scan.symbol_is_period    ()) { std::cout << "Period\n";
      } else if (scan.symbol_is_plus      ()) { std::cout << "Plus\n";
      } else if (scan.symbol_is_power     ()) { std::cout << "Power\n";
      } else if (scan.symbol_is_rpar      ()) { std::cout << "RPar\n";
      } else if (scan.symbol_is_semicolon ()) { std::cout << "Semicolon\n";
      } else if (scan.symbol_is_identifier ()) {
         std::string const v = scan; 
         std::cout << "Identifier(" << v << ")" << std::endl;

      } else if (scan.symbol_is_integer ()) {
         int const v = scan; 
         std::cout << "Integer(" << v << ")" << std::endl;

      } else if (scan.symbol_is_real ()) {
         double const v = scan; 
         std::cout << "Real(" << v << ")" << std::endl;

      } else if (scan.symbol_is_string ()) {
         std::string const v = scan; 
         std::cout << "String(" << v << ")" << std::endl;
      }

      scan.next_symbol();
   }

   std::cout << std::endl; 
   return 0;
}

