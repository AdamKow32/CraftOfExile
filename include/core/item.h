#pragma once

#include <vector>
#include "Enums.h"
#include "affix.h"

namespace core {

  class Item {
  public:
    Item(ItemType type, Rarity rarity);

    ItemType getType() const;
    Rarity getRarity() const;

    void addAffix(const Affix& affix);
    int countPrefixes() const;
    int countSuffixes() const;

  private:
    ItemType type;
    Rarity rarity;
    std::vector<Affix> affixes;
  };

} // namespace core