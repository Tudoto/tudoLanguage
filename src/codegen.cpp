#include "codegen.h"
#include "ast.h"
#include <iostream>
#include <fstream>

void codegen::dumpBytecode()
{
    for (int i = 0; i < bytecode.size(); i++)
    {
        std::cout << bytecode[i] << std::endl;
    }
}

void codegen::addOp(unsigned char opType, unsigned char value)
{
    bytecode.push_back(opType);
    if (opType > HAVE_ARGUMENT)
    {
        bytecode.push_back(value);
    }
}

void codegen::visit(node *n)
{
    n->accept(this);
}

void codegen::visit(opNode *n)
{
    if (n == nullptr)
    {
        printf("got a wrong node\n");
        return;
    }
    visit(n->getLeftNode());
    visit(n->getRightNode());
    switch (n->getOpTypes())
    {
    case OP_PLUS:
        addOp(BINARY_ADD);
        break;
    case OP_MINUS:
        addOp(BINARY_SUB);
        break;
    case OP_MULT:
        addOp(BINARY_MUL);
        break;
    case OP_DIV:
        addOp(BINARY_DIV);
        break;
    default:
        printf("UNKONWN OP\n");
    }
}

void codegen::visit(intNode *n)
{
    addOp(LOAD_CONST, n->getValue());
}

template <typename T>
int codegen::saveConstValue(T t, std::ofstream &file)
{
    file.write(reinterpret_cast<const char *>(&t), sizeof(T));
    return 0;
}

int codegen::writeCodeToFile(std::string &filename)
{
    std::ofstream file = std::ofstream(filename, std::ios::out | std::ios::binary);
    int magic_number = 0xa0df303;
    if (!file.good())
    {
        std::cerr << "stream buf state is bad" << std::endl;
        return -1;
    }
    file.write(reinterpret_cast<const char *>(&magic_number), 4);

    file << 's';
    saveConstValue((int)bytecode.size(), file);
    for (auto it = bytecode.begin(); it != bytecode.end(); it++)
    {
        std::cout << *it << std::endl;
        file << *it;
    }
    file.close();
    return 0;
}