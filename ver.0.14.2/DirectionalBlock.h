#pragma once
class DirectionalBlock{
	public:
		DirectionalBlock(std::string const&,int,Material const&);
		DirectionalBlock(std::string const&,int,std::string const&,Material const&);
		void getDirection(uchar);
		void ~DirectionalBlock();
		void ~DirectionalBlock();
};
