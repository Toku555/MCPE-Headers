#pragma once
namespace j{
	class LevelRenderer{
		public:
		void _buildImmediate(RenderChunk &);
		void _recalculateRenderDistance(void);
		void _renderChunkQueue(std::vector<RenderChunk *,std::allocator<RenderChunk *>> const&,TerrainLayer,bool);
		void onAppSuspended(void);
		void onStereoOptionChanged(void);
		void onViewRadiusChanged(bool);
		void setDimension(Dimension *,bool,bool);
		void updateFarChunksDistance(void);
		void ~LevelRenderer();
	}
};
