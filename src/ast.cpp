#include"ast.h"
void opNode::accept(visitor* v) {
    v->visit(this);
}

void intNode::accept(visitor* v) {
   v->visit(this);
}