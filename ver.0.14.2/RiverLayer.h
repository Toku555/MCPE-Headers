#pragma once
class RiverLayer{
	public:
		RiverLayer(uint,std::shared_ptr<Layer> &);
		void fillArea(LayerData &,int,int,int,int);
		void riverFilter(int);
		void ~RiverLayer();
		void ~RiverLayer();
};
