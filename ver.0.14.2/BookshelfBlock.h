#pragma once
class BookshelfBlock{
	public:
		BookshelfBlock(std::string const&,int,std::string const&);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getTexture(signed char);
		void ~BookshelfBlock();
		void ~BookshelfBlock();
};
