/*
* Implementación de clases para un AST con los patrones Builder, Composite y Visitor.
* La implementación de los patrones de diseño se hacen con las clases Node, NodeList y AST.
*
* @author: Alejandro Hernández Mora
* @author: Alan Mauricio García García
*/

#include <list>
#include <vector>
#include <string>
#include <iostream>


using namespace std;

class Visitor;
class ForNode;
class WhileNode;
class IfNode;
class AssignNode;

class StmtNode;
class SStmtNode;

class StmtListNode;
class SStmtListNode;

class ExprNode;
class PlusNode;
class MinusNode;
class DiviNode;
class MultNode;
class IdentNode;
class IntNode;
class FloatNode;
class StrNode;
class BoolNode;

class Node{
public:
	~Node();
	virtual void accept(Visitor&)=0;
	virtual void addFChild(Node*)=0;
	virtual void addLChild(Node*)=0;
	virtual void setFChild(Node*)=0;
	virtual void setSChild(Node*)=0;
	
protected:
Node();
};


union NList {
	list<Node*> listas;
	vector<Node*> vectores;
};


class NodeList{
public:
	NList* children;

	virtual Node* getLeftChild();
	virtual Node* getRightChild();
	virtual void setLeftChild(Node* node);
	virtual void setRightChild(Node* node);

	virtual void addFirst(Node* node);
	virtual void addLast(Node* node);
	
	NList* getChildren(){
		return children;
	}
};


 class VNodeList : public NodeList{
 private:
 	NodeList* children;
 public:
 	VNodeList(int n){
 		getChildren().resize(n);
 	}

 	void setLeftChild(Node* node){
 		getChildren().front() = node;
 	}

 	void setRightChild(Node* node){
 		getChildren().back() = node;
 	}
 	
 	Node* getLeftChild(){
 		return getChildren().front();
 	}

 	Node* getRightChild(){
 		return getChildren().back();
 	}
 	
 	vector<Node*> getChildren(){
		return children->children->vectores;
	}
 };

 class LNodeList : public NodeList{
 private:
 	NodeList* children;
 public:
 	LNodeList() {}

 	void addFirst(Node* node){
 		getChildren().push_front(node);
 	}

 	void addLast(Node* node){
 		getChildren().push_back(node);
 	}
 	
 	list<Node*> getChildren(){
		return children->children->listas;
	}
 };


 class INode : public Node{	
 protected:
 	NodeList* children;
	 
 public:
 	INode() : Node(){
 		children = new LNodeList();
 	}

 	INode(int n);

 	void addFChild(Node* child){
 		children->addFirst(child);
 	}

 	void addLChild(Node* child){
 		children->addLast(child);
 	}

 	void setFChild(Node* first)	{
 		throw "Operation not supported for Node";
 	}

 	void setSChild(Node* second){
 		throw "Operation not supported for Node";
 	}

 	list<Node*> getChildren(){
 		return getChildren();
 	}

 };


 class BinNode : public INode{
 public:
 	BinNode(){
 		children = new VNodeList(2);
 	}

 	void addFChild(Node* first)	{
 		throw "Operation not supported for Node";
 	}

 	void addLChild(Node* second){
 		throw "Operation not supported for Node";
 	}

 	void setFChild(Node* first){
 		children->setLeftChild(first);
 	}

 	void setSChild(Node* second){
 		children->setRightChild(second);
 	}

 	Node* getLeftChild(){
 		return children->getLeftChild();
 	}

 	Node* getRightChild(){
 		return children->getRightChild();
 	}
 };


 class LeafNode : public Node{
 protected:
 	union NValue {
 		int i;
 		bool b;
 		float f;
 		string* str;
 	};
 	NValue value;
 public:
 	LeafNode() : Node() {};
 	virtual NValue getValue()=0;
 };

 // Constructor
 class AST{
 public:

 	// BinNode's
 	virtual PlusNode* bPlusNode();
 	virtual MultNode* bMultNode();
 	virtual DiviNode* bDiviNode();
 	virtual MinusNode* bMinusNode();
 	virtual AssignNode* bAssignNode();

 	// INode's
 	virtual StmtNode* bStmtNode();
 	virtual SStmtNode* bSStmtNode();
 	
 	virtual StmtListNode* bStmtListNode();
 	virtual SStmtListNode* bSStmtListNode();
 	virtual ExprNode* bExprNode();

 	virtual IfNode* bIfNode();
 	virtual ForNode* bForNode();
 	virtual WhileNode* bWhileNode();

 	// LeafNode's
 	virtual IntNode* bIntNode(int val);
 	virtual StrNode* bStrNode(string val);
 	virtual FloatNode* bFloatNode(float val);
 	virtual IdentNode* bIdentNode(string name);
 	virtual BoolNode* bBoolNode(bool val);
 };
