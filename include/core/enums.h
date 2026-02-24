#pragma once

namespace core {

    enum class ItemType {
        Sword,
        Helmet,
        Chest,
        Boots,
        Gloves
    };

    enum class AffixType {
        Prefix,
        Suffix
    };

    enum class Rarity {
        Normal,
        Magic,
        Rare
    };

} // namespace core