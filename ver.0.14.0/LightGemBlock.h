#pragma once
class LightGemBlock{
	public:
		LightGemBlock(std::string const&,int,std::string const&,Material const&);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void ~LightGemBlock();
		void ~LightGemBlock();
};
