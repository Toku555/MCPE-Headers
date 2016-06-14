#pragma once
namespace j{
	class ScreenView{
		public:
		void _advanceToNextToggleInNavigationTabGroup(bool);
		void _bindData(void);
		void _cycleLegacyTab(void);
		void _deselectControl(void);
		void _handleDirtyVisualTree(bool);
		void _handlePointerLocation(glm::detail::tvec2<float> const&,bool);
		void _handleStickScrolling(DirectionId);
		void _selectNextFocusObject(ui::CardinalDirection);
		void _setKeyboardHeight(float);
		void _updateKeyboardVisibility(void);
		void setDebugRendering(bool);
	}
};
