#pragma once
class WorkbenchBlock{
	public:
		WorkbenchBlock(std::string const&,int);
		void getTexture(signed char);
		void isCraftingBlock(void);
		void use(Player &,BlockPos const&);
		void ~WorkbenchBlock();
		void ~WorkbenchBlock();
};
