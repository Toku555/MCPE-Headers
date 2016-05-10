#pragma once
class LightUpdate{
	public:
		LightUpdate(BlockSource &,LightLayer const&,BlockPos const&,BlockPos const&);
		void expandIfCloseEnough(BlockPos,BlockPos);
		void expandToContain(BlockPos const&);
		void expandToContain(BlockPos const&,BlockPos const&);
		void getLayer(void);
		void getRegion(void);
		void operator=(LightUpdate const*);
		void update(void);
		void updateFast(void);
};
