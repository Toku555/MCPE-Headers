#pragma once
class PolygonQuad{
	public:
		PolygonQuad(VertexPT *,VertexPT *,VertexPT *,VertexPT *);
		PolygonQuad(VertexPT *,VertexPT *,VertexPT *,VertexPT *,float,float,float,float);
		PolygonQuad(VertexPT *,VertexPT *,VertexPT *,VertexPT *,int,int,int,int,int,int);
		void flipNormal(void);
		void mirror(void);
		void render(Tesselator &,float,int);
};
