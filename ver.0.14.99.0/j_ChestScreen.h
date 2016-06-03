#pragma once
namespace j{
	class ChestScreen{
		public:
		void _handleAddItem(FillingContainer *,FillingContainer *,int);
		void _setupPane(void);
		void _updateSelectedIndexes(StickDirection);
		void ~ChestScreen();
	}
};
