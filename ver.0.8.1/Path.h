#pragma once
class Path{
	public:
		Path(arrayWithLength<Node *>);
		void currentPos(Entity const*);
		void currentPos(void);
		void endsIn(Vec3 *);
		void endsInXZ(Vec3 *);
		void get(int);
		void getIndex(void);
		void getPos(Entity const*,int);
		void getSize(void);
		void isDone(void);
		void last(void);
		void next(void);
		void sameAs(Path*);
		void setIndex(int);
		void setSize(int);
		void ~Path();
};
