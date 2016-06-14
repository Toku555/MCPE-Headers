#pragma once
class AnvilBlock{
	public:
		AnvilBlock(std::string const&,int,Material const&);
		AnvilBlock(std::string const&,int,Material const&);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void falling(void);
		void falling(void);
		void getDustColor(uchar);
		void getDustColor(uchar);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVariant(int);
		void getVariant(int);
		void isCraftingBlock(void);
		void isCraftingBlock(void);
		void isCubeShaped(void);
		void isSolidRender(void);
		void onLand(BlockSource &,BlockPos const&);
		void onLand(BlockSource &,BlockPos const&);
		void setPart(AnvilPart);
		void setPart(AnvilPart);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~AnvilBlock();
		void ~AnvilBlock();
};
