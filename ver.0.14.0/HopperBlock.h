#pragma once
class HopperBlock{
	public:
		HopperBlock(std::string const&,int);
		void _installCircuit(BlockSource &,BlockPos const&);
		void addAABBs(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void getAttachedFace(int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getHopperBlockEntity(BlockSource &,BlockPos const&);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getTexture(signed char,int);
		void getTexture(std::string const&);
		void hasComparatorSignal(void);
		void isInteractiveBlock(void);
		void isTurnedOn(int);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRemove(BlockSource &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~HopperBlock();
		void ~HopperBlock();
};
