#pragma once
namespace j{
	class OptionsScreen{
		public:
		void _linkToXboxAppMeProfile(void);
		void _selectCategory(StickDirection);
		void _toggleSignedInState(void);
		void _updateSelected(void);
		void selectCategory(int);
		void ~OptionsScreen();
	}
};
