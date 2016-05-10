#pragma once
class MobSpawnerBlock{
	public:
		MobSpawnerBlock(std::string const&,int);
		void canBeSilkTouched(void);
		void getExperienceDrop(Random &);
		void getResourceCount(Random &,int,int);
		void isRedstoneAttachable(void);
		void ~MobSpawnerBlock();
		void ~MobSpawnerBlock();
};
