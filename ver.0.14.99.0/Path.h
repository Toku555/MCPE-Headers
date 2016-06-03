#pragma once
class Path{
	public:
		Path(std::vector<Node *,std::allocator<Node *>> const&);
		Path(std::vector<Node *,std::allocator<Node *>> const&);
		void currentPos(Entity const*);
		void currentPos(Entity const*);
		void currentPos(void);
		void endsInXZ(Vec3 const&);
		void endsInXZ(Vec3 const&);
		void get(int);
		void get(int);
		void getEndPos(void);
		void getEndPos(void);
		void getIndex(void);
		void getIndex(void);
		void getPos(Entity const*,int);
		void getPos(Entity const*,int);
		void getSize(void);
		void getSize(void);
		void isDone(void);
		void isDone(void);
		void last(void);
		void last(void);
		void next(void);
		void next(void);
		void sameAs(Path*);
		void sameAs(Path*);
		void setIndex(int);
		void setIndex(int);
		void setSize(int);
		void setSize(int);
		void ~Path();
		void ~Path();
};
