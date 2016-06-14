#pragma once
class SmoothZoomLayer{
	public:
		SmoothZoomLayer(uint,std::shared_ptr<Layer> &);
		void fillArea(LayerData &,int,int,int,int);
		void fillArea(LayerData &,int,int,int,int);
		void zoom(uint,std::shared_ptr<Layer> &,int);
		void ~SmoothZoomLayer();
		void ~SmoothZoomLayer();
};
