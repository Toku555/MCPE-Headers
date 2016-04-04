#pragma once
class SmoothLayer{
	public:
		SmoothLayer(uint,std::shared_ptr<Layer> &);
		void fillArea(LayerData &,int,int,int,int);
		void ~SmoothLayer();
		void ~SmoothLayer();
};
