/**
 * Definición de un AST en memoria (MAST) y la interfaz del patrón Visitor con NodeVisitor
 *
 * @author: Alejandro Hernández Mora
 * @author: Alan Mauricio García García
 */

#include "SymbolTable.hpp"
#include <list>
#include "AST.hpp"
#include "Nodos.hpp"
#include <string>

using namespace std;
/**
 * Implementación de la clase abstracta Visitor
 */
class Visitor{
public:
	virtual ~Visitor(){};
	SymbolTable* symbolTable;
	//Node
	virtual void visit(Node*)=0;

	//INode
	virtual void visit(ForNode*)=0;
 	virtual void visit(WhileNode*)=0;
 	virtual void visit(IfNode*)=0;
 	virtual void visit(StmtListNode*)=0;
 	virtual void visit(SStmtListNode*)=0;
 	virtual void visit(ExprNode*)=0;
 	virtual void visit(FuncNode*)=0;
 	virtual void visit(ArgsNode*)=0;
 	virtual void visit(StmtNode*)=0;
 	virtual void visit(SStmtNode*)=0;
 	
 	//BinNode
 	virtual void visit(AssignNode*)=0;
 	virtual void visit(PlusNode*)=0;
 	virtual void visit(MinusNode*)=0;
 	virtual void visit(DiviNode*)=0;
 	virtual void visit(MultNode*)=0;
 	virtual void visit(AndNode*)=0;
 	virtual void visit(OrNode*)=0;
 	virtual void visit(XorNode*)=0;
 	virtual void visit(NotNode*)=0;
 	virtual void visit(PotNode*)=0;
 	virtual void visit(LTNode*)=0;
 	virtual void visit(GTNode*)=0;
 	virtual void visit(EqNode*)=0;
 	virtual void visit(NEqNode*)=0;
 	virtual void visit(LTEqNode*)=0;
 	virtual void visit(GTEqNode*)=0;
 	
	//LeafNode
	virtual void visit(IdentNode*)=0;
 	virtual void visit(IntNode*)=0;
 	virtual void visit(FloatNode*)=0;
 	virtual void visit(StrNode*)=0;
 	virtual void visit(BoolNode*)=0;
	
protected:
	Visitor(){};
	//SymbolTable* symbolTable;

};
 
/**
 * Implementación de los nodos que heredan de INode
 * 
 */
class ForNode : public INode{
public:
	~ForNode(){};
	ForNode():INode(){};
 	void accept(Visitor &v){
		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
			
 	}
 };

 class WhileNode : public INode{
 public:
 	~WhileNode(){};
 	WhileNode():INode(){};
 	void accept(Visitor &v){
		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 };
 
 class StmtListNode : public INode{
 public:
	~StmtListNode(){};
	StmtListNode():INode(){};
 	void accept(Visitor &v)	{
 		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 }; 

 class SStmtListNode : public INode{
 public:
	~SStmtListNode(){};
	SStmtListNode():INode(){};
 	void accept(Visitor &v){
 		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 }; 

 class ExprNode : public INode{
 public:
	~ExprNode(){};
	ExprNode():INode(){};
 	void accept(Visitor &v){
 		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 };
 
 
 class IfNode : public INode{
 public:
	~IfNode(){};
	IfNode():INode(){};
 	void accept(Visitor &v){
		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 };
 
class ArgsNode : public INode{
public:
	~ArgsNode(){};
	ArgsNode():INode(){};
 	void accept(Visitor& v){
 		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 };

 class FuncNode : public INode{
 public:
	~FuncNode(){};
	FuncNode():INode(){};
 	void accept(Visitor& v){
 		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 };
 
 class StmtNode : public INode{
 public:
	~StmtNode(){};
	StmtNode():INode(){};
 	void accept(Visitor& v){
 		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 };

 class SStmtNode : public INode{
 public:
	~SStmtNode(){};
	SStmtNode():INode(){};
 	void accept(Visitor& v){
		v.visit(this);
 		/*for (list<Node*>::iterator it= getChildren().begin(); it != getChildren().end(); ++it)
 			v.visit(*it);*/
 	}
 };

 
 
 
 
 /**
  * Implementación de los nodos que heredan de BinNode
  * 
  */

 class AssignNode : public BinNode{
 public:
	~AssignNode(){};
	AssignNode():BinNode(){};
	
 	void accept(Visitor &v){
 		v.visit(this);
	}
 };

 
 class PlusNode : public BinNode{
 public:
	~PlusNode(){};
	PlusNode():BinNode(){};
 	void accept(Visitor &v){
 		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
 	}
 };

class MinusNode : public BinNode{
public:
	~MinusNode(){};
	MinusNode():BinNode(){};
	
 	void accept(Visitor &v){
		v.visit(this);
 		//v.visit(getLeftChild());
		//v.visit(getRightChild());
 	}
 };

 class DiviNode : public BinNode{
 public:
	~DiviNode(){};
	DiviNode():BinNode(){};
 	void accept(Visitor &v){
		v.visit(this);
 		//v.visit(getLeftChild());
		//v.visit(getRightChild());
 	}
 };

class MultNode : public BinNode{
public:
	~MultNode(){};
	MultNode():BinNode(){cout<<"nuevo nodo mult"<<endl;};
	
 	void accept(Visitor &v){
		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
		
 	}
 };
 
class LTNode : public BinNode{
public:
	~LTNode(){};
	LTNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

class GTNode : public BinNode{
public:
	~GTNode(){};
	GTNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

class EqNode : public BinNode{
  public:
  ~EqNode(){};
  EqNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

  class NEqNode : public BinNode{
  public:
	~NEqNode(){};
	NEqNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

class LTEqNode : public BinNode{
  public:
	~LTEqNode(){};
	LTEqNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

class GTEqNode : public BinNode{
  public:
  ~GTEqNode(){};
  GTEqNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

  class PotNode : public BinNode{
  public:
	~PotNode(){};
	PotNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

class AndNode : public BinNode{
public:
	~AndNode(){};
	AndNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

  class OrNode : public BinNode{
  public:
	~OrNode(){};
	OrNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

  class XorNode : public BinNode{
  public:
  ~XorNode(){};
  XorNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };

  class NotNode : public BinNode
  {
  public:
  ~NotNode(){};
  NotNode():BinNode(){};
  	void accept(Visitor& v){
  		v.visit(this);
		//v.visit(getLeftChild());
		//v.visit(getRightChild());
  	}
  };
 
 
 
 
 
 /**
  * 
  * Implementación de los nodos que heredan de LeafNode
  */

 class IdentNode : public LeafNode{
 public:
	IdentNode():LeafNode(){};
	~IdentNode(){};
 	IdentNode(string *val) : LeafNode(){
 		value.str = val;
 	}

 	NValue getValue(){
 		return value;
 	}

 	void accept(Visitor &v)	{
 		v.visit(this);
 		//Aguas!
 	}
 };

 class IntNode : public LeafNode{
 public:
	~IntNode(){};
 	IntNode(int i){
 		value.i = i;
 	}

 	NValue getValue(){
 		return value;
 	}

 	void accept(Visitor &v){
 		cout<<"int aceptado"<<endl;
 	}
 };

 class FloatNode : public LeafNode{
 public:
	~FloatNode(){};
 	FloatNode(float f){
 		value.f = f;
 	}

 	NValue getValue(){
 		return value;
 	}

 	void accept(Visitor &v){
 		cout<<"float aceptado"<<endl;
 	}
 };


 class StrNode : public LeafNode{
 public:
	~StrNode(){};
 	StrNode(string str){
 		value.str = &str;
 	}

 	NValue getValue(){
 		return value;
 	}

 	void accept(Visitor &v){
 		cout<<"String aceptado"<<endl;
 	}
 };

 class BoolNode : public LeafNode{
 public:
	~BoolNode(){};
 	BoolNode(bool boolean) : LeafNode(){
 		value.b = &boolean;
 	}

	NValue getValue(){
		return value;
	}

	void accept(Visitor &v){
 		cout<<"Boolean aceptado"<<endl;
 	}
 };

 class MAST : public AST{
 public:
	~MAST(){};
	MAST():AST(){cout<<"MAST creado"<<endl;};
	//LeafNode
 	IntNode* bIntNode(int val){
 		return new IntNode(val);
 	}

 	StrNode* bStrNode(string val){
 		return new StrNode(val);
 	}

 	FloatNode* bFloatNode(float val){
 		return new FloatNode(val);
 	}

 	BoolNode* bBoolNode(bool val){
 		return new BoolNode(val);
 	}

 	IdentNode* bIdentNode(string *name){
 		return new IdentNode(name);
 	}
 	
	//BinNode
 	PlusNode* bPlusNode(){
 		return new PlusNode;
 	}

 	MultNode* bMultNode(){
 		return new MultNode;
 	}

 	DiviNode* bDiviNode(){
 		return new DiviNode;
 	}

 	MinusNode* bMinusNode(){
 		return new MinusNode;
 	}
 	
 	AssignNode* bAssignNode(){
		return new AssignNode;
	}
	
	AndNode* bAndNode(){
  		return new AndNode;
  	}

  	OrNode* bOrNode(){
  		return new OrNode;
  	}

  	XorNode* bXorNode(){
  		return new XorNode;
  	}

  	NotNode* bNotNode(){
  		return new NotNode;
  	}
  	
  	LTNode* bLTNode(){
  		return new LTNode;
  	}
  	
  	GTNode* bGTNode(){
  		return new GTNode;
  	}

  	EqNode* bEqNode(){
  		return new EqNode;
  	}

  	NEqNode* bNEqNode(){
  		return new NEqNode;
  	}

  	LTEqNode* bLTEqNode(){
  		return new LTEqNode();
  	}

  	GTEqNode* bGTEqNode(){
  		return new GTEqNode;
  	}

  	PotNode* bPotNode(){
  		return new PotNode;
  	}
  	
  	//INode
  	StmtNode* bStmtNode(){
		return new StmtNode;
	}
	
	SStmtNode* bSStmtNode(){
		return new SStmtNode;
	}
  	
  	StmtListNode* bStmtListNode(){
 		return new StmtListNode;
 	}

 	SStmtListNode* bSStmtListNode(){
 		return new SStmtListNode;
 	}
  	ExprNode* bExprNode(){
 		return new ExprNode;
 	}
 	
 	IfNode* bIfNode(){
 		return new IfNode;
 	}

 	ForNode* bForNode(){
 		return new ForNode;
 	}

 	WhileNode* bWhileNode(){
 		return new WhileNode;
 	}

  	ArgsNode* bArgsNode(){
  		return new ArgsNode;
  	}

  	FuncNode* bFuncNode(){
  		return new FuncNode;
  	}
 };


class VisitorNode : public Visitor{
public:
	~VisitorNode(){};
	VisitorNode():Visitor(){
		symbolTable= new SymbolTable;
	}
	
	VisitorNode(SymbolTable *ts):Visitor(){
		symbolTable=ts;
	}
 
 	void visit(Node* node){
	 	visit(node);
 	}
	

 	void visit(ForNode* node){
		for (list<Node*>::iterator it= node->getChildren().begin(); it != node->getChildren().end(); ++it){
			Visitor* v = this;
			(*it)->accept(*v);
		}
 	}

 	void visit(WhileNode* node){
		for (list<Node*>::iterator it= node->getChildren().begin(); it != node->getChildren().end(); ++it){
			Visitor* v = this;
			(*it)->accept(*v);
		} 
 	}

 	void visit(IfNode* node){
		for (list<Node*>::iterator it= node->getChildren().begin(); it != node->getChildren().end(); ++it){
			Visitor* v = this;
			(*it)->accept(*v);
		}
		
 	}

 	void visit(AssignNode* node){
		cout << "visite un assignode" << endl;
		IdentNode* c = dynamic_cast<IdentNode*> (node->getLeftChild());
		if(c != 0){
			Node *left = node->getLeftChild();
			Node *right = node->getRightChild();
			Visitor *v=this;
			left->accept(*v);
			right->accept(*v);
		}else{
			throw "Assignment operation is only for variables";
			cout<<"Assignment operation is only for variables"<<endl;
		}
			
 	}

 	void visit(StmtListNode* node){
		Visitor *v=this;
		node->accept(*v);
 	}

 	void visit(SStmtListNode* node){
		Visitor *v=this;
		node->accept(*v);
 	}
 	
 	void visit(FuncNode* node){
		for (list<Node*>::iterator it= node->getChildren().begin(); it != node->getChildren().end(); ++it){
			Visitor* v = this;
			(*it)->accept(*v);	
		}	
	}

 	void visit(ArgsNode* node){
 		for (list<Node*>::iterator it= node->getChildren().begin(); it != node->getChildren().end(); ++it){
			Visitor* v = this;
			(*it)->accept(*v);
		}
 	}

 	void visit(ExprNode* node){
		Visitor *v=this;
		node->accept(*v);
 	}
 	
 	void visit(StmtNode* node){
		Visitor *v=this;
		node->accept(*v);
	}
 	void visit(SStmtNode* node){
		Visitor *v=this;
		node->accept(*v);
	}
 	
 	
 	
 	void visit(AndNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(OrNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(XorNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(NotNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(PotNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(LTNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(GTNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(EqNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(NEqNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(LTEqNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(GTEqNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}
 	
 	
 	void visit(PlusNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(MinusNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(DiviNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(MultNode* node){
 		Node *left = node->getLeftChild();
 		Node *right = node->getRightChild();
 		Visitor *v=this;
 		left->accept(*v);
 		right->accept(*v);
 	}

 	void visit(IdentNode* node){
		cout << "visite una variable" << endl;
		string *name = node->getValue().str;
		Simbolo *s = symbolTable->lookUp(*name);
		if(s==0){
			cout<<"Es nulo"<<endl;
			string cad = "";
			s=new Simbolo(name,&cad);
			symbolTable->insertName(s);
			symbolTable->printTable();
		}
 	}

 	void visit(IntNode* node){
		cout<<"Visite un entero "<<endl;
 		Visitor *v=this;
		node->accept(*v);
		
 	}

 	void visit(FloatNode* node){
 		Visitor *v=this;
		node->accept(*v);
 	}

 	void visit(StrNode* node){
 		Visitor *v=this;
		node->accept(*v);
 	}

 	void visit(BoolNode* node){
		Visitor *v=this;
		node->accept(*v);
 	}
 };
