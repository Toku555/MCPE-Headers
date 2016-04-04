#pragma once
class PaintingRenderer{
	public:
		PaintingRenderer(TextureGroup &);
		void _buildPainting(int,int,int,int);
		void _getMesh(Motive const*);
		void onAppSuspended(void);
		void render(Entity &,Vec3 const&,float,float);
		void ~PaintingRenderer();
		void ~PaintingRenderer();
};
