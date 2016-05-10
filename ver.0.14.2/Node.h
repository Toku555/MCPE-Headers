#pragma once
class Node{
	public:
		Node(BlockPos const&);
		Node(Node const&);
		void distanceTo(Node*);
		void equals(Node*);
		void hashCode(void);
		void inOpenSet(void);
};
