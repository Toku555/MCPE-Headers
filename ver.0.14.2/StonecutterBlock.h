#pragma once
class StonecutterBlock{
	public:
		StonecutterBlock(std::string const&,int);
		void getTexture(signed char);
		void isCraftingBlock(void);
		void use(Player &,BlockPos const&);
		void ~StonecutterBlock();
		void ~StonecutterBlock();
};
