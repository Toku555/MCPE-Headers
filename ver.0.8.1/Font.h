#pragma once
class Font{
	public:
		Font(AppPlatform *,Options *,std::string const&,Textures *);
		void buildChar(int,float,float,bool);
		void charWidth(int,bool);
		void containsUnicodeChar(std::string const&);
		void draw(char const*,float,float,int);
		void draw(char const*,float,float,int,bool);
		void draw(std::string const&,float,float,int);
		void draw(std::string const&,float,float,int,bool);
		void drawShadow(char const*,float,float,int);
		void drawShadow(std::string const&,float,float,int);
		void drawShadow(std::string const&,float,float,int,int);
		void drawSlow(char const*,int,float,float,int,bool);
		void drawSlow(std::string const&,float,float,int,bool);
		void drawTransformed(std::string const&,float,float,int,float,float,bool,float);
		void drawWordWrap(std::string const&,float,float,float,int,bool,bool);
		void getParagraphs(std::string const&);
		void getPixelLength(std::string const&);
		void height(std::string const&,int);
		void init(Options *);
		void setDefaultTexture(void);
		void setUnicodeTexture(int);
		void width(std::string const&);
		void ~Font();
		void ~Font();
};
