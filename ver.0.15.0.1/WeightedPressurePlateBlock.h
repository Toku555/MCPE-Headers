#pragma once
class WeightedPressurePlateBlock{
	public:
		WeightedPressurePlateBlock(std::string const&,int,Material const&,int);
		WeightedPressurePlateBlock(std::string const&,int,Material const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getDataForSignal(int);
		void getDataForSignal(int);
		void getSignalForData(int);
		void getSignalForData(int);
		void getSignalStrength(BlockSource &,BlockPos const&);
		void getSignalStrength(BlockSource &,BlockPos const&);
		void getTickDelay(void);
		void getTickDelay(void);
		void ~WeightedPressurePlateBlock();
		void ~WeightedPressurePlateBlock();
};
