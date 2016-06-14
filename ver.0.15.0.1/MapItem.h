#pragma once
class MapItem{
	public:
		MapItem(void);
		MapItem(void);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void blockTick(ItemInstance &,BlockSource &,BlockPos const&);
		void blockTick(ItemInstance &,BlockSource &,BlockPos const&);
		void doesDisplayPlayerMarkers(ItemInstance const&);
		void doesDisplayPlayerMarkers(ItemInstance const&);
		void getMapId(ItemInstance const&);
		void getMapId(ItemInstance const&);
		void getSavedData(EntityUniqueID const&,Level &);
		void getSavedData(EntityUniqueID const&,Level &);
		void getSavedData(ItemInstance &,Level &,Entity const&);
		void getSavedData(ItemInstance &,Level &,Entity const&);
		void getUpdatePacket(ItemInstance &,Level &,Entity &);
		void getUpdatePacket(ItemInstance &,Level &,Entity &);
		void inventoryTick(ItemInstance &,Level &,Entity &,int,bool);
		void inventoryTick(ItemInstance &,Level &,Entity &,int,bool);
		void onCraftedBy(ItemInstance &,Level &,Player &);
		void onCraftedBy(ItemInstance &,Level &,Player &);
		void setItemInstanceInfo(ItemInstance &,MapItemSavedData &);
		void setItemInstanceInfo(ItemInstance &,MapItemSavedData &);
		void update(BlockSource &,BlockPos const&,MapItemSavedData &);
		void update(Level &,Entity &,MapItemSavedData &);
		void update(Level &,Entity &,MapItemSavedData &);
		void ~MapItem();
		void ~MapItem();
};
