#pragma once
namespace Tesselator{
	class CurrentVertexPointers{
		public:
		void CurrentVertexPointers(uchar *,MeshBuffer::VertexFormat const&);
		Tesselator(int);
		void _buildQuadIndexBuffer(void);
		void _genVertexFormat(void);
		void addOffset(Vec3 const&);
		void addOffset(float,float,float);
		void begin(int);
		void begin(int,int);
		void beginOverride(void);
		void cancel(void);
		void clear(void);
		void color(char,char,char);
		void color(float,float,float);
		void color(float,float,float,float);
		void color(int);
		void color(int,int);
		void color(int,int,int);
		void color(int,int,int,int);
		void colorABGR(int);
		void draw(bool);
		void enableColor(void);
		void end(void);
		void endOverrideAndDraw(void);
		void getColor(void);
		void getVertexCount(void);
		void init(void);
		void noColor(void);
		void normal(Vec3 const&);
		void normal(float,float,float);
		void offset(Vec3 const&);
		void offset(float,float,float);
		void quad(bool);
		void quad(ushort,bool);
		void quad(ushort,ushort,ushort,ushort);
		void resetScale(void);
		void resetTilt(void);
		void scale2d(float,float);
		void scale3d(float,float,float);
		void setAccessMode(int);
		void setMaxVertexNumber(int);
		void tex(float,float);
		void tilt(void);
		void triangle(ushort,ushort,ushort);
		void vertex(float,float,float);
		void vertexUV(float,float,float,float,float);
		void voidBeginAndEndCalls(bool);
		void ~Tesselator();
	}
};
