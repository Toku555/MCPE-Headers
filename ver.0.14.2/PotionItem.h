#pragma once
class PotionItem{
	public:
		PotionItem(std::string const&,int);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void buildDescriptionName(ItemInstance const&);
		void buildEffectDescriptionName(ItemInstance const&);
		void getEffectId(ItemInstance const*);
		void getIcon(int,int,bool);
		void isFoil(ItemInstance const*);
		void use(ItemInstance &,Player &);
		void useTimeDepleted(ItemInstance *,Level *,Player *);
		void ~PotionItem();
		void ~PotionItem();
};
