#pragma once
class UIRect{
	public:
		void getAnchorPosition(ui::AnchorPoint);
		void getOffset(ui::LayoutOffset const&);
		void getPosition(void);
		void getSize(void);
		void setPosition(glm::detail::tvec2<float> const&);
		void setPositionGivenAnchor(ui::AnchorPoint,glm::detail::tvec2<float>);
		void setSize(glm::detail::tvec2<float> const&);
};
