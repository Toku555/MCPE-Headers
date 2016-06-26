#pragma once
class ItemRenderer{
	public:
		ItemRenderer(void);
		void blit(float,float,float,float,float,float);
		void fillRect(Tesselator &,float,float,float,float,int);
		void getAtlasPos(ItemInstance const*);
		void iconBlit(float,float,TextureUVCoordinateSet const&,float,float,float,float,int,float);
		void render(Entity *,float,float,float,float,float);
		void renderGuiItem(Font *,Textures *,ItemInstance const*,float,float,bool);
		void renderGuiItem(Font *,Textures *,ItemInstance const*,float,float,float,float,bool);
		void renderGuiItemCorrect(Font *,Textures *,ItemInstance const*,int,int);
		void renderGuiItemDecorations(ItemInstance const*,float,float);
		void renderGuiItemInChunk(ItemRenderChunkType,Textures *,ItemInstance const*,float,float,float,float,float);
		void renderGuiItemNew(Textures *,ItemInstance const*,int,float,float,float,float,float);
		void teardown_static(void);
		void ~ItemRenderer();
		void ~ItemRenderer();
};
