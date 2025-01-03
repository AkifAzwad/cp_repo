// construct a tree with node insertion and something to do with child


#include <cstdio>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

struct treeNode {
	string name = "";
	treeNode* parent = NULL;
	vector<treeNode*> childs;
	treeNode(string name) {
		this->name = name;
	}
	treeNode(string name, treeNode* parent) {
		this->name = name;
		this->parent = parent;
	}
	void addChild(treeNode* child) {
		this->childs.push_back(child);
	}
};

typedef treeNode* pNode;


pNode nodes[100];


void dfs(pNode root) {
	if (root == NULL) return;
	cout << root->name << endl;
	for (pNode child : root->childs)
		dfs(child);
}

int main() {
	int id, parentId;
	string name;
	while (cin >> id >> name >> parentId) {
		//cout << id << " " << name << " " << parentId << endl;
		if (parentId != -1) {
			nodes[id] = new treeNode(name, nodes[parentId]);
			nodes[parentId]->addChild(nodes[id]);
		}
		else nodes[id] = new treeNode(name);
	}
	dfs(nodes[1]);


	return 0;

}