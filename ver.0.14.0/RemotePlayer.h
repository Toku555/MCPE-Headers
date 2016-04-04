#pragma once
class RemotePlayer{
	public:
		RemotePlayer(LocalPlayer &,PacketSender &,GameType,RakNet::RakNetGUID const&,mce::UUID);
		void aiStep(void);
		void destroyRegion(void);
		void normalTick(void);
		void onMovePlayerPacketNormal(Vec3 const&,Vec2 const&);
		void onRegionDestroyed(void);
		void prepareRegion(ChunkSource &);
		void refreshContainer(IContainerManager &,std::vector<ItemInstance,std::allocator<ItemInstance>> const&);
		void setContainerData(IContainerManager &,int,int);
		void slotChanged(IContainerManager &,int,ItemInstance const&,bool);
		void suspendRegion(void);
		void tickWorld(Tick const&);
		void ~RemotePlayer();
		void ~RemotePlayer();
};
