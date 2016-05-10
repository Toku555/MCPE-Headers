#pragma once
class EnchantingTableBlock{
	public:
		EnchantingTableBlock(std::string const&,int);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void canBeSilkTouched(void);
		void getTexture(signed char);
		void isCraftingBlock(void);
		void use(Player &,BlockPos const&);
		void ~EnchantingTableBlock();
		void ~EnchantingTableBlock();
};
