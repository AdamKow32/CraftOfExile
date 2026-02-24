#ifndef ENUMS_H
#define ENUMS_H

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
#endif //ENUMS_H