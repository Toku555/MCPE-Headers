#pragma once
class CarrotOnAStickItem{
	public:
		CarrotOnAStickItem(std::string const&,int);
		CarrotOnAStickItem(std::string const&,int);
		void getEnchantSlot(void);
		void getEnchantSlot(void);
		void getEnchantValue(void);
		void getEnchantValue(void);
		void getInteractText(Player const&);
		void getInteractText(Player const&);
		void isHandEquipped(void);
		void isHandEquipped(void);
		void isMirroredArt(void);
		void isMirroredArt(void);
		void requiresInteract(void);
		void requiresInteract(void);
		void use(ItemInstance &,Player &);
		void use(ItemInstance &,Player &);
		void useStick(ItemInstance &,Player &,int);
		void useStick(ItemInstance &,Player &,int);
		void ~CarrotOnAStickItem();
		void ~CarrotOnAStickItem();
};
