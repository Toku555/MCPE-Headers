#pragma once
class GridComponent{
	public:
		GridComponent(std::shared_ptr<UIControl> &);
		void _createGridItemAt(UIControlFactory &,std::shared_ptr<UIControl> &,int,int);
		void clone(std::shared_ptr<UIControl> &);
		void getCollectionName(void);
		void getGridDimensionBinding(void);
		void getGridDimensions(void);
		void getGridItemTemplate(void);
		void getGridItemTemplateSize(void);
		void getGridRescalingType(void);
		void getMaximumGridItems(void);
		void getNeedsRescaling(void);
		void onNotifyChildAdded(void);
		void onNotifyChildRemoved(void);
		void setCollectionName(std::string const&);
		void setGridDimensionBinding(std::string const&);
		void setGridDimensions(glm::detail::tvec2<int> const&);
		void setGridItemTemplate(std::shared_ptr<UIControl> &);
		void setGridRescalingType(ui::GridRescalingType const&);
		void setMaximumGridItems(int);
		void ~GridComponent();
		void ~GridComponent();
};
