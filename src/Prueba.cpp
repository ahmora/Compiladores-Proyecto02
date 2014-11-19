#include "../lib/MAST.hpp"

using namespace std;
int main(){
	MAST *asTree;
	asTree= new MAST;
	
	VisitorNode *visitor;
	visitor = new VisitorNode;
	string s="VARNAME";
	string *var=&s;
	
	Node* i1 = asTree->bIdentNode(var);
	Node* i2 = asTree->bIntNode(3);
	
	Node* i3 = asTree->bIntNode(5);
	
	Node* m;
	m= asTree->bAssignNode();
	
	m->setFChild(i1);
	m->setSChild(i2);
	
	m->accept(*visitor);
	
	return 0;
}
