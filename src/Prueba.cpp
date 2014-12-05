#include "../lib/MAST.hpp"

using namespace std;
int main(){
	MAST *asTree;
	asTree= new MAST;
	
	VisitorNode *visitor;
	visitor = new VisitorNode;
	string* s = new string("VARNAME");
	string* x = new string("VARNAME_X");
	string* y = new string("VARNAME_Y");

	Node* id1 = asTree->bIdentNode(s);
	Node* id2 = asTree->bIdentNode(x);
	Node* id3 = asTree->bStrNode(y);

	Node* m1 = asTree->bMultNode();
	Node* i1 = asTree->bIntNode(1);
	Node* i2 = asTree->bIntNode(3);
	Node* i3 = asTree->bIntNode(5);
	
	m1->setFChild(i2);
	m1->setSChild(i3);

	Node* a = asTree->bAssignNode();	
	a->setFChild(id1);
	a->setSChild(i1);
	
	Node* a1= asTree->bAssignNode();
	a1->setFChild(id2);
	a1->setSChild(m1);

	Node* b = asTree->bAssignNode();
	Node* exprn = asTree->bExprNode();
	b->setFChild(id1);
	b->setSChild(exprn);

	Node* fn = asTree->bForNode();
	
	fn->addFChild(i2);
	fn->addLChild(i1);
	fn->addLChild(a1);
	fn->addLChild(m1);
	fn->addLChild(a);
	
	fn->accept(*visitor);
	std::cout<<std::endl;
	return 0;
}
