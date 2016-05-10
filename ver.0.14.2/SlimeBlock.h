#pragma once
class SlimeBlock{
	public:
		SlimeBlock(std::string const&,int,std::string const&,Material const&);
		void getExtraRenderLayers(void);
		void onFallOn(BlockSource &,BlockPos const&,Entity *,float);
		void onStepOn(Entity &,BlockPos const&);
		void updateEntityAfterFallOn(Entity &);
		void ~SlimeBlock();
		void ~SlimeBlock();
};
