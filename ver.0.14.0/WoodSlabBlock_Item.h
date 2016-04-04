#pragma once
namespace WoodSlabBlock{
	class Item{
		public:
		void Item(std::string const&,int);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~Item();
		void ~Item();
		WoodSlabBlock(std::string const&,int,bool);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getResource(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~WoodSlabBlock();
		void ~WoodSlabBlock();
	}
};
