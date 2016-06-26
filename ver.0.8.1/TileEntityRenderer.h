#pragma once
class TileEntityRenderer{
	public:
		TileEntityRenderer(void);
		void bindTexture(std::string const&);
		void getFont(void);
		void getLevel(void);
		void init(TileEntityRenderDispatcher *);
		void onNewLevel(Level *);
		void ~TileEntityRenderer();
		void ~TileEntityRenderer();
};
