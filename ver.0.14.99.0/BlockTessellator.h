#pragma once
class BlockTessellator{
	public:
		BlockTessellator(Tessellator &,BlockSource *);
		BlockTessellator(Tessellator &,BlockSource *);
		void _findDepth(BlockPos const&,float);
		void _getBlockColor(BlockPos const&,Block &);
		void _getBlockColor(BlockPos const&,Block &,uchar);
		void _getLightColorForWater(BlockPos const&,BrightnessPair);
		void _getTexture(Block &,signed char,int);
		void _occlusion(BlockPos const&);
		void _preparePolyCross(BlockPos const&,Block &);
		void _preparePolyCross(BlockPos const&,Block &);
		void _randomizeFaceDirection(Block &,signed char,BlockPos const&);
		void _tex1(Vec2 const&);
		void appendTessellatedBlock(FullBlock const&);
		void appendTessellatedBlock(FullBlock const&);
		void blend(int,int,int,int);
		void canRender(BlockShape);
		void canRender(BlockShape);
		void clearBlockCache(void);
		void clearBlockCache(void);
		void getData(BlockPos const&);
		void getLightColor(BlockPos const&);
		void getLightEmission(Block &);
		void getMeshForBlock(FullBlock const&);
		void getMeshForBlock(FullBlock const&);
		void getMeshForBlockInWorld(FullBlock const&,BlockPos &);
		void getMeshForBlockInWorld(FullBlock const&,BlockPos &);
		void getRegion(void);
		void getRegion(void);
		void getTessellator(void);
		void getTessellator(void);
		void getWaterHeight(BlockPos const&,Material const&);
		void getWaterHeight(BlockPos const&,Material const&);
		void isSolidRender(Block const&);
		void isTranslucent(Block const&);
		void renderEast(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderEast(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderFaceDown(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderFaceDown(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderFaceUp(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderFaceUp(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderGuiBlock(FullBlock const&,mce::TexturePtr const&,float,float);
		void renderGuiBlock(FullBlock const&,mce::TexturePtr const&,float,float);
		void renderNorth(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderNorth(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderSouth(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderSouth(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderWest(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void renderWest(Block &,Vec3 const&,TextureUVCoordinateSet const&);
		void resetCache(BlockPos const&,BlockSource &);
		void resetCache(BlockPos const&,BlockSource &);
		void setForceOpaque(bool);
		void setForceOpaque(bool);
		void setRegion(BlockSource &);
		void setRegion(BlockSource &);
		void setRenderLayer(int);
		void setRenderLayer(int);
		void tessellateAirPortalFrameInWorld(EndPortalFrameBlock &,BlockPos const&,uchar);
		void tessellateAirPortalFrameInWorld(EndPortalFrameBlock &,BlockPos const&,uchar);
		void tessellateAnvilInWorld(AnvilBlock &,BlockPos const&);
		void tessellateAnvilInWorld(AnvilBlock &,BlockPos const&,int);
		void tessellateAnvilInWorld(AnvilBlock &,BlockPos const&,int,bool);
		void tessellateAnvilInWorld(AnvilBlock &,BlockPos const&,int,bool);
		void tessellateAnvilPiece(AnvilBlock &,BlockPos const&,AnvilPart,float,float,float,float,bool,bool,int,int *,int);
		void tessellateAnvilPiece(AnvilBlock &,BlockPos const&,AnvilPart,float,float,float,float,bool,bool,int,int *,int);
		void tessellateBedInWorld(Block &,BlockPos const&,uchar);
		void tessellateBedInWorld(Block &,BlockPos const&,uchar);
		void tessellateBlockInWorld(Block &,BlockPos const&,int);
		void tessellateBlockInWorld(Block &,BlockPos const&,int);
		void tessellateBlockInWorldFlat(Block &,BlockPos const&,int,Color const&,BlockOccluder *);
		void tessellateBlockInWorldFlat(Block &,BlockPos const&,int,Color const&,BlockOccluder *);
		void tessellateBlockInWorldWithAmbienceOcclusion(Block &,BlockPos,int,Color const&,BlockOccluder *);
		void tessellateBlockInWorldWithAmbienceOcclusion(Block &,BlockPos,int,Color const&,BlockOccluder *);
		void tessellateBrewingStandInWorld(BrewingStandBlock &,BlockPos const&,int);
		void tessellateBrewingStandInWorld(BrewingStandBlock &,BlockPos const&,int);
		void tessellateCactusInWorld(Block &,BlockPos const&,int);
		void tessellateCactusInWorld(Block &,BlockPos const&,int);
		void tessellateCauldronInWorld(Block &,BlockPos const&,uchar);
		void tessellateCauldronInWorld(Block &,BlockPos const&,uchar);
		void tessellateCocoaInWorld(CocoaBlock &,BlockPos const&,uchar);
		void tessellateCocoaInWorld(CocoaBlock &,BlockPos const&,uchar);
		void tessellateComparatorInWorld(Block &,BlockPos const&,int);
		void tessellateComparatorInWorld(Block &,BlockPos const&,int);
		void tessellateCrossInWorld(Block &,BlockPos const&,uchar,bool);
		void tessellateCrossPolyInWorld(Block &,BlockPos const&,uchar,bool);
		void tessellateCrossPolyTexture(TextureUVCoordinateSet const&,Vec3 const&,bool,Block &);
		void tessellateCrossPolyTexture(TextureUVCoordinateSet const&,Vec3 const&,bool,Block &);
		void tessellateCrossTexture(Block &,uchar,Vec3 const&,bool,float);
		void tessellateCrossTexture(TextureUVCoordinateSet const&,Vec3 const&,bool,Block &,float);
		void tessellateCrossTexture(TextureUVCoordinateSet const&,Vec3 const&,bool,Block &,float);
		void tessellateDiodeInWorld(Block &,BlockPos const&,int);
		void tessellateDoorInWorld(Block &,BlockPos const&,int);
		void tessellateDoorInWorld(Block &,BlockPos const&,int);
		void tessellateDoublePlantInWorld(DoublePlantBlock &,BlockPos const&,uchar,bool,bool);
		void tessellateDoublePlantInWorld(DoublePlantBlock &,BlockPos const&,uchar,bool,bool);
		void tessellateDustInWorld(Block &,BlockPos const&,uchar);
		void tessellateDustInWorld(Block &,BlockPos const&,uchar);
		void tessellateExtraDataInWorld(Block &,BlockPos const&);
		void tessellateFenceGateInWorld(FenceGateBlock &,BlockPos const&,uchar);
		void tessellateFenceGateInWorld(FenceGateBlock &,BlockPos const&,uchar);
		void tessellateFenceInWorld(FenceBlock &,BlockPos const&,int);
		void tessellateFenceInWorld(FenceBlock &,BlockPos const&,int);
		void tessellateFireInWorld(Block &,BlockPos);
		void tessellateFireInWorld(Block &,BlockPos);
		void tessellateFlowerPotInWorld(FlowerPotBlock &,BlockPos const&,int);
		void tessellateFlowerPotInWorld(FlowerPotBlock &,BlockPos const&,int);
		void tessellateHopperInWorld(Block &,BlockPos const&,int);
		void tessellateHopperInWorld(Block &,BlockPos const&,int);
		void tessellateHopperInWorld(Block &,BlockPos const&,int,bool);
		void tessellateHopperInWorld(Block &,BlockPos const&,int,bool);
		void tessellateInWorld(Block &,BlockPos const&,uchar,TextureUVCoordinateSet const&);
		void tessellateInWorld(Block &,BlockPos const&,uchar,TextureUVCoordinateSet const&);
		void tessellateInWorld(Block &,BlockPos const&,uchar,bool);
		void tessellateInWorld(Block &,BlockPos const&,uchar,bool);
		void tessellateLadderInWorld(Block &,BlockPos const&,uchar);
		void tessellateLadderInWorld(Block &,BlockPos const&,uchar);
		void tessellateLeverInWorld(Block &,BlockPos const&,int);
		void tessellateLeverInWorld(Block &,BlockPos const&,int);
		void tessellateLilypadInWorld(Block &,BlockPos const&);
		void tessellateLilypadInWorld(Block &,BlockPos const&);
		void tessellateLiquidInWorld(LiquidBlock &,BlockPos const&,uchar);
		void tessellateLiquidInWorld(LiquidBlock &,BlockPos const&,uchar);
		void tessellatePistonInWorld(Block &,BlockPos const&,int);
		void tessellatePistonInWorld(Block &,BlockPos const&,int);
		void tessellateRailInWorld(BaseRailBlock &,BlockPos const&,int);
		void tessellateRailInWorld(BaseRailBlock &,BlockPos const&,int);
		void tessellateRepeaterInWorld(Block &,BlockPos const&,int);
		void tessellateRepeaterInWorld(Block &,BlockPos const&,int);
		void tessellateRowInWorld(Block &,BlockPos const&,uchar);
		void tessellateRowInWorld(Block &,BlockPos const&,uchar);
		void tessellateRowTexture(Block &,uchar,float,float,float);
		void tessellateRowTexture(Block &,uchar,float,float,float);
		void tessellateSlimeBlockInWorld(Block &,BlockPos const&,int);
		void tessellateStairsInWorld(StairBlock &,BlockPos const&,int);
		void tessellateStairsInWorld(StairBlock &,BlockPos const&,int);
		void tessellateStemDirTexture(StemBlock &,uchar,int,float,Vec3 const&);
		void tessellateStemDirTexture(StemBlock &,uchar,int,float,Vec3 const&);
		void tessellateStemInWorld(StemBlock &,BlockPos const&);
		void tessellateStemInWorld(StemBlock &,BlockPos const&);
		void tessellateStemTexture(Block &,uchar,float,float,float,float);
		void tessellateStemTexture(Block &,uchar,float,float,float,float);
		void tessellateThinFenceInWorld(ThinFenceBlock &,BlockPos const&,uchar);
		void tessellateThinFenceInWorld(ThinFenceBlock &,BlockPos const&,uchar);
		void tessellateTopSnowInWorld(Block &,BlockPos const&,uchar);
		void tessellateTopSnowInWorld(Block &,BlockPos const&,uchar);
		void tessellateTorch(Block &,Vec3 const&,float,float);
		void tessellateTorch(Block &,Vec3 const&,float,float);
		void tessellateTorchInWorld(Block &,BlockPos const&,uchar);
		void tessellateTorchInWorld(Block &,BlockPos const&,uchar);
		void tessellateTreeInWorld(Block &,BlockPos const&,uchar);
		void tessellateTripwireHookInWorld(Block &,BlockPos const&,int);
		void tessellateTripwireHookInWorld(Block &,BlockPos const&,int);
		void tessellateTripwireInWorld(Block &,BlockPos const&,int);
		void tessellateTripwireInWorld(Block &,BlockPos const&,int);
		void tessellateVineInWorld(Block &,BlockPos const&,uchar);
		void tessellateVineInWorld(Block &,BlockPos const&,uchar);
		void tessellateWallInWorld(WallBlock &,BlockPos const&,int);
		void tessellateWallInWorld(WallBlock &,BlockPos const&,int);
		void ~BlockTessellator();
		void ~BlockTessellator();
};
