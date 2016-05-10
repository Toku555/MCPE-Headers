#pragma once
class Path{
	public:
		void currentPos(Entity const*);
		void currentPos(void);
		void endsInXZ(Vec3 const&);
		void get(int);
		void getIndex(void);
		void getPos(Entity const*,int);
		void getSize(void);
		void isDone(void);
		void last(void);
		void next(void);
		void sameAs(Path*);
		void setIndex(int);
		void ~Path();
};
