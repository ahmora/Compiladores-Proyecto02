#include "../lib/MAST.hpp"

using namespace std;
int main(){
	MAST *asTree;
	asTree= new MAST;
	
	VisitorNode *visitor;
	visitor = new VisitorNode;
	
	Node* i1 = asTree->bIntNode(5);
	Node* i2 = asTree->bIntNode(3);
	
	Node* m;
	m= asTree->bMultNode();
	
	m->setFChild(i1);
	m->setSChild(i2);
	
	m->accept(*visitor);
	
	return 0;
}
