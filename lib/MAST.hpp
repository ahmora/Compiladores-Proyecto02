/*
 * Definición de un AST en memoria (MAST) y la interfaz del patrón Visitor con NodeVisitor
 *
 * @author: Alejandro Hernández Mora
 * @author: Alan Mauricio García García
 */

#include "SymbolTable.hpp"
#include <list>
#include "AST.hpp"
#ifndef COMPUESTOVISITANTE_HPP
#define COMPUESTOVISITANTE_HPP

class NodeVisitor;
class INode;
class LeafNode;
class BinNode;


#endif

 using namespace std;

 class Visitor
 {
	
public:

	SymbolTable *symbolTable;
	
	Visitor(){
		symbolTable= new SymbolTable;
	}
	
	Visitor(SymbolTable *ts){
		symbolTable=ts;
	}
	
 	virtual void visit(ForNode*);
 	virtual void visit(WhileNode*);
 	virtual void visit(IfNode*);
 	virtual void visit(AssignNode*);
 	virtual void visit(StmtListNode*);
 	virtual void visit(SStmtListNode*);
 	virtual void visit(ExprNode*);
 	virtual void visit(PlusNode*);
 	virtual void visit(MinusNode*);
 	virtual void visit(DiviNode*);
 	virtual void visit(MultNode*);
 	virtual void visit(IdentNode*);
 	virtual void visit(IntNode*);
 	virtual void visit(FloatNode*);
 	virtual void visit(StrNode*);
 	virtual void visit(BoolNode*);
 };


 class ForNode : public INode
 {
 public:
 	ForNode() : INode() {};

 	virtual void accept(Visitor &v)
 	{
		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(it);
			
 	}
 };

 class WhileNode : public INode
 {
 public:
 	WhileNode() : INode() {};

 	virtual void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 };

 class IfNode : public INode
 {
 public:
 	IfNode() : INode() {};

 	virtual void accept(Visitor &v)
 	{
		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 };

 class AssignNode : public BinNode
 {
 public:
 	AssignNode() : BinNode() {};

 	virtual void accept(Visitor &v){
		IdentNode* c = dynamic_cast<IdentNode*>(children[0]);
		if(c != 0) {
			throw "Assignment operation is only for variables";
		}else{
			v.visit(children[1]);
			v.visit(children[0]);
			}
		}
 };

 class StmtListNode : public INode
 {
 public:
 	StmtListNode() : INode() {};

 	virtual void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 }; 

 class SStmtListNode : public INode
 {
 public:
 	SStmtListNode() : INode() {};

 	virtual void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 }; 

 class ExprNode : public INode
 {
 public:
 	ExprNode() : INode() {};

 	virtual void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 };

 class PlusNode : public BinNode
 {
 public:
 	PlusNode() : BinNode() {};

 	virtual void accept(Visitor &v)
 	{
 		Node left = getLeftChild();
 		Node right =getRightChild();
 		v.visit(&left);
 		v.visit(&rigth);
 	}
 };

 class MinusNode : public BinNode
 {
 public:
 	MinusNode() : BinNode() {};

 	virtual void accept(Visitor &v){
 		v.visit(&getLeftChild());
 		v.visit(&getRightChild());
 	}
 };

 class DiviNode : public BinNode
 {
 public:
 	DiviNode() : BinNode() {};

 	virtual void accept(Visitor &v){
 		v.visit(&getLeftChild());
 		v.visit(&getRightChild());
 	}
 };

 class MultNode : public BinNode
 {
 public:
 	MultNode() : BinNode() {};

 	virtual void accept(Visitor &v){
		v.visit(&getLeftChild());
 		v.visit(&getRightChild());
 	}
 };

 class IdentNode : public LeafNode
 {
 public:
 	IdentNode(string val) : LeafNode()
 	{
 		value.str = &val;
 	}

 	NValue getValue()
 	{
 		return value.str;
 	}

 	virtual void accept(Visitor &v)
 	{
		Simbolo *s=v.symbolTable->lookUp(*value.str);
		if(s==NULL)
			s=new Simbolo(value.str,(int*)NULL);
		
		symbolTable.insertName(s);
 		//Aguas!
 	}
 };

 class IntNode : public LeafNode
 {
 public:
 	IntNode(int i)
 	{
 		value.i = i;
 	}

 	NValue getValue()
 	{
 		return value.i;
 		return value.i;
 	}

 	virtual void accept(Visitor &v)
 	{
 		cout<<"int aceptado";
 	}
 };

 class FloatNode : public LeafNode
 {
 public:
 	FloatNode(float f) : LeafNode()
 	{
 		value.f = f;
 	}

 	NValue getValue()
 	{
 		return value.f;
 	}

 	virtual void accept(Visitor &v)
 	{
 		cout<<"float aceptado";
 	}
 };


 class StrNode : public LeafNode
 {
 public:

 	StrNode(string str) : LeafNode()
 	{
 		value.str = &str;
 	}

 	NValue getValue()
 	{
 		return value.str;
 	}

 	virtual void accept(Visitor &v)
 	{
 		cout<<"String aceptado";
 	}
 };

 class BoolNode : public LeafNode
 {
 public:
 	BoolNode(bool boolean) : LeafNode()
 	{
 		value.b = &boolean;
 	}

	NValue getValue()
	{
		return value.b;
	}

	virtual void accept(Visitor &v)
 	{
 		cout<<"Boolean aceptado";
 	}
 };

 class MAST : public AST
 {
 public:
 	MAST() : AST() {};


 	virtual IntNode* bIntNode(int val)
 	{
 		return new IntNode(val);
 	}

 	virtual StrNode* bStrNode(string val)
 	{
 		return new StrNode(val);
 	}

 	virtual FloatNode* bFloatNode(float val)
 	{
 		return new FloatNode(val);
 	}

 	virtual BoolNode* bBoolNode(bool val)
 	{
 		return new BoolNode(val);
 	}

 	virtual IdentNode* bIdentNode(string name)
 	{
 		return new IdentNode(name);
 	}

 	virtual PlusNode* bPlusNode()
 	{
 		return new PlusNode();
 	}

 	virtual MultNode* bMultNode()
 	{
 		return new MultNode();
 	}

 	virtual DiviNode* bDiviNode()
 	{
 		return new DiviNode();
 	}

 	virtual MinusNode* bMinusNode()
 	{
 		return new MinusNode();
 	}

 	virtual IfNode* bIfNode()
 	{
 		return new IfNode();
 	}

 	virtual ForNode* bForNode()
 	{
 		return new ForNode();
 	}

 	virtual WhileNode* bWhileNode()
 	{
 		return new WhileNode();
 	}

 	virtual StmtListNode* bStmtListNode()
 	{
 		return new StmtListNode();
 	}

 	virtual SStmtListNode* bSStmtListNode()
 	{
 		return new SStmtListNode();
 	}

 	virtual ExprNode* bExprNode()
 	{
 		return new ExprNode();
 	}
 };

 class NodeVisitor : public Visitor
 {
 public:
 
	NodeVisitor(){
		symbolTable= new SymbolTable;
	}
	
	NodeVisitor(SymbolTable *ts){
		symbolTable=ts;
	}
 

 	virtual void visit(PlusNode* node)
 	{
 		Node left = node->getLeftChild();
 		Node right = node->getRightChild();
 		left.accept(this);
 		right.accept(this);
 	}

 	virtual void visit(ForNode* node){
		for (list<Node>::iterator it=node->children->children.listas->begin(); it != node->children->children.listas->end(); ++it)
			it.accept(this);
 	}

 	virtual void visit(WhileNode* node){
		for (list<Node>::iterator it=node->children->children.listas->begin(); it != node->children->children.listas->end(); ++it)
			it->accept(this); 
 	}

 	virtual void visit(IfNode* node)
 	{
		for (list<Node>::iterator it=node->children->children.listas->begin(); it != node->children->children.listas->end(); ++it)
			it->accept(this);
		
 	}

 	virtual void visit(AssignNode* node)
 	{
		node->accept(this);
 	}

 	virtual void visit(StmtListNode* node)
 	{
		node->accept(this);
 	}

 	virtual void visit(SStmtListNode* node)
 	{
		node->accept(this);
 	}

 	virtual void visit(ExprNode* node)
 	{
		node->accept(this);
 	}

 	virtual void visit(MinusNode* node)
 	{
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		left->accept(this);
 		right->accept(this);
 	}

 	virtual void visit(DiviNode* node)
 	{
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		left->accept(this);
 		right->accept(this);
 	}

 	virtual void visit(MultNode* node)
 	{
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		left->accept(this);
 		right->accept(this);
 	}

 	virtual void visit(IdentNode* node)
 	{
 		node->accept(this);
 	}

 	virtual void visit(IntNode* node)
 	{
 		node->accept(this);
 	}

 	virtual void visit(FloatNode* node)
 	{
 		node->accept(this);
 	}

 	virtual void visit(StrNode* node)
 	{
 		node->accept(this);
 	}

 	virtual void visit(BoolNode* node)
 	{
		node->accept(this);
 	}
 };


/*int main(int argc,char* argv[]){
	Node* nodo = new Node;
 	MAST* astTree = new MAST;
 	IntNode* nodoInt = astTree->bIntNode(4);
 	int value = nodoInt->getValue().i;
 	std::cout << value << std::endl;

 	StrNode* nodoString = astTree->bStrNode("something");
 	nodoString->getValue();
 	NodeVisitor *vs;
 	nodo->accept(vs);
}*/
