#pragma once
class MusicBlockEntity{
	public:
		MusicBlockEntity(BlockPos const&);
		void load(CompoundTag &);
		void playNote(BlockSource &,BlockPos const&);
		void save(CompoundTag &);
		void tune(void);
		void ~MusicBlockEntity();
		void ~MusicBlockEntity();
};
