#pragma once
class BlockOccluder{
	public:
		BlockOccluder(BlockTessallatorCache &,Block const&,BlockPos const&,AABB const&,std::initializer_list<signed char> const&,bool);
		void _isHalfCubeOpaque(Block const&);
		void _isOpaque(Block const&);
		void _isTransparent(BlockPos const&);
		void _setOccluded(signed char,bool);
		void _shouldOcclude(signed char,AABB const&,BlockPos const&);
		void _shouldOccludeFence(signed char,AABB const&,BlockPos const&);
		void _shouldOccludeGlass(signed char,AABB const&,BlockPos const&);
		void _shouldOccludeLeaves(signed char,AABB const&,BlockPos const&);
		void _shouldOccludeLiquid(signed char,AABB const&,BlockPos const&);
		void _shouldOccludePortal(signed char,AABB const&,BlockPos const&);
		void _shouldOccludeSlab(signed char,AABB const&,BlockPos const&);
		void _shouldOccludeSlime(signed char,AABB const&,BlockPos const&);
		void _shouldOccludeThinFence(signed char,AABB const&,BlockPos const&);
		void _shouldRenderFace(BlockPos const&,signed char,AABB const&);
		void _updateRenderFace(Block const&,BlockPos const&,AABB const&,signed char);
		void anyVisible(void);
		void isDeepLeafBlock(BlockPos const&);
		void occludes(signed char);
};
