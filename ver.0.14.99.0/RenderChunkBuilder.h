#pragma once
class RenderChunkBuilder{
	public:
		RenderChunkBuilder(ChunkSource &,Tessellator *,MemoryTracker *);
		RenderChunkBuilder(ChunkSource &,Tessellator *,MemoryTracker *);
		void _buildRanges(void);
		void _buildRanges(void);
		void _checkAllDark(BlockSource &,BlockPos const&);
		void _checkPropagatedBrightness(BlockSource &,BlockPos const&);
		void _getVisibilityHelper(void);
		void _initializeRebuildData(BlockSource &,RenderChunk &);
		void _initializeRebuildData(BlockSource &,RenderChunk &);
		void _seesSkyDirectly(RenderChunk &,BlockSource &);
		void _seesSkyDirectly(RenderChunk &,BlockSource &);
		void _setRange(TerrainLayer,uint,uint);
		void _setRenderLayerRange(Block::RenderLayer,uint,uint);
		void _sortBlocks(BlockSource &,RenderChunk &,VisibilityExtimator *,bool);
		void _sortBlocks(BlockSource &,RenderChunk &,VisibilityExtimator *,bool);
		void _tessellateQueues(RenderChunk &,BlockSource &);
		void _tessellateQueues(RenderChunk &,BlockSource &);
		void build(RenderChunk &,bool);
		void build(RenderChunk &,bool);
		void trim(void);
		void trim(void);
		void ~RenderChunkBuilder();
		void ~RenderChunkBuilder();
};
