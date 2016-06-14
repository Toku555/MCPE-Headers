#pragma once
class RenderChunk{
	public:
		RenderChunk(BlockPos const&);
		RenderChunk(BlockPos const&);
		void _changeBuildState(RenderChunk::BuildState,RenderChunk::BuildState);
		void _changeSortState(RenderChunk::SortState,RenderChunk::SortState);
		void _chooseMaterial(TerrainLayer,double,bool);
		void _initLayers(mce::MaterialPtr *,std::string const&);
		void _initLayers(mce::MaterialPtr *,std::string const&);
		void _tryChangeBuildState(RenderChunk::BuildState,RenderChunk::BuildState);
		void _tryChangeSortState(RenderChunk::SortState,RenderChunk::SortState);
		void canSeeChunkLookingFrom(uchar,uchar);
		void canSeeChunkLookingFrom(uchar,uchar);
		void distanceToSqr(Entity const*);
		void endFaceSort(void);
		void endFaceSort(void);
		void endRebuild(Vec3 const&);
		void endRebuild(Vec3 const&);
		void faceSort(void);
		void faceSort(void);
		void getAverageBrightness(void);
		void getAverageBrightness(void);
		void getBlockIDTexture(void);
		void getBoundingBox(void);
		void getBoundingBox(void);
		void getCenter(void);
		void getCenter(void);
		void getDataBounds(void);
		void getDataBounds(void);
		void getDataState(BlockSource &);
		void getFaceCenter(int);
		void getFacing(int);
		void getFacing(int);
		void getPosition(void);
		void getPosition(void);
		void getPriority(RenderChunk const&);
		void hasImmediateChange(void);
		void hasImmediateChange(void);
		void hasLayer(TerrainLayer);
		void hasLayer(TerrainLayer);
		void initMaterials(mce::TextureGroup &);
		void initMaterials(mce::TextureGroup &);
		void isAllDark(void);
		void isAllDark(void);
		void isBottom(void);
		void isBuildState(RenderChunk::BuildState);
		void isBuildState(RenderChunk::BuildState);
		void isCulled(void);
		void isDirty(void);
		void isDirty(void);
		void isEmpty(void);
		void isEmpty(void);
		void isFaceSortDirty(void);
		void isFaceSortDirty(void);
		void isPending(void);
		void isReady(void);
		void isReady(void);
		void isSkyLit(void);
		void isSkyLit(void);
		void isSortState(RenderChunk::SortState);
		void isSortState(RenderChunk::SortState);
		void isTop(void);
		void isVisible(int);
		void isVisible(int);
		void isVisited(uint);
		void isVisited(uint);
		void rebuild(bool);
		void rebuild(bool);
		void render(TerrainLayer,double,bool);
		void render(TerrainLayer,double,bool);
		void reset(void);
		void reset(void);
		void setBoundingBox(AABB);
		void setCenter(BlockPos);
		void setDataBounds(Bounds);
		void setDirty(Tick,bool);
		void setDirty(Tick,bool);
		void setPos(BlockPos const&);
		void setPos(BlockPos const&);
		void setPosition(BlockPos);
		void setUnderwater(bool);
		void setUnderwater(bool);
		void setVisibilityChanged(void);
		void setVisibilityChanged(void);
		void setVisible(bool,uint);
		void setVisible(bool,uint);
		void sortFaces(void);
		void sortFaces(void);
		void startFaceSort(std::unique_ptr<RenderChunkSorter,std::default_delete<RenderChunkSorter>>);
		void startFaceSort(std::unique_ptr<RenderChunkSorter,std::default_delete<RenderChunkSorter>>);
		void startRebuild(std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>);
		void startRebuild(std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>);
		void updateDistanceFromPlayer(Vec3 const&);
		void updateDistanceFromPlayer(Vec3 const&);
		void updateFaceSortState(BlockPos);
		void updateFaceSortState(BlockPos);
		void wasVisibileInPastFrames(void);
		void ~RenderChunk();
		void ~RenderChunk();
};
