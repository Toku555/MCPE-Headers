#pragma once
class EnchantingContainerManagerModel{
	public:
		EnchantingContainerManagerModel(ContainerID,Player &,BlockPos const&);
		void _getEnchantmentCost(ItemInstance const*);
		void broadcastChanges(void);
		void clearOptions(void);
		void getEnchantNames(void);
		void getEnchantmentCosts(void);
		void getEnchants(void);
		void getItems(void);
		void getLapisCount(void);
		void getNewEnchantmentSeed(void);
		void getShouldBookBeOpen(void);
		void getSlot(int);
		void init(void);
		void isTableValid(void);
		void recalculateOptions(void);
		void setData(int,int);
		void setShouldBookBeOpen(bool);
		void setSlot(int,ItemInstance &);
		void ~EnchantingContainerManagerModel();
		void ~EnchantingContainerManagerModel();
};
