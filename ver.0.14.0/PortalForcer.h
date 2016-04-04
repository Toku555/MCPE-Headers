#pragma once
class PortalForcer{
	public:
		void addPortalRecord(BlockSource &,int,int,int,int,int);
		void createPortal(Entity const&,int);
		void findPortal(DimensionId,BlockPos const&,int,BlockPos&);
		void force(Entity &);
		void load(CompoundTag const&);
		void printPortalRecords(int);
		void removePortalRecord(BlockSource &,BlockPos const&);
		void save(CompoundTag &);
		void translatePosAcrossDimension(Vec3 const&,DimensionId,DimensionId);
		void travelPortal(Entity &,BlockPos const&);
		void ~PortalForcer();
		void ~PortalForcer();
};
