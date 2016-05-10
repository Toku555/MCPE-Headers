#pragma once
class Font{
	public:
		Font(std::string const&,mce::TextureGroup *);
		void append(Tessellator &);
		void render(mce::MaterialPtr const&);
		void _buildChar(std::vector<Font::GlyphQuad,std::allocator<Font::GlyphQuad>> &,int,Color const&,bool,float,float,bool);
		void _containsUnicodeChar(std::string const&);
		void _containsWideChar(std::string const&);
		void _draw(std::string const&,float,float,Color const&,bool,bool);
		void _drawTextInsertCaret(Font::InsertCaretLocation const&);
		void _drawTextSegment(std::string const&,float,float,Color const&,bool,bool,bool);
		void _findNextWordPosition(std::string const&,uint,char,uint &,uint &);
		void _getCharWidth(int,bool);
		void _getStringChopAmount(std::string const&,bool,float);
		void _makeTextObject(std::string const&,Color const&,bool);
		void _scanUnicodeCharacterWidth(int,int,int);
		void _updateCaretPosition(std::string const&,float,bool,Font::InsertCaretLocation &);
		void _willTextFitOnNextLine(std::string const&,bool,float);
		void clearCache(void);
		void draw(std::string const&,float,float,Color const&,bool);
		void drawCached(std::string const&,float,float,Color const&,bool,bool,mce::MaterialPtr *);
		void drawShadow(std::string const&,float,float,Color const&,bool);
		void drawTransformed(std::string const&,float,float,Color const&,float,float,bool,float);
		void getCharWidths(void);
		void getColorCode(Color const&);
		void getColorCode(char,float);
		void getLineLength(std::string const&,float,bool);
		void getTextHeight(std::string const&);
		void hasFormattingCodes(std::string const&);
		void init(void);
		void onAppSuspended(void);
		void resetFormat(Color const&);
		void setCaretColor(Color const&);
		void ~Font();
		void ~Font();
};
