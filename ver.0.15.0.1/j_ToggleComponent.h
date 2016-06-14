#pragma once
namespace j{
	class ToggleComponent{
		public:
		void _updateControlVisibility(void);
		void resetDefaultState(void);
		void setChecked(bool);
		void setCheckedHoverStateControl(std::shared_ptr<UIControl> &);
		void setCheckedLockedStateControl(std::shared_ptr<UIControl> &);
		void setCheckedStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedHoverStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedLockedStateControl(std::shared_ptr<UIControl> &);
		void setUncheckedStateControl(std::shared_ptr<UIControl> &);
	}
};
