#pragma once
namespace j{
	class Inventory{
		public:
		void canDestroy(Block &);
		void clearInventoryWithDefault(bool);
		void getSelectedItem(void);
		void getSelectedSlot(void);
		void moveToSelectedSlot(int);
		void selectSlot(int);
		void setupDefault(void);
	}
};
