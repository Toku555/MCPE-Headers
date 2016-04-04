#pragma once
class TextureTessellator{
	public:
		TextureTessellator(Tessellator &);
		void _addLighting(TextureData const&,Vec3 const&,uchar const*,int,int,bool);
		void end(void);
		void getStats(void);
		void tessellate(TextureData const&,int,int,int,int,bool,bool);
		void ~TextureTessellator();
		void ~TextureTessellator();
};
