#pragma once
class PolygonQuad{
	public:
		PolygonQuad(VertexPT *,VertexPT *,VertexPT *,VertexPT *);
		PolygonQuad(VertexPT *,VertexPT *,VertexPT *,VertexPT *,float,float,float,float);
		PolygonQuad(VertexPT *,VertexPT *,VertexPT *,VertexPT *,int,int,int,int,int,int);
		PolygonQuad(VertexPT *,VertexPT *,VertexPT *,VertexPT *,int,int,int,int,int,int);
		PolygonQuad(void);
		PolygonQuad(void);
		void compile(Tessellator &,float);
		void compile(Tessellator &,float);
		void expandAABB(AABB &);
		void expandAABB(AABB &);
		void flipNormal(void);
		void mirror(void);
		void mirror(void);
};
