#pragma once
class SlimeBlock{
	public:
		SlimeBlock(std::string const&,int,Material const&);
		SlimeBlock(std::string const&,int,Material const&);
		void getExtraRenderLayers(void);
		void getExtraRenderLayers(void);
		void onFallOn(BlockSource &,BlockPos const&,Entity *,float);
		void onFallOn(BlockSource &,BlockPos const&,Entity *,float);
		void onStepOn(Entity &,BlockPos const&);
		void onStepOn(Entity &,BlockPos const&);
		void updateEntityAfterFallOn(Entity &);
		void updateEntityAfterFallOn(Entity &);
		void ~SlimeBlock();
		void ~SlimeBlock();
};
