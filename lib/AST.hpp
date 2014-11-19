/**
 * Implementación de clases para un AST con los patrones Builder, Composite y Visitor.
 * La implementación de los patrones de diseño se hacen con las clases Node, NodeList y AST.
 * @author: Alejandro Hernández Mora
 * @author: Alan Mauricio García García
 */

#include <list>
#include <vector>
#include <string>
#include <iostream>
#include "Nodos.hpp"

using namespace std;

class Node{
public:
	virtual ~Node(){};
	virtual void accept(Visitor&)=0;
	virtual void addFChild(Node*)=0;
	virtual void addLChild(Node*)=0;
	virtual void setFChild(Node*)=0;
	virtual void setSChild(Node*)=0;
protected:
	Node(){};
	
};


union NList {
	list<Node*> listas;
	vector<Node*> vectores;
};


class NodeList{
public:
	virtual ~NodeList(){};
	
	virtual Node* getLeftChild(){};
	virtual Node* getRightChild(){};
	virtual void setLeftChild(Node* node){};
	virtual void setRightChild(Node* node){};

	virtual void addFirst(Node* node){};
	virtual void addLast(Node* node){};
	
protected:
	NList* children;
	NodeList(){
		children= (NList*) malloc(sizeof(NList));
	}
};


class VNodeList : public NodeList{
public:
	~VNodeList(){};
 	VNodeList(int n){
		children->vectores.reserve(n);
 	}

 	void setLeftChild(Node* node){
 		children->vectores.insert(children->vectores.begin(), node);
 	}

 	void setRightChild(Node* node){
 		children->vectores.insert((children->vectores.begin())+1, node);
 		//getChildren().push_back(node);
 	}
 	
 	Node* getLeftChild(){
 		return getChildren()[0];
 	}

 	Node* getRightChild(){
 		return getChildren()[1];
 	}
 	
 	vector<Node*> getChildren(){
		return children->vectores;
	}
 };

class LNodeList : public NodeList{
public:
	~LNodeList(){};
	LNodeList():NodeList(){
		//getChildren();
		// No falta algo en este constructor?
	}
 	void addFirst(Node* node){
		cout<<"Inserto al inicio"<<endl;
		cout<<"dies here"<<endl;
 		getChildren().push_front(node);
 		cout<<"---not here first"<<endl;
 		cout<<"---not here Inserto al inicio"<<endl;
 	}

 	void addLast(Node* node){
 		getChildren().push_back(node);
 	}
 	
 	list<Node*> getChildren(){
		return children->listas;
	}
 };


class INode : public Node{	
protected:
 	NodeList* children;
 		 
public:
	~INode(){};
	INode() : Node(){
 		children = new LNodeList;
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
	~BinNode(){};
 	BinNode():INode(){
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
 		cout<<"Se agrego hijo izq"<<endl;
 	}

 	void setSChild(Node* second){
 		children->setRightChild(second);
 		cout<<"Se agrego hijo der"<<endl;
 	}

 	Node* getLeftChild(){
 		return children->getLeftChild();
 	}

 	Node* getRightChild(){
 		return children->getRightChild();
 	}
 };


 class LeafNode : public Node{
public:
	~LeafNode(){};
 	union NValue {
 		int i;
 		bool b;
 		float f;
 		string* str;
 	};
 	NValue value;
 	virtual void addFChild(Node*){
 		throw "Operation not supported for Node";
 	}
	virtual void addLChild(Node*){
 		throw "Operation not supported for Node";
 	}
	virtual void setFChild(Node*){
 		throw "Operation not supported for Node";
 	}
	virtual void setSChild(Node*){
 		throw "Operation not supported for Node";
 	}
 	
 	virtual NValue getValue()=0;
 protected:
	LeafNode(){};
 };

// Constructor
class AST{
protected: 
	AST(){};
 public:
	virtual ~AST(){};

 	// BinNode's
 	virtual PlusNode* bPlusNode()=0;
 	virtual MultNode* bMultNode()=0;
 	virtual DiviNode* bDiviNode()=0;
 	virtual MinusNode* bMinusNode()=0;
 	virtual AssignNode* bAssignNode()=0;
 	virtual AndNode* bAndNode()=0;
 	virtual OrNode* bOrNode()=0;
 	virtual XorNode* bXorNode()=0;
 	virtual NotNode* bNotNode()=0;
 	virtual LTNode* bLTNode()=0;
 	virtual GTNode* bGTNode()=0;
 	virtual EqNode* bEqNode()=0;
 	virtual NEqNode* bNEqNode()=0;
 	virtual LTEqNode* bLTEqNode()=0;
 	virtual GTEqNode* bGTEqNode()=0;
 	virtual PotNode* bPotNode()=0;
 	

 	// INode's
 	virtual StmtNode* bStmtNode()=0;
 	virtual SStmtNode* bSStmtNode()=0;
 	virtual StmtListNode* bStmtListNode()=0;
 	virtual SStmtListNode* bSStmtListNode()=0;
 	virtual ExprNode* bExprNode()=0;
 	virtual IfNode* bIfNode()=0;
 	virtual ForNode* bForNode()=0;
 	virtual WhileNode* bWhileNode()=0;
 	virtual ArgsNode* bArgsNode()=0;
 	virtual FuncNode* bFuncNode()=0;
 	

 	// LeafNode's
 	virtual IntNode* bIntNode(int val)=0;
 	virtual StrNode* bStrNode(string val)=0;
 	virtual FloatNode* bFloatNode(float val)=0;
 	virtual IdentNode* bIdentNode(string name)=0;
 	virtual BoolNode* bBoolNode(bool val)=0;
 };
