#pragma once
class EnchantingTableBlock{
	public:
		EnchantingTableBlock(std::string const&,int);
		EnchantingTableBlock(std::string const&,int);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void isCraftingBlock(void);
		void isCraftingBlock(void);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~EnchantingTableBlock();
		void ~EnchantingTableBlock();
};
