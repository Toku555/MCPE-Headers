#pragma once
class ItemDiffer{
	public:
		ItemDiffer(std::vector<ItemInstance const*,std::allocator<ItemInstance const*>> const&);
		void getDiff(std::vector<ItemInstance const*,std::allocator<ItemInstance const*>> const&,std::vector&<int,std::allocator<int>>);
};
