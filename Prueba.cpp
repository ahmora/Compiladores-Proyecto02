#include "./lib/Composit/OolongVisitor.hpp"

using namespace std;
int main(){
	MAST *asTree;
	asTree= new MAST;
	
	TableVisitor *visitor;
	visitor = new TableVisitor;
	string* s = new string("VARNAME");
	string* x = new string("VARNAME_X");
	string* y = new string("VARNAME_Y");
	string* z = new string("VARNAME_Z");

	Node* id1 = asTree->bIdentNode(s);
	Node* id2 = asTree->bIdentNode(x);
	Node* id3 = asTree->bStrNode(y);
	Node* id4 = asTree->bIdentNode(z);

	Node* i1 = asTree->bIntNode(1);
	Node* i2 = asTree->bIntNode(3);
	Node* i3 = asTree->bIntNode(5);
	
	Node* en= asTree->bExprNode();
	Node* en2= asTree->bExprNode();
	en->addFChild(i1);
	en2->addFChild(id3);

	Node* a = asTree->bAssignNode();	
	a->setFChild(id1);
	a->setSChild(en);
	
	Node* a1= asTree->bAssignNode();
	a1->setFChild(id2);
	a1->setSChild(en2);

	a->accept(*visitor);
	std::cout<<std::endl;
	a1->accept(*visitor);

	std::cout<<std::endl;
	visitor->symbolTable->openScope();
	
	Node* a2= asTree->bAssignNode();
	a2->setFChild(id4);
	a2->setSChild(en2);
	a2->accept(*visitor);
	a1->accept(*visitor);
	a->accept(*visitor);
	
	
	
	OolongVisitor *olv= new OolongVisitor(visitor);
	vector<Simbolo> t=olv->symbolTable->getOrderedTable();
	
	
	return 0;
}
