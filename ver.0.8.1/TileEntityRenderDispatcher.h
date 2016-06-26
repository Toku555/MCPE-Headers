#pragma once
class TileEntityRenderDispatcher{
	public:
		TileEntityRenderDispatcher(void);
		void destroy(void);
		void distanceToSqr(float,float,float);
		void getFont(void);
		void getInstance(void);
		void getRenderer(TileEntity *);
		void getRenderer(TileEntityRendererId);
		void prepare(Level *,Textures *,Font *,Mob *,float);
		void render(TileEntity *,float);
		void render(TileEntity *,float,float,float,float);
		void setLevel(Level *);
		void ~TileEntityRenderDispatcher();
};
