#pragma once
class Node{
	public:
		Node(int,int,int);
		void _init(void);
		void createHash(int,int,int);
		void distanceTo(Node*);
		void equals(Node*);
		void hashCode(void);
		void inOpenSet(void);
};
