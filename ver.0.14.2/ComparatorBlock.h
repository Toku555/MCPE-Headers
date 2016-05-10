#pragma once
class ComparatorBlock{
	public:
		ComparatorBlock(std::string const&,int,bool);
		void _installCircuit(BlockSource &,BlockPos const&,bool);
		void _refreshOutputState(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void getDirectSignal(BlockSource &,BlockPos const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getSignal(BlockSource &,BlockPos const&,int);
		void getTexture(signed char);
		void getTexture(signed char,int);
		void isInteractiveBlock(void);
		void isSignalSource(void);
		void isSubtractMode(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void triggerEvent(BlockSource &,BlockPos const&,int,int);
		void use(Player &,BlockPos const&);
		void ~ComparatorBlock();
		void ~ComparatorBlock();
};
