#include <iostream>
#include <stdio.h>
#include "paser.h"
#include "codegen.h"
int main()
{

     paser *pas = new paser();
     pas->splitTokens();
     //pas->printToken();
     node* b = pas->expression();

    codegen * visitor = new codegen();
    visitor->visit(b);
    visitor -> dumpBytecode();
    std::string filename="test_token.txtc";
    visitor -> writeCodeToFile(filename);
    delete pas;

    // printTokens();
    return 0;
}