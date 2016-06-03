#pragma once
class MusicBlockEntity{
	public:
		MusicBlockEntity(BlockPos const&);
		MusicBlockEntity(BlockPos const&);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void playNote(BlockSource &,BlockPos const&);
		void playNote(BlockSource &,BlockPos const&);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void tune(void);
		void tune(void);
		void ~MusicBlockEntity();
		void ~MusicBlockEntity();
};
