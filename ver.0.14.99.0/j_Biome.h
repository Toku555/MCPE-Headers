#pragma once
namespace j{
	class Biome{
		public:
		void SaveInstanceData(LevelStorage &);
		void getBiome(int);
		void getTreeFeature(Random *);
		void setColor(int);
		void setColor(int,bool);
		void ~Biome();
	}
};
