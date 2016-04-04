#pragma once
class PortalRecord{
	public:
		PortalRecord(BlockPos const&);
		PortalRecord(BlockPos const&,int,int,int);
		void closestBlockPosTo(Entity const&);
		void operator==(PortalRecord const&);
};
