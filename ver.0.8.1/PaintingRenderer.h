#pragma once
class PaintingRenderer{
	public:
		void _buildPainting(int,int,int,int);
		void _getMesh(Motive const*);
		void onAppSuspended(void);
		void render(Entity *,float,float,float,float,float);
		void ~PaintingRenderer();
		void ~PaintingRenderer();
};
