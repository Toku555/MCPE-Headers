#pragma once
class LiquidBlock{
	public:
		LiquidBlock(std::string const&,int,Material const&);
		LiquidBlock(std::string const&,int,Material const&,std::string const&,std::string const&);
		void _getFlow(BlockSource &,BlockPos const&);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void emitFizzParticle(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getBrightness(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getDepth(BlockSource &,BlockPos const&);
		void getHeightFromData(int);
		void getMobToSpawn(BlockSource &,BlockPos const&);
		void getRenderedDepth(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSlopeAngle(BlockSource &,BlockPos const&,Material const&);
		void getTexture(signed char);
		void getTextureNum(int);
		void getTickDelay(BlockSource &);
		void handleEntityInside(BlockSource &,BlockPos const&,Entity *,Vec3 &);
		void mayPick(BlockSource &,int,bool);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void solidify(BlockSource &,BlockPos const&,BlockPos const&);
		void trySpreadFire(BlockSource &,BlockPos const&,Random &);
		void ~LiquidBlock();
		void ~LiquidBlock();
};
