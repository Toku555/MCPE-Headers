#pragma once
class BlockTextureTessellator{
	public:
		void getTessellatedTexturesInfo(TextureUVCoordinateSet const&);
		void registerUVs(std::vector<std::pair<TextureUVCoordinateSet,Rect2D>,std::allocator<std::pair<TextureUVCoordinateSet,Rect2D>>> const&,TextureData const&);
		void render(Tessellator &,Vec3 const&,TextureUVCoordinateSet const&,bool,int,float,Vec3 const&,bool,bool);
};
