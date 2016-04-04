#pragma once
class GridItemComponent{
	public:
		GridItemComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getGridPosition(void);
		void setGridPosition(glm::detail::tvec2<int> const&);
		void ~GridItemComponent();
		void ~GridItemComponent();
};
