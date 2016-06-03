#pragma once
namespace j{
	class ButtonComponent{
		public:
		void _updateControlVisibility(void);
		void setDefaultStateControl(std::shared_ptr<UIControl> &);
		void setHoverStateControl(std::shared_ptr<UIControl> &);
		void setPressedStateControl(std::shared_ptr<UIControl> &);
	}
};
