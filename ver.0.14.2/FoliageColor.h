#pragma once
class FoliageColor{
	public:
		void _getX(float,float);
		void _getY(float,float);
		void _index(float,float);
		void _toRGB(int);
		void buildGrassColor(BlockPos const&,BlockPos const&,BlockSource &,Random &);
		void getBirchColor(void);
		void getDefaultColor(void);
		void getEvergreenColor(void);
		void getFoliageColor(float,float);
		void getGrassColor(BlockSource &,BlockPos const&);
		void getGrassColor(float,float);
};
