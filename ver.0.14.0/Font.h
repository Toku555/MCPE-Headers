#pragma once
class Font{
	public:
		Font(std::string const&,TextureGroup *);
		void append(Tessellator &);
		void render(mce::MaterialPtr const&);
		void _buildChar(std::vector<Font::GlyphQuad,std::allocator<Font::GlyphQuad>> &,int,Color const&,bool,float,float,bool);
		void _containsUnicodeChar(std::string const&);
		void _containsWideChar(std::string const&);
		void _draw(std::string const&,float,float,Color const&,bool,bool);
		void _getCharWidth(int,bool);
		void clearCache(void);
		void draw(std::string const&,float,float,Color const&,bool);
		void drawCached(std::string const&,float,float,Color const&,bool,bool,mce::MaterialPtr *);
		void drawShadow(std::string const&,float,float,Color const&,bool);
		void drawTransformed(std::string const&,float,float,Color const&,float,float,bool,float);
		void getCharWidths(void);
		void getColorCode(Color const&);
		void getColorCode(char,float);
		void getLineLength(std::string const&,bool);
		void getParagraphs(std::string const&);
		void hasFormattingCodes(std::string const&);
		void height(std::string const&);
		void height(std::string const&,int);
		void init(void);
		void onAppSuspended(void);
		void resetFormat(Color const&);
		void function<void ();
		void ~Font();
		void ~Font();
};
