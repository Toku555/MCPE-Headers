#pragma once
class RenderChunkBuilder{
	public:
		RenderChunkBuilder(ChunkSource &,Tessellator *,MemoryTracker *);
		void _buildRanges(void);
		void _checkAllDark(BlockSource &,BlockPos const&);
		void _checkPropagatedBrightness(BlockSource &,BlockPos const&);
		void _seesSkyDirectly(RenderChunk &,BlockSource &);
		void _setRange(TerrainLayer,uint,uint);
		void _setRenderLayerRange(Block::RenderLayer,uint,uint);
		void _sortBlocks(BlockSource &,RenderChunk &,VisibilityExtimator *,bool);
		void _tessellateQueues(RenderChunk &,BlockSource &);
		void build(RenderChunk &,bool);
		void setupIndexRanges(RangeIndices *,RangeIndices *);
		void sortFaces(RenderChunk &);
		void trim(void);
		void ~RenderChunkBuilder();
};
