#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"

const Literal* IdentNode::eval() const { 
  const Literal* val = SymbolTable::getInstance().getValue(ident);
  return val;
}

const Literal* CallNode::eval() const{
  TableManager& tm = TableManager::getInstance();
  if(!tm.checkFunc(ident)){
    std::cout << "function" << ident << "Not Found" << std::endl;
    std::exception up = std::exception();
    throw up;
  }

  tm.pushScope();
  tm.getSuite(ident)->eval();
  tm.popScope();

  return nullptr;
}


FuncNode::FuncNode(const std::string id, Node* stmts) :
  Node(),ident(id),suite(stmts) {
    TableManager::getInstance().insert(id,suite);
  }

const Literal* FuncNode::eval() const {
  std::cout << "Never Happen" << std::endl;
  return nullptr;
}

const Literal* SuiteNode::eval() const {
  for(const Node* n : stmts){
    if (n) n->eval();
  }
  return nullptr;
}



AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //std::cout<<" right eval in the node is "<<std::endl;
  //right->eval()->print();
  SymbolTable::getInstance().setValue(n, res);
  //std::cout<<"value has been assigned";

 
}


const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();
  //std::cout<<" right eval in eval() "<<std::endl;
  //right->eval()->print();
  //const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //SymbolTable::getInstance().setValue(n, res);
  return res;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //return (*x+*y);
  return (*x).operator+(*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}



const Literal* PctBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}


const Literal* DbStarBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y));
}


const Literal* DbSlashBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x).DbSlash(*y);
}



/*const Literal* MiusUnaryNode::eval() const { 
  if (!node) {
    throw "error";
  }
  const Literal* x = node->eval();
  return x->MiusOp();
}
*/
