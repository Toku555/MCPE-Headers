#pragma once
class RiverMixerLayer{
	public:
		RiverMixerLayer(uint,std::shared_ptr<Layer> &,std::shared_ptr<Layer> &);
		void fillArea(LayerData &,int,int,int,int);
		void init(long long);
		void ~RiverMixerLayer();
		void ~RiverMixerLayer();
};
