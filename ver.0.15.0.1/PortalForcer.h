#pragma once
class PortalForcer{
	public:
		PortalForcer(Level &);
		PortalForcer(Level &);
		void addPortalRecord(BlockSource &,int,int,int,int,int);
		void addPortalRecord(BlockSource &,int,int,int,int,int);
		void createPortal(Entity const&,int);
		void createPortal(Entity const&,int);
		void findPortal(DimensionId,BlockPos const&,int,BlockPos&);
		void findPortal(DimensionId,BlockPos const&,int,BlockPos&);
		void force(Entity &);
		void force(Entity &);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void printPortalRecords(int);
		void removePortalRecord(BlockSource &,BlockPos const&);
		void removePortalRecord(BlockSource &,BlockPos const&);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void translatePosAcrossDimension(Vec3 const&,DimensionId,DimensionId);
		void translatePosAcrossDimension(Vec3 const&,DimensionId,DimensionId);
		void travelPortal(Entity &,BlockPos const&,DimensionId);
		void travelPortal(Entity &,BlockPos const&,DimensionId);
		void ~PortalForcer();
		void ~PortalForcer();
		void ~PortalForcer();
		void ~PortalForcer();
};
