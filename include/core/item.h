#pragma once

#include <vector>
#include "Enums.h"

namespace core {

  class Item {
  public:
    Item(ItemType type, Rarity rarity);

    ItemType getType() const;
    Rarity getRarity() const;

  private:
    ItemType type;
    Rarity rarity;
  };

} // namespace core