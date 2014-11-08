/**
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

class VisitorNode;
class INode;
class LeafNode;
class BinNode;

#endif

 using namespace std;

class Visitor{
public:
	
	//Node
	virtual void visit(Node*)=0;
	virtual void visit(INode*)=0;
	virtual void visit(BinNode*)=0;

	//INode
	virtual void visit(ForNode*)=0;
 	virtual void visit(WhileNode*)=0;
 	virtual void visit(IfNode*)=0;
 	virtual void visit(StmtListNode*)=0;
 	virtual void visit(SStmtListNode*)=0;
 	virtual void visit(ExprNode*)=0;
 	//BinNode
 	virtual void visit(AssignNode*)=0;
 	virtual void visit(PlusNode*)=0;
 	virtual void visit(MinusNode*)=0;
 	virtual void visit(DiviNode*)=0;
 	virtual void visit(MultNode*)=0;
	//LeafNode
	virtual void visit(IdentNode*)=0;
 	virtual void visit(IntNode*)=0;
 	virtual void visit(FloatNode*)=0;
 	virtual void visit(StrNode*)=0;
 	virtual void visit(BoolNode*)=0;
protected:
	Visitor();
	SymbolTable* symbolTable;

};
 

class ForNode : public INode{
public:
 	ForNode() : INode() {};

 	void accept(Visitor &v)
 	{
		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(it);
			
 	}
 };

 class WhileNode : public INode
 {
 public:
 	WhileNode() : INode() {};

 	void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 };

 class IfNode : public INode
 {
 public:
 	IfNode() : INode() {};

 	void accept(Visitor &v)
 	{
		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 };

 class AssignNode : public BinNode
 {
 public:
 	AssignNode() : BinNode() {};

 	void accept(Visitor &v){
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

 	void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 }; 

 class SStmtListNode : public INode
 {
 public:
 	SStmtListNode() : INode() {};

 	void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 }; 

 class ExprNode : public INode
 {
 public:
 	ExprNode() : INode() {};

 	void accept(Visitor &v)
 	{
 		for (list<Node>::iterator it=children->children.listas->begin(); it != children->children.listas->end(); ++it)
			v.visit(*it);
 	}
 };

 class PlusNode : public BinNode
 {
 public:
 	PlusNode() : BinNode() {};

 	void accept(Visitor &v){
 		v.visit(&getLeftChild());
 		v.visit(&getRightChild());
 	}
 };

 class MinusNode : public BinNode
 {
 public:
 	MinusNode() : BinNode() {};

 	void accept(Visitor &v){
 		v.visit(&getLeftChild());
 		v.visit(&getRightChild());
 	}
 };

 class DiviNode : public BinNode
 {
 public:
 	DiviNode() : BinNode() {};

 	void accept(Visitor &v){
 		v.visit(&getLeftChild());
 		v.visit(&getRightChild());
 	}
 };

 class MultNode : public BinNode
 {
 public:
 	MultNode() : BinNode() {};

 	void accept(Visitor &v){
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

 	void accept(Visitor &v)
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

 	void accept(Visitor &v)
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

 	void accept(Visitor &v)
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

 	void accept(Visitor &v)
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

	void accept(Visitor &v)
 	{
 		cout<<"Boolean aceptado";
 	}
 };

 class MAST : public AST
 {
 public:
 	MAST() : AST() {};


 	IntNode* bIntNode(int val)
 	{
 		return new IntNode(val);
 	}

 	StrNode* bStrNode(string val)
 	{
 		return new StrNode(val);
 	}

 	FloatNode* bFloatNode(float val)
 	{
 		return new FloatNode(val);
 	}

 	BoolNode* bBoolNode(bool val)
 	{
 		return new BoolNode(val);
 	}

 	IdentNode* bIdentNode(string name)
 	{
 		return new IdentNode(name);
 	}

 	PlusNode* bPlusNode()
 	{
 		return new PlusNode();
 	}

 	MultNode* bMultNode()
 	{
 		return new MultNode();
 	}

 	DiviNode* bDiviNode()
 	{
 		return new DiviNode();
 	}

 	MinusNode* bMinusNode()
 	{
 		return new MinusNode();
 	}

 	IfNode* bIfNode()
 	{
 		return new IfNode();
 	}

 	ForNode* bForNode()
 	{
 		return new ForNode();
 	}

 	WhileNode* bWhileNode()
 	{
 		return new WhileNode();
 	}

 	StmtListNode* bStmtListNode()
 	{
 		return new StmtListNode();
 	}

 	SStmtListNode* bSStmtListNode()
 	{
 		return new SStmtListNode();
 	}

 	ExprNode* bExprNode()
 	{
 		return new ExprNode();
 	}
 };


class VisitorNode : public Visitor{
public:

	VisitorNode(){
		symbolTable= new SymbolTable;
	}
	
	VisitorNode(SymbolTable *ts){
		symbolTable=ts;
	}
 
 	void visit(Node* node){
 		INode* inode = dynamic_cast<INode*>(node);
		if(inode != 0) {
			visit(inode);
			return;
		}

		LeafNode* lnode= dynamic_cast<LeafNode*>(node);
		if(lnode!=0){
			visit(lnode);
			return;
		}

 	}

 	void visit(LeafNode* node){
	 	IntNode* inode = dynamic_cast<IntNode*> inode;
	 	if(inode!=0){
	 			visit(inode);
	 			return;
	 	}
	 	StrNode* stnode = dynamic_cast<StrNode*>stnode;
	 	if(stnode!=0){
	 			visit(stnode);
	 			return;
	 	}
	 	FloatNode* flnode= dynamic_cast<FloatNode*>flnode;
	 	if(flnode!=0){
	 			visit(flnode);
	 			return;
	 	}
	 	IdentNode* idnode= dynamic_cast<IdentNode*>idnode;
	 	if(idnode!=0){
	 			visit(idnode);
	 	}
 	}

 	void visit(INode* node){
 		BinNode* bnode=dynamic_cast<BinNode*>(node);
 		if(bnode!=0){
 			visit(bnode);
 			return;
 		}

 		StmtNode* stmtnode = dynamic_cast<StmtNode*>(node);
 		if(stmtnode!=0){
 			visit(stmtNode);
 			return;
 		}

 		SStmtNode* sstmtnode = dynamic_cast<SStmtNode*>(node);
 		if(sstmtnode!=0){
 			visit(sstmtNode);
 			return;
 		}
 		
 		StmtListNode* stmtlistnode = dynamic_cast<StmtListNode*>(node);
 		if(stmtlistnode!=0){
 			visit(stmtlistnode);
 			return;
 		}
 	
 		SStmtListNode* sslnode = dynamic_cast<SStmtListNode*>(node);
 		if(sslnode!=0){
 			visit(sslnode);
 			return;
 		}
 		ExprNode* expnode = dynamic_cast<ExprNode*>(node);
 		if(expnode!=0){
 			visit(expnode);
 		}

 		IfNode* ifnode = dynamic_cast<IfNode*>(node);
 		if(ifnode!=0){
 			visit(ifnode);
 			return;
 		}
 		ForNode* fnode) = dynamic_cast<ForNode*>(node);
		if(fnode!=0){
 			visit(fnode);
 			return;
 		}
 		WhileNode* wnode = dynamic_cast<WhileNode*>(node);
 		if(wnode!=0){
 			visit(wnode);
 			return;
 		}

 	}

 	void visit(BinNode* node){
 		PlusNode* plnode= dynamic_cast<PlusNode*>(node);
 		if(plnode!=0){
 			visit(plnode);
 			return;
 		}
 		MultNode* mulnode= dynamic_cast<MultNode*>(node);
 		if(mulnode!=0){
 			visit(mulnode);
 			return;
 		}
 		DiviNode* divnode= dynamic_cast<DiviNode*>(node);
 		if(divnode!=0){
 			visit(divnode);
 			return;
 		}

 		MinusNode* minnode= dynamic_cast<MinusNode*>(node);
 		if(minnode!=0){
 			visit(minnode);
 			return;
 		}

 		AssignNode* assnode= dynamic_cast<AssignNode*>(node);
 		if(assnode!=0){
 			visit(assnode);
 			return;
 		}

 	}


 	void visit(PlusNode* node){
 		Node left = node->getLeftChild();
 		Node right = node->getRightChild();
 		left.accept(this);
 		right.accept(this);
 	}

 	void visit(ForNode* node){
		for (list<Node>::iterator it=node->children->children.listas->begin(); it != node->children->children.listas->end(); ++it)
			it.accept(this);
 	}

 	void visit(WhileNode* node){
		for (list<Node>::iterator it=node->children->children.listas->begin(); it != node->children->children.listas->end(); ++it)
			it->accept(this); 
 	}

 	void visit(IfNode* node)
 	{
		for (list<Node>::iterator it=node->children->children.listas->begin(); it != node->children->children.listas->end(); ++it)
			it->accept(this);
		
 	}

 	void visit(AssignNode* node)
 	{
		node->accept(this);
 	}

 	void visit(StmtListNode* node)
 	{
		node->accept(this);
 	}

 	void visit(SStmtListNode* node)
 	{
		node->accept(this);
 	}

 	void visit(ExprNode* node)
 	{
		node->accept(this);
 	}

 	void visit(MinusNode* node)
 	{
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		left->accept(this);
 		right->accept(this);
 	}

 	void visit(DiviNode* node)
 	{
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		left->accept(this);
 		right->accept(this);
 	}

 	void visit(MultNode* node)
 	{
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		left->accept(this);
 		right->accept(this);
 	}

 	void visit(IdentNode* node)
 	{
 		node->accept(this);
 	}

 	void visit(IntNode* node)
 	{
 		node->accept(this);
 	}

 	void visit(FloatNode* node)
 	{
 		node->accept(this);
 	}

 	void visit(StrNode* node)
 	{
 		node->accept(this);
 	}

 	void visit(BoolNode* node)
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

