#pragma once
class BlockTessellator{
	public:
		void _findDepth(BlockPos const&,float);
		void _getBlockColor(BlockPos const&,Block &);
		void _getLightColorForWater(BlockPos const&,BrightnessPair);
		void _getTexture(Block &,BlockPos const&,signed char);
		void _occlusion(BlockPos const&);
		void _preparePolyCross(BlockPos const&,Block &);
		void _randomizeFaceDirection(Block &,signed char,BlockPos const&);
		void _tex1(Vec2 const&);
		void appendTessellatedBlock(FullBlock const&);
		void blend(int,int,int,int);
		void canRender(BlockShape);
		void clearBlockCache(void);
		void getData(BlockPos const&);
		void getLightColor(BlockPos const&);
		void getLightEmission(Block &);
		void getMeshForBlock(FullBlock const&);
		void getRegion(void);
		void getRenderLayer(void);
		void getTessellator(void);
		void getWaterHeight(BlockPos const&,Material const&);
		void isSolidRender(Block const&);
		void isTranslucent(Block const&);
		void renderEast(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderFaceDown(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderFaceUp(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderGuiBlock(FullBlock const&,mce::TexturePtr const&,float,float);
		void renderNorth(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderSouth(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderWest(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void resetCache(BlockPos const&,BlockSource &);
		void setForceOpaque(bool);
		void setRegion(BlockSource &);
		void setRenderLayer(int);
		void tessellateAirPortalFrameInWorld(EndPortalFrameBlock &,BlockPos const&,uchar);
		void tessellateAnvilInWorld(AnvilBlock &,BlockPos const&);
		void tessellateAnvilInWorld(AnvilBlock &,BlockPos const&,int);
		void tessellateAnvilInWorld(AnvilBlock &,BlockPos const&,int,bool);
		void tessellateAnvilPiece(AnvilBlock &,BlockPos const&,AnvilPart,float,float,float,float,bool,bool,int,int *,int);
		void tessellateBedInWorld(Block &,BlockPos const&,uchar);
		void tessellateBlockInWorld(Block &,BlockPos const&);
		void tessellateBlockInWorldFlat(Block &,BlockPos const&,Color const&,BlockOccluder const&);
		void tessellateBlockInWorldWithAmbienceOcclusion(Block &,BlockPos,Color const&,BlockOccluder const&);
		void tessellateBrewingStandInWorld(BrewingStandBlock &,BlockPos const&);
		void tessellateCactusInWorld(Block &,BlockPos const&);
		void tessellateCactusInWorld(Block &,BlockPos const&,Color const&);
		void tessellateCauldronInWorld(Block &,BlockPos const&,uchar);
		void tessellateCocoaInWorld(CocoaBlock &,BlockPos const&,uchar);
		void tessellateComparatorInWorld(Block &,BlockPos const&);
		void tessellateCrossInWorld(Block &,BlockPos const&,uchar,bool);
		void tessellateCrossPolyInWorld(Block &,BlockPos const&,uchar,bool);
		void tessellateCrossPolyTexture(TextureUVCoordinateSet const&,Vec3 const&,bool,Block &);
		void tessellateCrossTexture(Block &,uchar,Vec3 const&,bool,float);
		void tessellateCrossTexture(TextureUVCoordinateSet const&,Vec3 const&,bool,Block &,float);
		void tessellateDiodeInWorld(Block &,BlockPos const&);
		void tessellateDiodeInWorld(Block &,BlockPos const&,int);
		void tessellateDoorInWorld(Block &,BlockPos const&);
		void tessellateDoublePlantInWorld(DoublePlantBlock &,BlockPos const&,uchar,bool,bool);
		void tessellateDustInWorld(Block &,BlockPos const&,uchar);
		void tessellateExtraDataInWorld(Block &,BlockPos const&);
		void tessellateFenceGateInWorld(FenceGateBlock &,BlockPos const&,uchar);
		void tessellateFenceInWorld(FenceBlock &,BlockPos const&);
		void tessellateFireInWorld(Block &,BlockPos);
		void tessellateFlowerPotInWorld(FlowerPotBlock &,BlockPos const&);
		void tessellateHopperInWorld(Block &,BlockPos const&);
		void tessellateHopperInWorld(Block &,BlockPos const&,int,bool);
		void tessellateInWorld(Block &,BlockPos const&,uchar,TextureUVCoordinateSet const&);
		void tessellateInWorld(Block &,BlockPos const&,uchar,bool);
		void tessellateLadderInWorld(Block &,BlockPos const&,uchar);
		void tessellateLeverInWorld(Block &,BlockPos const&);
		void tessellateLilypadInWorld(Block &,BlockPos const&);
		void tessellateLiquidInWorld(LiquidBlock &,BlockPos const&,uchar);
		void tessellateRailInWorld(BaseRailBlock &,BlockPos const&);
		void tessellateRepeaterInWorld(Block &,BlockPos const&);
		void tessellateRowInWorld(Block &,BlockPos const&,uchar);
		void tessellateRowTexture(Block &,uchar,float,float,float);
		void tessellateSlimeBlockInWorld(Block &,BlockPos const&);
		void tessellateStairsInWorld(StairBlock &,BlockPos const&);
		void tessellateStemDirTexture(StemBlock &,uchar,int,float,Vec3 const&);
		void tessellateStemInWorld(StemBlock &,BlockPos const&);
		void tessellateStemTexture(Block &,uchar,float,float,float,float);
		void tessellateThinFenceInWorld(ThinFenceBlock &,BlockPos const&,uchar);
		void tessellateTopSnowInWorld(Block &,BlockPos const&,uchar);
		void tessellateTorch(Block &,Vec3 const&,float,float);
		void tessellateTorchInWorld(Block &,BlockPos const&,uchar);
		void tessellateTreeInWorld(Block &,BlockPos const&,uchar);
		void tessellateTripwireHookInWorld(Block &,BlockPos const&);
		void tessellateTripwireInWorld(Block &,BlockPos const&);
		void tessellateVineInWorld(Block &,BlockPos const&,uchar);
		void tessellateWallInWorld(WallBlock &,BlockPos const&);
};