#pragma once
class BinaryHeap{
	public:
		BinaryHeap(void);
		void _init(void);
		void changeCost(Node *,float);
		void clear(void);
		void downHeap(int);
		void insert(Node *);
		void isEmpty(void);
		void peek(void);
		void pop(void);
		void remove(Node *);
		void size(void);
		void upHeap(int);
		void ~BinaryHeap();
};
