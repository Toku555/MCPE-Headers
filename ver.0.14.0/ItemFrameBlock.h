#pragma once
class ItemFrameBlock{
	public:
		ItemFrameBlock(std::string const&,int);
		void _checkAchievements(Player &,BlockPos const&);
		void _getFacingID(int);
		void _getItemFrame(BlockSource &,BlockPos const&);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void attack(Player *,BlockPos const&);
		void canBeSilkTouched(void);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getDirection(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void hasComparatorSignal(void);
		void isInteractiveBlock(void);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void use(Player &,BlockPos const&);
		void ~ItemFrameBlock();
		void ~ItemFrameBlock();
};
