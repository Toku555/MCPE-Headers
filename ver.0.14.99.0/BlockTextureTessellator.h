#pragma once
class BlockTextureTessellator{
	public:
		void clearRegisteredUVs(void);
		void clearRegisteredUVs(void);
		void generateUV(ResourceLocation const&,TextureData const&);
		void generateUV(ResourceLocation const&,TextureData const&);
		void getTessellatedTexturesInfo(ResourceLocation const&);
		void getTessellatedTexturesInfo(ResourceLocation const&);
		void render(Tessellator &,Vec3 const&,TextureUVCoordinateSet const&,bool,int,float,Vec3 const&,bool,bool,float);
		void render(Tessellator &,Vec3 const&,TextureUVCoordinateSet const&,bool,int,float,Vec3 const&,bool,bool,float);
};
