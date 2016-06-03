#pragma once
class ArrowItem{
	public:
		ArrowItem(std::string const&,int);
		ArrowItem(std::string const&,int);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void applyEffect(std::unique_ptr<Arrow,std::default_delete<Arrow>> &,ItemInstance const*);
		void applyEffect(std::unique_ptr<Arrow,std::default_delete<Arrow>> &,ItemInstance const*);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void buildEffectDescriptionName(ItemInstance const&);
		void buildEffectDescriptionName(ItemInstance const&);
		void createEntity(BlockSource &,Vec3 const&,ItemInstance const*);
		void createEntity(Mob &,float,ItemInstance const*,ItemInstance const*);
		void createEntity(Mob &,float,ItemInstance const*,ItemInstance const*);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getIcon(int,int,bool);
		void getIcon(int,int,bool);
		void getMobEffect(int);
		void ~ArrowItem();
		void ~ArrowItem();
		void ~ArrowItem();
		void ~ArrowItem();
};
