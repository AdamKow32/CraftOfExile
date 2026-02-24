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
} // namespace core