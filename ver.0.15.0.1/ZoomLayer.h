#pragma once
class ZoomLayer{
	public:
		ZoomLayer(uint,std::shared_ptr<Layer>);
		ZoomLayer(uint,std::shared_ptr<Layer>);
		ZoomLayer(uint,std::shared_ptr<Layer>);
		void fillArea(LayerData &,int,int,int,int);
		void fillArea(LayerData &,int,int,int,int);
		void zoom(uint,std::shared_ptr<Layer> &,int);
		void zoom(uint,std::shared_ptr<Layer> &,int);
		void ~ZoomLayer();
		void ~ZoomLayer();
};
