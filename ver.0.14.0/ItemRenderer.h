#pragma once
class ItemRenderer{
	public:
		ItemRenderer(TextureGroup &);
		void blit(mce::TexturePtr const&,float,float,float,float,float,float);
		void createSingleton(TextureGroup &);
		void fillRect(Tessellator &,float,float,float,float,int);
		void getAtlasPos(ItemInstance const*);
		void getGraphics(Item const&);
		void getGraphics(ItemInstance const&);
		void getInstance(void);
		void iconBlit(mce::TexturePtr const&,float,float,TextureUVCoordinateSet const&,float,float,float,float,int,float,bool);
		void render(Entity &,Vec3 const&,float,float);
		void renderGuiItemCorrect(Font *,TextureGroup *,ItemInstance const*,int,int);
		void renderGuiItemDecorations(ItemInstance const*,float,float);
		void renderGuiItemInChunk(ItemRenderChunkType,ItemInstance const*,float,float,float,float,float);
		void renderGuiItemNew(ItemInstance const*,int,float,float,float,float,float,bool);
		void ~ItemRenderer();
		void ~ItemRenderer();
};
