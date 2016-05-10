#pragma once
class LightningBolt{
	public:
		LightningBolt(BlockSource &);
		void addAdditionalSaveData(CompoundTag &);
		void getEntityTypeId(void);
		void readAdditionalSaveData(CompoundTag const&);
		void shouldAlwaysRender(void);
		void ~LightningBolt();
		void ~LightningBolt();
};
