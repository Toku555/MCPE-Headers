#pragma once
class GamepadLayoutScreenModel{
	public:
		GamepadLayoutScreenModel(MinecraftClient &);
		void _confirmQuitUnsaved(void);
		void _confirmResetState(void);
		void _confirmSaveUnassigned(void);
		void _populateLayout(void);
		void activateConfirmationAndExit(void);
		void closeBindingState(int);
		void getActionAtIndex(int);
		void getActionCount(void);
		void getBindingState(void);
		void getConfirmationText(void);
		void hasUnassignedButtons(void);
		void hasUnsavedChanges(void);
		void isConfirmationVisible(void);
		void isDirty(void);
		void mapButton(int,int);
		void openBindingState(int);
		void saveLayout(void);
		void setBindingState(BindingState);
		void setDefaultGamepad(void);
		void setDirtyFlag(bool);
		void toggleConfirmationVisibility(GamePadModelConfirmations);
		void ~GamepadLayoutScreenModel();
		void ~GamepadLayoutScreenModel();
};
