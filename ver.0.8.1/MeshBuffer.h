#pragma once
class MeshBuffer{
	public:
		MeshBuffer(MeshBuffer&&);
		MeshBuffer(MeshBuffer::VertexFormat const*,void *,int,void *,uint,int,uint);
		MeshBuffer(void);
		void VertexFormat(void);
		void bindArrays(void);
		void enableField(MeshBuffer::VertexFormat::Field);
		void _load(MeshBuffer::VertexFormat const*,void *,int,void *,uint,int,uint);
		void _move(MeshBuffer&);
		void isValid(void);
		void load(MeshBuffer::VertexFormat const*,void *,int,void *,uint,int,uint);
		void operator=(MeshBuffer&&);
		void render(void);
		void reset(void);
		void ~MeshBuffer();
};
