#include "core/item.h"

namespace core {
    Item::Item(ItemType type, Rarity rarity)
        : type(type), rarity(rarity) {}

    ItemType Item::getType() const {
        return type;
    }

    Rarity Item::getRarity() const {
        return rarity;
    }

	int Item::countPrefixes() const{
		int count = 0;
		for(const auto& affix : affixes) {
			if(affix.getType() == AffixType::Prefix)
				count++;
		}
		return count;
	}

	int Item::countSuffixes() const{
		int count = 0;
		for(const auto& affix : affixes) {
			if(affix.getType() == AffixType::Suffix)
				count++;
		}
		return count;
	}

	void Item::addAffix(const Affix& affix) {
		if(affix.getType() == AffixType::Prefix){
			if(countPrefixes() >= 3)
				return;
		}

		if(affix.getType() == AffixType::Suffix){
			if(countSuffixes() >= 3)
				return;
		}

		affixes.push_back(affix);
	}
} // namespace core