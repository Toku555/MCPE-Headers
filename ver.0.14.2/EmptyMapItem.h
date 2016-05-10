#pragma once
class EmptyMapItem{
	public:
		EmptyMapItem(void);
		void getInteractText(void);
		void requiresInteract(void);
		void use(ItemInstance &,Player &);
		void ~EmptyMapItem();
		void ~EmptyMapItem();
};
