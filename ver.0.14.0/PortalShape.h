#pragma once
class PortalShape{
	public:
		PortalShape(BlockSource &,BlockPos,int);
		void calculatePortalHeight(void);
		void createPortalBlocks(void);
		void getDistanceUntilEdge(BlockPos const&,int);
		void getHeight(void);
		void getNumberOfPortalBlocks(void);
		void getWidth(void);
		void isEmptyBlock(BlockID);
		void isValid(void);
};
