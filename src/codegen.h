#include "visitor.h"
#include <vector>
#ifndef CODEGEN_H
#define CODEGEN_H

#define EMPTY_OP      00

#define BINARY_MUL      20
#define BINARY_DIV      21
#define BINARY_ADD      23
#define BINARY_SUB      24

#define HAVE_ARGUMENT 90

#define LOAD_CONST  100


class codegen : public visitor {
    public:
        void addOp(unsigned char opType, unsigned char value= 0);
        void dumpBytecode();
       // int saveCodeToFile(ofstream& file);
        int writeCodeToFile(std::string& filename);
        template<typename T>
        int saveConstValue(T t, std::ofstream &file);
        void visit(node* n);
        virtual void visit(intNode* n);
        virtual void visit(opNode* n);
    private:
        std::vector<unsigned char> bytecode;
    
};
#endif