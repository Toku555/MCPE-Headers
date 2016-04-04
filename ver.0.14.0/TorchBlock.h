#pragma once
class TorchBlock{
	public:
		TorchBlock(std::string const&,int,std::string const&);
		void _checkCanSurvive(BlockSource &,BlockPos const&);
		void _checkDoPop(BlockSource &,BlockPos const&);
		void _flameParticlePos(BlockPos const&,uchar);
		void _isConnection(BlockSource &,BlockPos const&);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void canBePlacedOn(BlockSource &,BlockPos const&,signed char);
		void canBeSilkTouched(void);
		void canStandOn(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getIconYOffset(void);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~TorchBlock();
		void ~TorchBlock();
};
